#include "../cheat/hooks.hpp"
#include <filesystem>
#include "../sdk/spoof2.h"
#include <process.h>
#include <windows.h>

HMODULE g_hModule = NULL;


extern "C" __declspec(dllexport) LRESULT NextHook(int code, WPARAM wParam, LPARAM lParam) {
    return CallNextHookEx(nullptr, code, wParam, lParam);
}

void bypass_pak_signing();
void mount_custom_pak(const wchar_t* path, int priority);

__int64 get_fpak_platform_file()
{
    auto delegate = *(__int64*)((uintptr_t)GetModuleHandleA(nullptr) + offsets::get_fpak_platform_file);
    if (!delegate) return 0;
    return *(__int64*)(delegate + 24);
}

void bypass_pak_signing()
{
    auto delegate = (uint8_t*)((uintptr_t)GetModuleHandleA(nullptr) + offsets::bypass_pak_signing);
    DWORD old_protect;
    VirtualProtect(delegate, 0x20, PAGE_READWRITE, &old_protect);
    memset(delegate, 0, 0x20);
    VirtualProtect(delegate, 0x20, old_protect, &old_protect);

    auto fpak = get_fpak_platform_file();
    if (fpak) {
        auto bsigned_ptr = (uint8_t*)(fpak + 48);
        VirtualProtect(bsigned_ptr, 1, PAGE_READWRITE, &old_protect);
        *bsigned_ptr = 0;
        VirtualProtect(bsigned_ptr, 1, old_protect, &old_protect);
    }
}

void mount_custom_pak(const wchar_t* path, int priority)
{
    auto fpak = get_fpak_platform_file();
    if (!fpak) return;

    typedef bool(__fastcall* fn_mount)(__int64, const wchar_t*, int, const wchar_t*, bool, bool);
    auto mount = (fn_mount)((uintptr_t)GetModuleHandleA(nullptr) + offsets::mount_custom_pak);
    mount(fpak, path, priority, nullptr, true, false);
}

void StartInitialization() {
    
    uintptr_t base = 0;
    while (!base) {
        base = (uintptr_t)GetModuleHandleA("VALORANT-Win64-Shipping.exe");
        Sleep(500);
    }

    memory::module_base = base;
    (initialize_spoofcall)((uint8_t*)memory::module_base);

    bypass_pak_signing();
    mount_custom_pak(L"C:\\mods\\pakchunk1-Windows_P.pak", 10000);
    mount_custom_pak(L"C:\\mods\\pakchunk2-Windows_P.pak", 10001);
    mount_custom_pak(L"C:\\mods\\pakchunk3-Windows_P.pak", 10002);
    
    hooks::q9F_init();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID reserved) {
    if (reason == DLL_PROCESS_ATTACH) {
        g_hModule = hModule;
        DisableThreadLibraryCalls(hModule);

        
        
        CloseHandle(CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)StartInitialization, nullptr, 0, nullptr));
    }
    return TRUE;
}