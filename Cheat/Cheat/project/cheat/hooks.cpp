#include "junkcode.h"
#include "hooks.hpp"
#include <math.h>
#include <vector>
#include <cmath>
#include <algorithm> 
#include <cwctype>  
#include "../sdk/spoof.h"
#include "../sdk/ret_spoof.h"
#include <locale>
#include <codecvt>
#include <fstream>
#include <cstdint>
#pragma comment(lib, "Winmm.lib")
bool InGame = 0;
uintptr_t playercontroller;
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
bool nega = false; bool nega1 = false; bool nega2 = false;
constexpr auto PI = 3.1415926535897932;
constexpr auto FLOAT_NON_FRACTIONAL = 8388608 /* All single-precision floating point numbers greater than or equal to this have no fractional value. */;
constexpr auto INV_PI = 0.31830988618;
constexpr auto HALF_PI = 1.57079632679;
constexpr auto DEG_TO_RAD = PI / 180;
constexpr auto RADS_DIVIDED_BY_2 = DEG_TO_RAD / 2;
aplayercameramanager* camera_cache;
static AGameObject* SkyDome = nullptr;
ashootercharacter* target_actor;
float fovforantiaim;
#include <unordered_set>
#include <random>
ashootercharacter* actor2;
#include "../DefineSDK.h"
#include <filesystem>
namespace fs = std::filesystem;
#define DefusePercentageMax 6.984602
#define CurrentDefuseSectionMax 2
ucanvas* canvas;
float rainbowTimeZ = 0;

float rainbowTimeZRGB1 = 2;
uworld* world;
uobject* negrito;
float distance;
fvector2d position2;
aplayercameramanager* camera;
aplayercontroller* controller;
aplayercontroller* controller67;
ashootercharacter* pawn;
ashootercharacter* japarms;
float rainbowTimeZHandChams = 0;
typedef NTSTATUS(NTAPI* pNtProtectVirtualMemory)(
    HANDLE ProcessHandle,
    PVOID* BaseAddress,
    PSIZE_T RegionSize,
    ULONG NewProtect,
    PULONG OldProtect
    );
static constexpr size_t CHAT_MAX_LENGTH = 512;
static constexpr DWORD CURSOR_BLINK_MS = 500; // blink interval
static bool chatTypingActive = false;
static DWORD lastCursorFlip = 0;
static bool cursorOn = true;
static std::array<bool, 256> prevKeyDown = { false };

float fresnelBaseR = 2.093f;
float fresnelBaseG = 0.019f;
float fresnelBaseB = 20.0f;
bool stop_for_shot;
ABP_Sky_Sphere_C* SkyBoxOffsets;



#include <sstream>

#include <fstream>
#include <string>
#include <sstream>

#define SAVE_BOOL(var) file << #var << "=" << var << "\n";
#define SAVE_FLOAT(var) file << #var << "=" << var << "\n";
#define LOAD_BOOL(var) if (line.find(#var) != std::string::npos) var = std::stoi(value); 
#define LOAD_FLOAT(var) if (line.find(#var) != std::string::npos) var = std::stof(value);

void SaveConfig(const std::string& path)
{
    std::ofstream file(path, std::ios::trunc);

    // === VISUALS ===
    SAVE_FLOAT(globals::visuals::chamsAlpha);
    SAVE_BOOL(globals::visuals::box);
    SAVE_FLOAT(globals::visuals::visiblepreset);
    SAVE_FLOAT(globals::visuals::visiblepresetforself);
    SAVE_FLOAT(globals::visuals::invisiblepreset);
    SAVE_BOOL(globals::visuals::RadarMap);
    SAVE_BOOL(globals::visuals::viewangle);
    SAVE_BOOL(globals::visuals::Radar);
    SAVE_BOOL(globals::visuals::playername);
    SAVE_BOOL(globals::visuals::playerrank);
    SAVE_BOOL(globals::visuals::NIGGERS);
    SAVE_BOOL(globals::visuals::minimap);
    SAVE_BOOL(globals::visuals::hand_with_material);
    SAVE_BOOL(globals::visuals::selfma);
    SAVE_BOOL(globals::visuals::gun_with_material);
    SAVE_FLOAT(globals::visuals::box_type);
    SAVE_BOOL(globals::visuals::weaponstate);
    SAVE_BOOL(globals::visuals::weaponname);
    SAVE_BOOL(globals::visuals::box2d);
    SAVE_BOOL(globals::visuals::box3d);
    SAVE_BOOL(globals::visuals::filled);
    SAVE_BOOL(globals::visuals::box3dd);
    SAVE_BOOL(globals::visuals::headbox);
    SAVE_BOOL(globals::visuals::skeleton);
    SAVE_BOOL(globals::visuals::snapline);
    SAVE_BOOL(globals::visuals::snapline1);
    SAVE_BOOL(globals::visuals::healthbar);
    SAVE_BOOL(globals::visuals::booms);
    SAVE_BOOL(globals::visuals::biims);
    SAVE_BOOL(globals::visuals::Dropped);
    SAVE_BOOL(globals::visuals::dstc);
    SAVE_BOOL(globals::visuals::angle);
    SAVE_BOOL(globals::visuals::mawmawmaw);
    SAVE_BOOL(globals::visuals::mawmaw);
    SAVE_BOOL(globals::visuals::HandChams);
    SAVE_BOOL(globals::visuals::SkyBoxEnabled);
    SAVE_BOOL(globals::visuals::SkyBoxCustomImage);
    SAVE_BOOL(globals::visuals::WeaponChams);
    SAVE_BOOL(globals::visuals::HandChamsCustom);
    SAVE_BOOL(globals::visuals::skyboxenabledcustom);
    SAVE_BOOL(globals::visuals::skyboxenabledcustom2);
    SAVE_BOOL(globals::visuals::HandChamsRGB);
    SAVE_BOOL(globals::visuals::skyboxrgb);
    SAVE_BOOL(globals::visuals::dormant);
    SAVE_BOOL(globals::visuals::Hand_material);
    SAVE_BOOL(globals::visuals::visiblecheck);
    SAVE_BOOL(globals::visuals::abilitiesspike);
    SAVE_BOOL(globals::visuals::SpikeLineUp);
    SAVE_BOOL(globals::visuals::abilities);
    SAVE_BOOL(globals::visuals::chams);
    SAVE_BOOL(globals::visuals::chamsRGB);
    SAVE_FLOAT(globals::visuals::time);
    SAVE_FLOAT(globals::misc::Overall.r);
    SAVE_FLOAT(globals::misc::Overall.g);
    SAVE_FLOAT(globals::misc::Overall.b);
    SAVE_FLOAT(globals::misc::Overall.a);
    SAVE_FLOAT(globals::misc::Zenith.r);
    SAVE_FLOAT(globals::misc::Zenith.g);
    SAVE_FLOAT(globals::misc::Zenith.b);
    SAVE_FLOAT(globals::misc::Zenith.a);
    SAVE_FLOAT(globals::misc::Horizon.r);
    SAVE_FLOAT(globals::misc::Horizon.g);
    SAVE_FLOAT(globals::misc::Horizon.b);
    SAVE_FLOAT(globals::misc::Horizon.a);
    SAVE_FLOAT(globals::misc::Cloud.r);
    SAVE_FLOAT(globals::misc::Cloud.g);
    SAVE_FLOAT(globals::misc::Cloud.b);
    SAVE_FLOAT(globals::misc::Cloud.a);
    SAVE_FLOAT(globals::misc::CloudSpeed);
    SAVE_FLOAT(globals::misc::StarsBrightness);
    SAVE_FLOAT(globals::misc::CloudOpacity);

    // === AIMBOT ===
    SAVE_BOOL(globals::aimbot::aimbot);
    SAVE_BOOL(globals::aimbot::nospread);
    SAVE_BOOL(globals::aimbot::Prediction);
    SAVE_BOOL(globals::aimbot::BulletTrace);
    SAVE_BOOL(globals::aimbot::BulletTraceAntiAim);
    SAVE_BOOL(globals::aimbot::aimbot360);
    SAVE_BOOL(globals::aimbot::nodelay);
    SAVE_BOOL(globals::aimbot::silentmaw);
    SAVE_BOOL(globals::aimbot::triggerbot);
    SAVE_BOOL(globals::aimbot::triggermaw);
    SAVE_BOOL(globals::aimbot::AutoShoot);
    SAVE_BOOL(globals::aimbot::vish_check);
    SAVE_BOOL(globals::aimbot::recoilcrosshair);
    SAVE_BOOL(globals::aimbot::recoil_control);
    SAVE_BOOL(globals::aimbot::draw_fov);
    SAVE_BOOL(globals::aimbot::draw_fovrainbow);
    SAVE_FLOAT(globals::aimbot::aim_smooth);
    SAVE_FLOAT(globals::aimbot::AutoshootFloat);
    SAVE_FLOAT(globals::aimbot::fovtrigger);
    SAVE_FLOAT(globals::aimbot::bossmaw);
    SAVE_FLOAT(globals::aimbot::aim_fov);
    SAVE_FLOAT(globals::aimbot::aim_bone);
    SAVE_FLOAT(globals::aimbot::aim_key);
    SAVE_FLOAT(globals::aimbot::trigger_key);
    SAVE_FLOAT(globals::aimbot::NIGGAMAW);

    // === MISC ===
    SAVE_BOOL(globals::misc::skiptutorial);
    SAVE_FLOAT(globals::misc::GlowIntensity);
    SAVE_BOOL(globals::misc::nightmode);
    SAVE_BOOL(globals::misc::antiafk);
    SAVE_BOOL(globals::misc::crosshairrainbow);
    SAVE_BOOL(globals::misc::onlylastkill);
    SAVE_BOOL(globals::misc::KillSound);
    SAVE_BOOL(globals::misc::KillMessage);
    SAVE_BOOL(globals::misc::Hat);
    SAVE_BOOL(globals::misc::AntiFlash);
    SAVE_BOOL(globals::misc::skin_changer);
    SAVE_BOOL(globals::misc::antiaim);
    SAVE_BOOL(globals::misc::SetCamera);
    SAVE_BOOL(globals::misc::force_resume_spin);
    SAVE_FLOAT(globals::misc::antiaimpitch);
    SAVE_FLOAT(globals::misc::antiaimyaw);
    SAVE_BOOL(globals::misc::widearms);
    SAVE_BOOL(globals::misc::GunCustome);
    SAVE_BOOL(globals::misc::enabled);
    SAVE_FLOAT(globals::misc::pitchmode);
    SAVE_FLOAT(globals::misc::visiblepreset);
    SAVE_FLOAT(globals::misc::invisiblepreset);
    SAVE_FLOAT(globals::misc::baseyaw);
    SAVE_FLOAT(globals::misc::offset);
    SAVE_FLOAT(globals::misc::yawmodifier);
    SAVE_FLOAT(globals::misc::modifieroffset);
    SAVE_FLOAT(globals::misc::materials);
    SAVE_FLOAT(globals::misc::widearmsselec);
    SAVE_FLOAT(globals::misc::Outlines);
    SAVE_FLOAT(globals::misc::cachepitch);
    SAVE_FLOAT(globals::misc::cachebaseyaw);
    SAVE_FLOAT(globals::misc::cacheoffset);
    SAVE_BOOL(globals::misc::mamaww);
    SAVE_BOOL(globals::misc::third_person);
    SAVE_BOOL(globals::misc::Fly);
    SAVE_BOOL(globals::misc::Holdthird);
    SAVE_BOOL(globals::misc::Holdthird1);
    SAVE_BOOL(globals::misc::crouch);
    SAVE_BOOL(globals::misc::spinbot);
    SAVE_BOOL(globals::misc::team_check);
    SAVE_BOOL(globals::misc::bunnyhop);
    SAVE_BOOL(globals::misc::nigaga);
    SAVE_BOOL(globals::misc::Camera);
    SAVE_FLOAT(globals::misc::widearmsfloat);
    SAVE_FLOAT(globals::misc::third_person_float);
    SAVE_FLOAT(globals::misc::spinbot_speed_nigger);
    SAVE_BOOL(globals::misc::skinchangor);
    SAVE_BOOL(globals::misc::fovchangor);
    SAVE_BOOL(globals::misc::big_gun);
    SAVE_BOOL(globals::misc::big_gun3p);
    SAVE_BOOL(globals::misc::dropped);
    SAVE_BOOL(globals::misc::WireframeSelf);
    SAVE_BOOL(globals::misc::AspectRatio);
    SAVE_FLOAT(globals::misc::aspectvalue);
    SAVE_FLOAT(globals::misc::GlowVisible);
    SAVE_FLOAT(globals::misc::GlowInvisible);
    SAVE_BOOL(globals::misc::GalaxyHand);
    SAVE_BOOL(globals::misc::GalaxySelf);
    SAVE_BOOL(globals::misc::GalaxyEnemy);
    SAVE_BOOL(globals::misc::fresnelrainbow);
    SAVE_BOOL(globals::misc::WireFrameEnemy);
    SAVE_BOOL(globals::misc::big_gun_3p);
    SAVE_BOOL(globals::misc::Spinbotserversided);
    SAVE_BOOL(globals::misc::third_person_2wireframe);
    SAVE_FLOAT(globals::misc::big_gun_float);
    SAVE_FLOAT(globals::misc::big_gun_float_3);
    SAVE_FLOAT(globals::misc::fov_changer_float);
    SAVE_FLOAT(globals::misc::glow_float);
    SAVE_BOOL(globals::misc::MeshCrouchModifed);

    // === BUDDY ===
    SAVE_BOOL(globals::buddy::enabled);
    SAVE_FLOAT(globals::buddy::index);

    file.close();
}

void LoadConfig(const std::string& path)
{
    std::ifstream file(path);
    std::string line;
    while (std::getline(file, line))
    {
        auto delim_pos = line.find('=');
        if (delim_pos == std::string::npos)
            continue;

        std::string value = line.substr(delim_pos + 1);

        // === VISUALS ===
        LOAD_FLOAT(globals::visuals::chamsAlpha);
        LOAD_BOOL(globals::visuals::box);
        LOAD_FLOAT(globals::visuals::visiblepreset);
        LOAD_FLOAT(globals::visuals::visiblepresetforself);
        LOAD_FLOAT(globals::visuals::invisiblepreset);
        LOAD_BOOL(globals::visuals::RadarMap);
        LOAD_BOOL(globals::visuals::viewangle);
        LOAD_BOOL(globals::visuals::Radar);
        LOAD_BOOL(globals::visuals::playername);
        LOAD_BOOL(globals::visuals::playerrank);
        LOAD_BOOL(globals::visuals::NIGGERS);
        LOAD_BOOL(globals::visuals::minimap);
        LOAD_BOOL(globals::visuals::hand_with_material);
        LOAD_BOOL(globals::visuals::selfma);
        LOAD_BOOL(globals::visuals::gun_with_material);
        LOAD_FLOAT(globals::visuals::box_type);
        LOAD_BOOL(globals::visuals::weaponstate);
        LOAD_BOOL(globals::visuals::weaponname);
        LOAD_BOOL(globals::visuals::box2d);
        LOAD_BOOL(globals::visuals::box3d);
        LOAD_BOOL(globals::visuals::filled);
        LOAD_BOOL(globals::visuals::box3dd);
        LOAD_BOOL(globals::visuals::headbox);
        LOAD_BOOL(globals::visuals::skeleton);
        LOAD_BOOL(globals::visuals::snapline);
        LOAD_BOOL(globals::visuals::snapline1);
        LOAD_BOOL(globals::visuals::healthbar);
        LOAD_BOOL(globals::visuals::booms);
        LOAD_BOOL(globals::visuals::biims);
        LOAD_BOOL(globals::visuals::Dropped);
        LOAD_BOOL(globals::visuals::dstc);
        LOAD_BOOL(globals::visuals::angle);
        LOAD_BOOL(globals::visuals::mawmawmaw);
        LOAD_BOOL(globals::visuals::mawmaw);
        LOAD_BOOL(globals::visuals::HandChams);
        LOAD_BOOL(globals::visuals::SkyBoxEnabled);
        LOAD_BOOL(globals::visuals::SkyBoxCustomImage);
        LOAD_BOOL(globals::visuals::WeaponChams);
        LOAD_BOOL(globals::visuals::HandChamsCustom);
        LOAD_BOOL(globals::visuals::skyboxenabledcustom);
        LOAD_BOOL(globals::visuals::skyboxenabledcustom2);
        LOAD_BOOL(globals::visuals::HandChamsRGB);
        LOAD_BOOL(globals::visuals::skyboxrgb);
        LOAD_BOOL(globals::visuals::dormant);
        LOAD_BOOL(globals::visuals::Hand_material);
        LOAD_BOOL(globals::visuals::visiblecheck);
        LOAD_BOOL(globals::visuals::abilitiesspike);
        LOAD_BOOL(globals::visuals::SpikeLineUp);
        LOAD_BOOL(globals::visuals::abilities);
        LOAD_BOOL(globals::visuals::chams);
        LOAD_BOOL(globals::visuals::chamsRGB);
        LOAD_FLOAT(globals::visuals::time);

        // === AIMBOT ===
        LOAD_BOOL(globals::aimbot::aimbot);
        LOAD_BOOL(globals::aimbot::nospread);
        LOAD_BOOL(globals::aimbot::Prediction);
        LOAD_BOOL(globals::aimbot::BulletTrace);
        LOAD_BOOL(globals::aimbot::BulletTraceAntiAim);
        LOAD_BOOL(globals::aimbot::aimbot360);
        LOAD_BOOL(globals::aimbot::nodelay);
        LOAD_BOOL(globals::aimbot::silentmaw);
        LOAD_BOOL(globals::aimbot::triggerbot);
        LOAD_BOOL(globals::aimbot::triggermaw);
        LOAD_BOOL(globals::aimbot::AutoShoot);
        LOAD_BOOL(globals::aimbot::vish_check);
        LOAD_BOOL(globals::aimbot::recoilcrosshair);
        LOAD_BOOL(globals::aimbot::recoil_control);
        LOAD_BOOL(globals::aimbot::draw_fov);
        LOAD_BOOL(globals::aimbot::draw_fovrainbow);
        LOAD_FLOAT(globals::aimbot::aim_smooth);
        LOAD_FLOAT(globals::aimbot::AutoshootFloat);
        LOAD_FLOAT(globals::aimbot::fovtrigger);
        LOAD_FLOAT(globals::aimbot::bossmaw);
        LOAD_FLOAT(globals::aimbot::aim_fov);
        LOAD_FLOAT(globals::aimbot::aim_bone);
        LOAD_FLOAT(globals::aimbot::aim_key);
        LOAD_FLOAT(globals::aimbot::trigger_key);
        LOAD_FLOAT(globals::aimbot::NIGGAMAW);

        // === MISC ===
        LOAD_BOOL(globals::misc::skiptutorial);
        LOAD_FLOAT(globals::misc::GlowIntensity);
        LOAD_BOOL(globals::misc::nightmode);
        LOAD_BOOL(globals::misc::antiafk);
        LOAD_BOOL(globals::misc::crosshairrainbow);
        LOAD_BOOL(globals::misc::onlylastkill);
        LOAD_BOOL(globals::misc::KillSound);
        LOAD_BOOL(globals::misc::KillMessage);
        LOAD_BOOL(globals::misc::Hat);
        LOAD_BOOL(globals::misc::AntiFlash);
        LOAD_BOOL(globals::misc::skin_changer);
        LOAD_BOOL(globals::misc::antiaim);
        LOAD_BOOL(globals::misc::SetCamera);
        LOAD_BOOL(globals::misc::force_resume_spin);
        LOAD_FLOAT(globals::misc::antiaimpitch);
        LOAD_FLOAT(globals::misc::antiaimyaw);
        LOAD_BOOL(globals::misc::widearms);
        LOAD_BOOL(globals::misc::GunCustome);
        LOAD_BOOL(globals::misc::enabled);
        LOAD_FLOAT(globals::misc::pitchmode);
        LOAD_FLOAT(globals::misc::visiblepreset);
        LOAD_FLOAT(globals::misc::invisiblepreset);
        LOAD_FLOAT(globals::misc::baseyaw);
        LOAD_FLOAT(globals::misc::offset);
        LOAD_FLOAT(globals::misc::yawmodifier);
        LOAD_FLOAT(globals::misc::modifieroffset);
        LOAD_FLOAT(globals::misc::materials);
        LOAD_FLOAT(globals::misc::widearmsselec);
        LOAD_FLOAT(globals::misc::Outlines);
        LOAD_FLOAT(globals::misc::cachepitch);
        LOAD_FLOAT(globals::misc::cachebaseyaw);
        LOAD_FLOAT(globals::misc::cacheoffset);
        LOAD_BOOL(globals::misc::mamaww);
        LOAD_BOOL(globals::misc::third_person);
        LOAD_BOOL(globals::misc::Fly);
        LOAD_BOOL(globals::misc::Holdthird);
        LOAD_BOOL(globals::misc::Holdthird1);
        LOAD_BOOL(globals::misc::crouch);
        LOAD_BOOL(globals::misc::spinbot);
        LOAD_BOOL(globals::misc::team_check);
        LOAD_BOOL(globals::misc::bunnyhop);
        LOAD_BOOL(globals::misc::nigaga);
        LOAD_BOOL(globals::misc::Camera);
        LOAD_FLOAT(globals::misc::widearmsfloat);
        LOAD_FLOAT(globals::misc::third_person_float);
        LOAD_FLOAT(globals::misc::spinbot_speed_nigger);
        LOAD_BOOL(globals::misc::skinchangor);
        LOAD_BOOL(globals::misc::fovchangor);
        LOAD_BOOL(globals::misc::big_gun);
        LOAD_BOOL(globals::misc::big_gun3p);
        LOAD_BOOL(globals::misc::dropped);
        LOAD_BOOL(globals::misc::WireframeSelf);
        LOAD_BOOL(globals::misc::AspectRatio);
        LOAD_FLOAT(globals::misc::aspectvalue);
        LOAD_FLOAT(globals::misc::GlowVisible);
        LOAD_FLOAT(globals::misc::GlowInvisible);
        LOAD_BOOL(globals::misc::GalaxyHand);
        LOAD_BOOL(globals::misc::GalaxySelf);
        LOAD_BOOL(globals::misc::GalaxyEnemy);
        LOAD_BOOL(globals::misc::fresnelrainbow);
        LOAD_BOOL(globals::misc::WireFrameEnemy);
        LOAD_BOOL(globals::misc::big_gun_3p);
        LOAD_BOOL(globals::misc::Spinbotserversided);
        LOAD_BOOL(globals::misc::third_person_2wireframe);
        LOAD_FLOAT(globals::misc::big_gun_float);
        LOAD_FLOAT(globals::misc::big_gun_float_3);
        LOAD_FLOAT(globals::misc::fov_changer_float);
        LOAD_FLOAT(globals::misc::glow_float);
        LOAD_BOOL(globals::misc::MeshCrouchModifed);

        // === BUDDY ===
        LOAD_BOOL(globals::buddy::enabled);
        LOAD_FLOAT(globals::buddy::index);
    }
    file.close();
}



typedef BOOL(WINAPI* tVirtualProtect)(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);

namespace UWorld {
    __forceinline __int64 decrypt_uworld(const uint32_t UWorldKey, const uintptr_t* UWorldState)
    {
        unsigned __int64 v8;
        unsigned __int64 v9;
        unsigned __int64 v10;
        unsigned __int64 v11;
        unsigned int v12;
        unsigned __int64 v13;
        __int64 v14;

        v8 = 0x2545F4914F6CDD1Dull * ((UWorldKey ^ ((UWorldKey ^ (UWorldKey >> 15)) >> 12)) ^ (UWorldKey << 25));
        v9 = v8 % 7;
        v10 = UWorldState[v9];
        v11 = v8 >> 32;
        v12 = (unsigned int)v9 % 7;

        if ((DWORD)v9 == 7 * ((unsigned int)v9 / 7))
        {
            v13 = ~v11 ^ (v10 + (unsigned int)(v11 - 1));
        }
        else
        {
            v13 = UWorldState[v9];
            if (v12 == 1)
            {
                v13 = ((v10 >> ((unsigned __int8)(((int)v11 + 2 * (int)v9) % 0x3F) + 1)) |
                    (v10 << (63 * (unsigned __int8)(((int)v11 + 2 * (int)v9) / 0x3F)
                        - ((unsigned __int8)v11 + 2 * (unsigned __int8)v9) + 63)))
                    - (unsigned int)(v9 + v11);
                goto LABEL_11;
            }
        }

        if (v12 == 2)
        {
            v13 = (((unsigned int)(v11 + 2 * v9) + v13) >> 1) ^
                ((((unsigned int)(v11 + 2 * v9) + v13) >> 1) ^
                    (2 * ((unsigned int)(v11 + 2 * v9) + v13))) & 0xAAAAAAAAAAAAAAAAull;
            goto LABEL_7;
        }

    LABEL_11:
        if ((unsigned int)v9 % 7 == 3)
        {
            v13 = ~(unsigned __int64)(unsigned int)(v9 + v11) ^
                ((v13 >> (63 * (unsigned __int8)(((int)v11 + 2 * (int)v9) / 0x3F)
                    - ((unsigned __int8)v11 + 2 * (unsigned __int8)v9) + 63)) |
                    (v13 << ((unsigned __int8)(((int)v11 + 2 * (int)v9) % 0x3F) + 1)));
            goto LABEL_13;
        }

    LABEL_7:
        if ((unsigned int)v9 % 7 == 5)
        {
            v13 = (((v13 << (63 * (unsigned __int8)(((int)v11 + 2 * (int)v9) / 0x3F)
                - ((unsigned __int8)v11 + 2 * (unsigned __int8)v9) + 63)) |
                (v13 >> ((unsigned __int8)(((int)v11 + 2 * (int)v9) % 0x3F) + 1))) >>
                (63 * (unsigned __int8)(((int)v9 + (int)v11) / 0x3F)
                    - ((unsigned __int8)v9 + (unsigned __int8)v11) + 63)) |
                (((v13 << (63 * (unsigned __int8)(((int)v11 + 2 * (int)v9) / 0x3F)
                    - ((unsigned __int8)v11 + 2 * (unsigned __int8)v9) + 63)) |
                    (v13 >> ((unsigned __int8)(((int)v11 + 2 * (int)v9) % 0x3F) + 1))) <<
                    ((unsigned __int8)(((int)v9 + (int)v11) % 0x3F) + 1));
            goto LABEL_15;
        }

    LABEL_13:
        if ((unsigned int)v9 % 7 == 6)
        {
            v13 = ((v13 << (63 * (unsigned __int8)(((int)v11 + 2 * (int)v9) / 0x3F)
                - ((unsigned __int8)v11 + 2 * (unsigned __int8)v9) + 63)) |
                (v13 >> ((unsigned __int8)(((int)v11 + 2 * (int)v9) % 0x3F) + 1)))
                - (unsigned int)(v9 + v11);
        }

    LABEL_15:
        return v13 ^ (unsigned int)UWorldKey;
    }
}

flinearcolor handcolor(fresnelBaseR, fresnelBaseG, fresnelBaseB, globals::misc::glow_float);
bool hasTarget3 = false;
#pragma once


wchar_t* s2wc(const char* c)
{
    const size_t cSize = strlen(c) + 1;
    wchar_t* wc = new wchar_t[cSize];
    mbstowcs(wc, c, cSize);

    return wc;
}

namespace inpute
{
    bool mouseDown[5];
    bool mouseDownAlready[256];

    bool keysDown[256];
    bool keysDownAlready[256];

    bool is_any_mouse_down()
    {
        if (mouseDown[0]) return true;
        if (mouseDown[1]) return true;
        if (mouseDown[2]) return true;
        if (mouseDown[3]) return true;
        if (mouseDown[4]) return true;

        return false;
    }

    bool is_mouse_clicked(int button, int element_id, bool repeat)
    {
        if (mouseDown[button])
        {
            if (!mouseDownAlready[element_id])
            {
                mouseDownAlready[element_id] = true;
                return true;
            }
            if (repeat)
                return true;
        }
        else
        {
            mouseDownAlready[element_id] = false;
        }
        return false;
    }
    bool is_key_pressed(int key, bool repeat)
    {
        if (keysDown[key])
        {
            if (!keysDownAlready[key])
            {
                keysDownAlready[key] = true;
                return true;
            }
            if (repeat)
                return true;
        }
        else
        {
            keysDownAlready[key] = false;
        }
        return false;
    }

    void handle()
    {
        if (GetAsyncKeyState(0x01))
            mouseDown[0] = true;
        else
            mouseDown[0] = false;
    }
}

struct SkinData {
    const wchar_t* SkinName;
    const wchar_t* skin;
    const wchar_t* chroma;
    int level;
};

// Define skin arrays for each weapon type
static const std::vector<SkinData> vandalSkins = {
    //{L"Phaseguard Vandal", L"Default__AK_Commando_PrimaryAsset_C", L"Default__Commando_v1_PrimaryAsset_C", 4},
    {L"Divergence V4ndal", L"Default__AK_Anomaly_PrimaryAsset_C", L"Default__Anomaly_v1_PrimaryAsset_C", 4},
    {L"CYRAX Vandal", L"Default__AK_Syndra_PrimaryAsset_C", L"Default__Syndra_v1_PrimaryAsset_C", 4},
    {L"Primordium Vandal", L"Default__AK_Hellfire_PrimaryAsset_C", L"Default__Hellfire_v2_PrimaryAsset_C", 4},
    {L"Singularity Vandal", L"Default__AK_Edge2_PrimaryAsset_C", L"Default__AK_Edge2_v1_PrimaryAsset_C", 4},
    {L"Aemondir Vandal", L"Default__AK_Legion_PrimaryAsset_C", L"Default__AK_Legion_Lv3_PrimaryAsset_C", 4},
    {L"Evori Dreamwings Vandal", L"Default__AK_StarPower_PrimaryAsset_C", L"Default__StarPower_v3_PrimaryAsset_C", 4},
    {L"Prelude to Chaos Vandal", L"Default__AK_DemonStone_PrimaryAsset_C", L"Default__AK_DemonStone_Lv4_PrimaryAsset_C", 4},
    {L"Reaver Vandal", L"Default__AK_Soulstealer_PrimaryAsset_C", L"Default__AK_Soulstealer_White_PrimaryAsset_C", 4},
    {L"XERØFANG Vandal ", L"Default__AK_Hypedragon_PrimaryAsset_C", L"Default__AK_Hypedragon_v1_PrimaryAsset_C", 4},
    {L"Kuronami Vandal", L"Default__AK_Ninja_PrimaryAsset_C", L"Default__AK_Ninja_v1_PrimaryAsset_C", 4},
    {L"Imperium Vandal", L"Default__AK_Dynasty_PrimaryAsset_C", L"Default__AK_Dynasty_Standard_PrimaryAsset_C", 4},
    {L"Champions 2023 Vandal", L"Default__AK_Champions2023_PrimaryAsset_C", L"Default__AK_Champions2023_Standard_PrimaryAsset_C", 4},
    {L"Magepunk Vandal", L"Default__AK_Magepunk3_PrimaryAsset_C", L"Default__AK_Magepunk3_Standard_PrimaryAsset_C", 4},
    {L"Gaia's Vengeance Vandal", L"Default__AK_Ashen_PrimaryAsset_C", L"Default__AK_Ashen_v2_PrimaryAsset_C", 4},
    {L"RGX 11z Pro Vandal", L"Default__AK_Afterglow_PrimaryAsset_C", L"Default__AK_Afterglow_Blue_PrimaryAsset_C", 5},
    {L"Champions 2021 Vandal", L"Default__AK_Champions_PrimaryAsset_C", L"Default__AK_Champions_Lv4_PrimaryAsset_C", 4},
    {L"Elderflame Vandal", L"Default__AK_Dragon_PrimaryAsset_C", L"Default__AK_Dragon_Blue_PrimaryAsset_C", 4},
    {L"Ion Vandal", L"Default__AK_Oblivion2_PrimaryAsset_C", L"Default__AK_Oblivion2_v1_PrimaryAsset_C", 4},
    {L"ChronoVoid Vandal", L"Default__AK_Daedalus_PrimaryAsset_C", L"Default__AK_Daedalus_v2_PrimaryAsset_C", 4},
    {L"Araxys Vandal", L"Default__AK_Antares_PrimaryAsset_C", L"Default__AK_Antares_Lv4_PrimaryAsset_C", 4},
    {L"Origin Vandal", L"Default__AK_Circle_PrimaryAsset_C", L"Default__AK_Circle_Lv4_PrimaryAsset_C",4},
    {L"Sentinels of Light Vandal", L"Default__AK_SOL_PrimaryAsset_C", L"Default__AK_SOL_Lv4_PrimaryAsset_C", 4},
    {L"Glitchpop Vandal", L"Default__AK_Cyberpunk2_PrimaryAsset_C", L"Default__AK_Cyberpunk2_Red_PrimaryAsset_C", 4},
    {L"Prime Vandal", L"Default__AssaultRifle_AK_HypeBeast_PrimaryAsset_C", L"Default__AssaultRifle_AK_HypeBeast_Blue_PrimaryAsset_C", 4},
    {L"Oni Vandal", L"Default__AK_Oni2_PrimaryAsset_C", L"Default__AK_Oni2_Lv4_PrimaryAsset_C", 4},
    {L"Overdrive Vandal", L"Default__AK_Motorbike_PrimaryAsset_C", L"Default__Motorbike_v2_PrimaryAsset_C", 4},
    {L"EX.O Vandal", L"Default__AK_Hologram_PrimaryAsset_C", L"Default__Hologram_v3_PrimaryAsset_C", 4},
    {L"Valiant Hero Vandal", L"Default__AK_MonkeyKing_PrimaryAsset_C", L"Default__MonkeyKing_v1_PrimaryAsset_C", 4},
    {L"Cryostasis Vandal", L"Default__AK_Permafrost_PrimaryAsset_C", L"Default__Permafrost_v1_PrimaryAsset_C", 4},
    {L"Forsaken Vandal", L"Default__AK_Fallen_PrimaryAsset_C", L"Default__Fallen_v2_PrimaryAsset_C", 4},

};
static const std::vector<SkinData> phantomSkins = {

{L"Bolt Phantom", L"Default__Carbine_Bolt_PrimaryAsset_C", L"Default__Carbine_Bolt_v1_PrimaryAsset_C", 4},
{L"Nocturnum Phantom", L"Default__Carbine_Coven_PrimaryAsset_C", L"Default__Carbine_Coven_V1_PrimaryAsset_C", 4},
{L"Champions 2024 Phantom", L"Default__Carbine_Champions2024_PrimaryAsset_C", L"Default__Carbine_Champions2024_Lv4_PrimaryAsset_C", 4},
{L"Mystbloom Phantom", L"Default__Carbine_Spirit_PrimaryAsset_C", L"Default__Carbine_Spirit_v2_PrimaryAsset_C", 4},
{L"Sovereign Phantom", L"Default__Carbine_Sovereign2_PrimaryAsset_C", L"Default__Carbine_Sovereign2_v1_PrimaryAsset_C", 4},
{L"Singularity Phantom", L"Default__AssaultRifle_ACR_Edge_PrimaryAsset_C", L"Default__AssaultRifle_ACR_Edge_Lv4_PrimaryAsset_C", 4},
{L"Spectrum Phantom", L"Default__Carbine_Atlas_PrimaryAsset_C", L"Default__Carbine_Atlas_v1_PrimaryAsset_C", 4},
{L"Reaver Phantom", L"Default__Carbine_Soulstealer2_PrimaryAsset_C", L"Default__Carbine_Soulstealer2_v1_PrimaryAsset_C", 4},
{L"RGX 11z Pro Phantom", L"Default__Carbine_Afterglow2_PrimaryAsset_C", L"Default__Carbine_Afterglow2_v2_PrimaryAsset_C", 4},
{L"Glitchpop Phantom", L"Default__Carbine_Cyberpunk2_PrimaryAsset_C", L"Default__Carbine_Cyberpunk2_Lv4_PrimaryAsset_C", 4},
{L"Ruination Phantom", L"Default__Carbine_King_PrimaryAsset_C", L"Default__Carbine_King_Lv4_PrimaryAsset_C", 4},
{L"ChronoVoid Phantom", L"Default__Carbine_Daedalus_PrimaryAsset_C", L"Default__Carbine_Daedalus_Lv4_PrimaryAsset_C", 4},
{L"Recon Phantom", L"Default__Carbine_SpecOps_PrimaryAsset_C", L"Default__Carbine_SpecOps_Lv4_PrimaryAsset_C", 4},
{L"BlastX Phantom", L"Default__Carbine_URF_PrimaryAsset_C", L"Default__Carbine_URF_Lv4_PrimaryAsset_C", 4},
{L"Protocol 781-A Phantom", L"Default__Carbine_Protocol_PrimaryAsset_C", L"Default__Carbine_Protocol_Lv4_PrimaryAsset_C", 4},
{L"Oni Phantom", L"Default__AssaultRifle_ACR_Oni_PrimaryAsset_C", L"Default__AssaultRifle_ACR_Oni_Black_PrimaryAsset_C", 4},
{L"Nebula Phantom", L"Default__Carbine_Cosmos_PrimaryAsset_C", L"Default__Carbine_Cosmos_Lv1_PrimaryAsset_C", 4},
{L"Celestial Phantom", L"Default__Carbine_Lunar_PrimaryAsset_C", L"Default__Carbine_Lunar_Lv1_PrimaryAsset_C", 4},

};
//
//
static const std::vector<SkinData> operatorSkins = {
{L"Divergence Operator", L"Default__BoltSniper_Anomaly_PrimaryAsset_C", L"Default__BoltSniper_Anomaly_v1_PrimaryAsset_C", 4},
{L"Mystbloom Operator", L"Default__BoltSniper_Spirit_PrimaryAsset_C", L"Default__BoltSniper_Spirit_v2_PrimaryAsset_C", 4},
{L"Ion Operator", L"Default__BoltSniper_Oblivion_PrimaryAsset_C", L"Default__BoltSniper_OblivionLv4_PrimaryAsset_C", 4},
{L"RGX 11z Pro Operator", L"Default__BoltSniper_Afterglow2_PrimaryAsset_C", L"Default__BoltSniper_Afterglow2_Lv5_PrimaryAsset_C", 4},
{L"Origin Operator", L"Default__BoltSniper_Circle_PrimaryAsset_C", L"Default__BoltSniper_Circle_Lv4_PrimaryAsset_C", 4},
{L"Prelude to Chaos Operator", L"Default__BoltSniper_DemonStone_PrimaryAsset_C", L"Default__BoltSniper_DemonStone_Lv4_PrimaryAsset_C", 4},
{L"Forsaken Operator", L"Default__BoltSniper_Fallen_PrimaryAsset_C", L"Default__BoltSniper_Fallen_Lv4_PrimaryAsset_C", 4},
{L"Glitchpop Operator", L"Default__BoltSniper_Cyberpunk2_PrimaryAsset_C", L"Default__BoltSniper_Cyberpunk2_Lv4_PrimaryAsset_C", 4},
{L"Radiant Entertainment System Operator", L"Default__BoltSniper_Arcade_PrimaryAsset_C", L"Default__BoltSniper_Arcade_Lv4_PrimaryAsset_C", 4},
{L"Elderflame Operator", L"Default__BoltSniper_Dragon_PrimaryAsset_C", L"Default__BoltSniper_Dragon_Dark_PrimaryAsset_C", 4},
{L"Sentinels of Light Operator", L"Default__BoltSniper_SOL_PrimaryAsset_C", L"Default__BoltSniper_SOL_Lv4_PrimaryAsset_C", 4},
{L"Reaver Operator", L"Default__BoltSniper_Soulstealer_PrimaryAsset_C", L"Default__BoltSniper_Soulstealer_Black_PrimaryAsset_C", 4},
{L"Tethered Realms Operator", L"Default__BoltSniper_SovWorld_PrimaryAsset_C", L"Default__BoltSniper_SovWorld_Lv1_PrimaryAsset_C", 4},
{L"Araxys Operator", L"Default__BoltSniper_Antares_PrimaryAsset_C", L"Default__BoltSniper_Antares_Lv4_PrimaryAsset_C", 4},
{L"Gravitational Uranium Neuroblaster Operator", L"Default__BoltSniper_Raygun_PrimaryAsset_C", L"Default__BoltSniper_Raygun_Lv2_PrimaryAsset_C", 4},
{L"Magepunk Operator", L"Default__BoltSniper_Magepunk2_v1_PrimaryAsset_C", L"Default__BoltSniper_Magepunk2_Lv4_PrimaryAsset_C", 4},

};
//
static const std::vector<SkinData> bulldogSkins = {
{L"Phaseguard Bulldog", L"Default__Burst_Commando_PrimaryAsset_C", L"Default__Commando_v1_PrimaryAsset_C", 4},
{L"Nocturnum Bulldog", L"Default__Burst_Coven_PrimaryAsset_C", L"Default__Burst_Coven_v1_PrimaryAsset_C", 4},
{L"Glitchpop Bulldog", L"Default__AssaultRifle_Burst_Cyberpunk_PrimaryAsset_C", L"Default__AssaultRifle_Burst_Cyberpunk_Lv4_PrimaryAsset_C", 4},
{L"Spectrum Bulldog", L"Default__Burst_Atlas_PrimaryAsset_C", L"Default__Burst_Atlas_v2_PrimaryAsset_C", 4},
{L"Radiant Entertainment System Bulldog", L"Default__Burst_Arcade_v2_PrimaryAsset_C", L"Default__Burst_Arcade_Lv4_PrimaryAsset_C", 4},
};
//
static const std::vector<SkinData> frenzySkins = {

{L"Sovereign Frenzy", L"Default__AutoPistol_Sovereign2_PrimaryAsset_C", L"Default__AutoPistol_Sovereign2_v1_PrimaryAsset_C", 4},
{L"Elderflame Frenzy", L"Default__AutomaticPistol_Dragon_PrimaryAsset_C", L"Default__AutomaticPistol_Dragon_Blue_PrimaryAsset_C", 4},
{L"Glitchpop Frenzy", L"Default__AutomaticPistol_Cyberpunk_PrimaryAsset_C", L"Default__AutomaticPistol_Cyberpunk_Blue_PrimaryAsset_C", 4},
{L"BlastX Frenzy", L"Default__AutoPistol_URF_PrimaryAsset_C", L"Default__AutoPistol_URF_Standard_PrimaryAsset_C", 4},
{L"Prime//2.0 Frenzy", L"Default__AutomaticPistol_HypeBeast2_PrimaryAsset_C", L"Default__AutomaticPistol_HypeBeast2_PrimaryAsset_C", 4},
{L"Ion Frenzy", L"Default__AutoPistol_Oblivion2_PrimaryAsset_C", L"Default__AutoPistol_Oblivion2_Lv4_PrimaryAsset_C", 4},
{L"Oni Frenzy", L"Default__AutoPistol_Oni2_PrimaryAsset_C", L"Default__AutoPistol_Oni2_PrimaryAsset_C", 4},
{L"Origin Frenzy", L"Default__AutoPistol_Circle_PrimaryAsset_C", L"Default__AutoPistol_Circle_Lv4_PrimaryAsset_C", 4},
{L"RGX 11z Pro Frenzy", L"Default__AutoPistol_Afterglow_PrimaryAsset_C", L"Default__AutoPistol_Afterglow_Lv4_PrimaryAsset_C", 4},

};
//
static const std::vector<SkinData> guardianSkins = {

{L"Prime Guardian", L"Default__DMR_HypeBeast_PrimaryAsset_C", L"Default__DMR_HypeBeast_Lv4_PrimaryAsset_C", 4},
{L"Reaver Guardian", L"Default__DMR_SoulStealer_PrimaryAsset_C", L"Default__DMR_SoulStealer_Lv4_PrimaryAsset_C", 4},
{L"Ruination Guardian", L"Default__DMR_King_PrimaryAsset_C", L"Default__DMR_King_Lv4_PrimaryAsset_C", 4},
{L"Sovereign Guardian", L"Default__DMR_Sovereign_PrimaryAsset_C", L"Default__DMR_Sovereign_Lv4_PrimaryAsset_C", 4},
{L"RGX 11z Pro Guardian", L"Default__DMR_Afterglow_PrimaryAsset_C", L"Default__DMR_Afterglow_Lv4_PrimaryAsset_C", 4},
{L"Oni Guardian", L"Default__DMR_Oni_PrimaryAsset_C", L"Default__DMR_Oni_Lv4_PrimaryAsset_C", 4},

};
//
static const std::vector<SkinData> sheriffSkins = {

{L"Doombringer Sheriff", L"Default__Revolver_Cyberknight_PrimaryAsset_C", L"Default__Revolver_Cyberknight_v1_PrimaryAsset_C", 4},
{L"Neo Frontier Sheriff", L"Default__Revolver_Gunslinger_PrimaryAsset_C", L"Default__Revolver_Gunslinger_v1_PrimaryAsset_C", 4},
{L"RGX 11z Pro Sheriff", L"Default__Revolver_Afterglow3_PrimaryAsset_C", L"Default__Revolver_Afterglow3_v2_PrimaryAsset_C", 4},
{L"Mystbloom Sheriff", L"Default__Revolver_Spirit_PrimaryAsset_C", L"Default__Revolver_Spirit_v2_PrimaryAsset_C", 4},
{L"Kuronami Sheriff", L"Default__Revolver_Ninja_PrimaryAsset_C", L"Default__Revolver_Ninja_v1_PrimaryAsset_C", 4},
{L"Reaver Sheriff", L"Default__RevolverPistol_Soulstealer_PrimaryAsset_C", L"Default__RevolverPistol_Soulstealer_White_PrimaryAsset_C", 4},
{L"Singularity Sheriff", L"Default__RevolverPistol_Edge_PrimaryAsset_C", L"Default__RevolverPistol_Edge_Lv4_PrimaryAsset_C", 4},
{L"Protocol 781-A Sheriff", L"Default__Revolver_Protocol_PrimaryAsset_C", L"Default__Revolver_Protocol_Lv4_PrimaryAsset_C", 4},
{L"Sentinels of Light Sheriff", L"Default__Revolver_SOL_PrimaryAsset_C", L"Default__Revolver_SOL_Lv4_PrimaryAsset_C", 4},
{L"ChronoVoid Sheriff", L"Default__Revolver_Daedalus_PrimaryAsset_C", L"Default__Revolver_Daedalus_Lv4_PrimaryAsset_C", 4},
{L"Magepunk Sheriff", L"Default__Revolver_Magepunk2_PrimaryAsset_C", L"Default__Revolver_Magepunk2_Lv4_PrimaryAsset_C", 4},
{L"Nebula Sheriff", L"Default__Revolver_Cosmos_PrimaryAsset_C", L"Default__Revolver_Cosmos_Lv1_PrimaryAsset_C", 4},
{L"Arcane Sheriff", L"Default__Revolver_XP1_PrimaryAsset_C", L"Default__Revolver_XP1_Lv2_PrimaryAsset_C", 4},
{L"Schema Sheriff", L"Default__Revolver_Schema_PrimaryAsset_C", L"Default__Revolver_Schema_Lv1_PrimaryAsset_C", 4},
{L"Crimsonbeast Sheriff", L"Default__Revolver_Mythic_PrimaryAsset_C", L"Default__Revolver_Mythic_Lv2_PrimaryAsset_C", 4},
{L"Signature Sheriff", L"Default__Revolver_MidnightAerosol_PrimaryAsset_C", L"Default__Revolver_MidnightAerosol_PrimaryAsset_C", 4},
{L"Abyssal Sheriff", L"Default__Revolver_DeepSea_PrimaryAsset_C", L"Default__Revolver_DeepSea_Lv1_PrimaryAsset_C", 4},
{L"Ion Sheriff", L"Default__RevolverPistol_Oblivion_PrimaryAsset_C", L"Default__RevolverPistol_OblivionLv4_PrimaryAsset_C", 4},

};
static const std::vector<SkinData> ghostSkins = {
{L"Phaseguard Ghost", L"Default__Luger_Commando_PrimaryAsset_C", L"Default__Commando_v1_PrimaryAsset_C", 4},
{L"Reaver Ghost", L"Default__Luger_Soulstealer2_PrimaryAsset_C", L"Default__Luger_Soulstealer2_v1_PrimaryAsset_C", 4},
{L"XERØFANG Ghost", L"Default__Luger_Hypedragon_PrimaryAsset_C", L"Default__Luger_Hypedragon_v1_PrimaryAsset_C", 4},
{L"Sovereign Ghost", L"Default__LugerPistol_Sovereign_PrimaryAsset_C", L"Default__LugerPistol_Sovereign_Purple_PrimaryAsset_C", 4},
{L"Ruination Ghost", L"Default__Luger_King_PrimaryAsset_C", L"Default__Luger_King_Lv4_PrimaryAsset_C", 4},
{L"Magepunk Ghost", L"Default__Luger_Magepunk_PrimaryAsset_C", L"Default__Luger_Magepunk_Lv4_PrimaryAsset_C", 4},
{L"Gaia's Vengeance Ghost", L"Default__LugerPistol_Ashen_PrimaryAsset_C", L"Default__LugerPistol_Ashen_Lv4_PrimaryAsset_C", 4},

};
//
static const std::vector<SkinData> spectreSkins = {
{L"Kuronami Spectre", L"Default__MP5_Ninja_PrimaryAsset_C", L"Default__MP5_Ninja_v1_PrimaryAsset_C", 4},
{L"Ruination Spectre", L"Default__MP5_King_PrimaryAsset_C", L"Default__MP5_King_Lv4_PrimaryAsset_C", 4},
{L"Protocol 781-A Spectre", L"Default__MP5_Protocol_PrimaryAsset_C", L"Default__MP5_Protocol_Lv4_PrimaryAsset_C", 4},
{L"Reaver Spectre", L"Default__MP5_Soulstealer2_PrimaryAsset_C", L"Default__MP5_Soulstealer2_Lv4_PrimaryAsset_C", 4},
{L"Radiant Crisis 001 Spectre", L"Default__MP5_Comicbook_PrimaryAsset_C", L"Default__MP5_Comicbook_Lv3_PrimaryAsset_C", 4},
};
//
static const std::vector<SkinData> classicSkins = {
{L"VCT x SEN Classic", L"Default__BasePistol_VCTCaps24_SEN_PrimaryAsset_C", L"Default__BasePistol_VCTCaps24_SEN_V1_PrimaryAsset_C", 4},
{L"VCT x G2 Classic", L"Default__BasePistol_VCTCaps24_G2_PrimaryAsset_C", L"Default__BasePistol_VCTCaps24_G2_Lv3_PrimaryAsset_C", 4},
{L"VCT x BBL Classic", L"Default__BasePistol_VCTCaps24_BBL_PrimaryAsset_C", L"Default__BasePistol_VCTCaps24_BBL_Lv3_PrimaryAsset_C", 4},
{L"Spectrum Classic", L"Default__BasePistol_Atlas_PrimaryAsset_C", L"Default__BasePistol_Atlas_v1_PrimaryAsset_C", 4},
{L"Prime Classic", L"Default__BasePistol_HypeBeast_PrimaryAsset_C", L"Default__BasePistol_HypeBeast_Blue_PrimaryAsset_C", 4},
{L"RGX 11z Pro Classic", L"Default__BasePistol_Afterglow2_PrimaryAsset_C", L"Default__BasePistol_Afterglow2_Lv4_PrimaryAsset_C", 4},
{L"Forsaken Classic", L"Default__BasePistol_Fallen_PrimaryAsset_C", L"Default__BasePistol_Fallen_Lv3_PrimaryAsset_C", 4},
{L"Glitchpop Classic", L"Default__BasePistol_Cyberpunk2_PrimaryAsset_C", L"Default__BasePistol_Cyberpunk2_Lv4_PrimaryAsset_C", 4},
};
//
static const std::vector<SkinData> marshalSkins = {
{L"Nocturnum Marshal", L"Default__LeverSniper_Coven_PrimaryAsset_C", L"Default__LeverSniper_Coven_V1_PrimaryAsset_C", 4},
{L"Kuronami Marshal", L"Default__LeverSniper_Ninja_PrimaryAsset_C", L"Default__LeverSniper_Ninja_v1_PrimaryAsset_C", 4},
{L"Sovereign Marshal", L"Default__LeverSniperRifle_Sovereign_PrimaryAsset_C", L"Default__LeverSniperRifle_Sovereign_Purple_PrimaryAsset_C", 4},
};
//
//static const std::vector<SkinData> judgeSkins = {
//	{L"Default__AutomaticShotgun_Soulstealer_PrimaryAsset_C", L"Default__AutomaticShotgun_Soulstealer_Lv2_PrimaryAsset_C", 4},
//	{L"Default__AutomaticShotgun_Dragon_PrimaryAsset_C", L"Default__AutomaticShotgun_Dragon_Lv4_PrimaryAsset_C", 4},
//	{L"Default__AutomaticShotgun_Ninja_PrimaryAsset_C", L"Default__AutomaticShotgun_Ninja_v2_PrimaryAsset_C", 4},
//	{L"Default__AutomaticShotgun_Sovereign_PrimaryAsset_C", L"Default__AutomaticShotgun_Sovereign_Lv4_PrimaryAsset_C", 4},
//	{L"Default__AutomaticShotgun_Oni_PrimaryAsset_C", L"Default__AutomaticShotgun_Oni_Lv4_PrimaryAsset_C", 4},
//};
//
//static const std::vector<SkinData> ariesSkins = {
//	{L"Default__LMG_SOL_PrimaryAsset_C", L"Default__LMG_SOL_Lv4_PrimaryAsset_C", 4},
//	{L"Default__LMG_Dragon_PrimaryAsset_C", L"Default__LMG_Dragon_Lv4_PrimaryAsset_C", 4},
//	{L"Default__LMG_Ninja_PrimaryAsset_C", L"Default__LMG_Ninja_v2_PrimaryAsset_C", 4},
//	{L"Default__LMG_Soulstealer_PrimaryAsset_C", L"Default__LMG_Soulstealer_Lv4_PrimaryAsset_C", 4},
//	{L"Default__LMG_Oni_PrimaryAsset_C", L"Default__LMG_Oni_Lv4_PrimaryAsset_C", 4},
//};
//	
//static const std::vector<SkinData> odinSkins = {
//	{L"Default__HMG_Soulstealer_PrimaryAsset_C", L"Default__HMG_Soulstealer_Lv2_PrimaryAsset_C", 4},
//	{L"Default__HMG_Dragon_PrimaryAsset_C", L"Default__HMG_Dragon_Lv4_PrimaryAsset_C", 4},
//	{L"Default__HMG_Ninja_PrimaryAsset_C", L"Default__HMG_Ninja_v2_PrimaryAsset_C", 4},
//	{L"Default__HMG_Sovereign_PrimaryAsset_C", L"Default__HMG_Sovereign_Lv4_PrimaryAsset_C", 4},
//	{L"Default__HMG_Oni_PrimaryAsset_C", L"Default__HMG_Oni_Lv4_PrimaryAsset_C", 4},
//};
//
//static const std::vector<SkinData> buckySkins = {
//	{L"Default__PumpShotgun_Soulstealer_PrimaryAsset_C", L"Default__PumpShotgun_Soulstealer_Lv2_PrimaryAsset_C", 4},
//	{L"Default__PumpShotgun_Dragon_PrimaryAsset_C", L"Default__PumpShotgun_Dragon_Lv4_PrimaryAsset_C", 4},
//	{L"Default__PumpShotgun_Ninja_PrimaryAsset_C", L"Default__PumpShotgun_Ninja_v2_PrimaryAsset_C", 4},
//	{L"Default__PumpShotgun_Sovereign_PrimaryAsset_C", L"Default__PumpShotgun_Sovereign_Lv4_PrimaryAsset_C", 4},
//	{L"Default__PumpShotgun_Oni_PrimaryAsset_C", L"Default__PumpShotgun_Oni_Lv4_PrimaryAsset_C", 4},
//};
//
//static const std::vector<SkinData> shortySkins = {
//	{L"Default__SawedOffShotgun_Soulstealer_PrimaryAsset_C", L"Default__SawedOffShotgun_Soulstealer_Lv2_PrimaryAsset_C", 4},
//	{L"Default__SawedOffShotgun_Dragon_PrimaryAsset_C", L"Default__SawedOffShotgun_Dragon_Lv4_PrimaryAsset_C", 4},
//	{L"Default__SawedOffShotgun_Ninja_PrimaryAsset_C", L"Default__SawedOffShotgun_Ninja_v2_PrimaryAsset_C", 4},
//	{L"Default__SawedOffShotgun_Sovereign_PrimaryAsset_C", L"Default__SawedOffShotgun_Sovereign_Lv4_PrimaryAsset_C", 4},
//	{L"Default__SawedOffShotgun_Oni_PrimaryAsset_C", L"Default__SawedOffShotgun_Oni_Lv4_PrimaryAsset_C", 4},
//};
//
//static const std::vector<SkinData> stingerSkins = {
//	{L"Default__Vector_Soulstealer_PrimaryAsset_C", L"Default__Vector_Soulstealer_Lv2_PrimaryAsset_C", 4},
//	{L"Default__Vector_Dragon_PrimaryAsset_C", L"Default__Vector_Dragon_Lv4_PrimaryAsset_C", 4},
//	{L"Default__Vector_Ninja_PrimaryAsset_C", L"Default__Vector_Ninja_v2_PrimaryAsset_C", 4},
//	{L"Default__Vector_Sovereign_PrimaryAsset_C", L"Default__Vector_Sovereign_Lv4_PrimaryAsset_C", 4},
//	{L"Default__Vector_Oni_PrimaryAsset_C", L"Default__Vector_Oni_Lv4_PrimaryAsset_C", 4},
//};
//
static const std::vector<SkinData> knifeskins = {
{L"Phaseguard Splitter", L"Default__Melee_Commando_PrimaryAsset_C", L"Default__Melee_Commando_v1_PrimaryAsset_C", 2},
{L"Beta Remastered", L"Default__Melee_Warring_PrimaryAsset_C", L"Default__Melee_Warring_v1_PrimaryAsset_C", 2},
{L"Divergence St4ff", L"Default__Melee_Anomaly_PrimaryAsset_C", L"Default__Melee_Anomaly_v1_PrimaryAsset_C", 2},
{L"Helix Daggers", L"Default__Melee_Snake_PrimaryAsset_C", L"Default__Melee_Snake_v2_PrimaryAsset_C", 2},
{L"Blades of Primordia", L"Default__Melee_Hellfire_PrimaryAsset_C", L"Default__Melee_Hellfire_v2_PrimaryAsset_C", 2},
{L"Bolt Knife", L"Default__Melee_Bolt_PrimaryAsset_C", L"Default__Melee_Bolt_v1_PrimaryAsset_C", 2},
{L"CYRAX Fanblade", L"Default__Melee_Syndra_PrimaryAsset_C", L"Default__Melee_Syndra_v1_PrimaryAsset_C", 2},
{L"VCT 2025 Karambit", L"Default__Melee_VCT25Season_PrimaryAsset_C", L"Default__Melee_VCT25Season_v1_PrimaryAsset_C", 2},
{L"EX.O Edge", L"Default__Melee_Hologram_PrimaryAsset_C", L"Default__Melee_Hologram_v3_PrimaryAsset_C", 2},
{L"Doombringer Battleaxe", L"Default__Melee_Cyberknight_PrimaryAsset_C", L"Default__Melee_Cyberknight_v1_PrimaryAsset_C", 2},
{L"Neo Frontier Axe", L"Default__Melee_Gunslinger_PrimaryAsset_C", L"Default__Gunslinger_Syndra_v1_PrimaryAsset_C", 2},
{L"Evori's Spellcaster", L"Default__Melee_StarPower_PrimaryAsset_C", L"Default__Melee_StarPower_v1_PrimaryAsset_C", 2},
{L"Singularity Butterfly Knife", L"Default__Melee_Edge2_PrimaryAsset_C", L"Default__Melee_Edge2_v1_PrimaryAsset_C", 2},
{L"Nocturnum Scythe", L"Default__Melee_Coven_PrimaryAsset_C", L"Default__Melee_Coven_v1_PrimaryAsset_C", 2},
{L"Champions 2024 Blade", L"Default__Melee_Champions2024_PrimaryAsset_C", L"Default__Melee_Champions2024_Lv3_PrimaryAsset_C", 2},
{L"RGX 11z Pro Karambit", L"Default__Melee_Afterglow3_PrimaryAsset_C", L"Default__Melee_Afterglow3_v2_PrimaryAsset_C", 2},
{L"Mystbloom Kunai", L"Default__Melee_Spirit_PrimaryAsset_C", L"Default__Melee_Spirit_v2_PrimaryAsset_C", 2},
{L"Eternal Sovereign", L"Default__Melee_Sovereign2_PrimaryAsset_C", L"Default__Melee_Sovereign2_v1_PrimaryAsset_C", 2},
{L"Waveform", L"Default__Melee_Atlas_PrimaryAsset_C", L"Default__Melee_Atlas_v1_PrimaryAsset_C", 2},
{L"XERØFANG Knife", L"Default__Melee_Hypedragon_PrimaryAsset_C", L"Default__Melee_Hypedragon_v2_PrimaryAsset_C", 2},
{L"Kuronami no Yaiba", L"Default__Melee_Ninja_PrimaryAsset_C", L"Default__Melee_Ninja_V1_PrimaryAsset_C", 2},
{L"Champions 2023 Kunai", L"Default__Melee_Champions2023_PrimaryAsset_C", L"Default__Melee_Champions2023_PrimaryAsset_C", 2},
{L"Magepunk Sparkswitch", L"Default__Melee_Magepunk3_PrimaryAsset_C", L"Default__Melee_Magepunk3_PrimaryAsset_C", 2},
{L"VCT LOCK//IN Misericórdia", L"Default__Melee_Esportsinvitational_PrimaryAsset_C", L"Default__Melee_Esportsinvitational_Standard_PrimaryAsset_C", 2},
{L"Champions 2021 Karambit", L"Default__Melee_Champions_PrimaryAsset_C", L"Default__Melee_Champions_Lv2_PrimaryAsset_C", 2},
{L"Reaver Karambit", L"Default__Melee_Soulstealer2_PrimaryAsset_C", L"Default__Melee_Soulstealer2_v1_PrimaryAsset_C", 2},
{L"Black.Market Butterfly Knife", L"Default__Melee_Infantry2_Lv2_PrimaryAsset_C", L"Default__Melee_Infantry2_PrimaryAsset_C", 2},
{L"RGX 11z Pro Firefly", L"Default__Melee_Afterglow2_PrimaryAsset_C", L"Default__Melee_Afterglow2_v2_PrimaryAsset_C", 2},
{L"Xenohunter Knife", L"Default__Melee_Alien_PrimaryAsset_C", L"Default__Melee_Alien_Lv2_PrimaryAsset_C", 2},
{L"Prime//2.0 Karambit", L"Default__Melee_HypeBeast2_PrimaryAsset_C", L"Default__Melee_HypeBeast2_Lv2_PrimaryAsset_C", 2},
{L"Reaver Knife", L"Default__Melee_Soulstealer_PrimaryAsset_C", L"Default__Melee_Soulstealer_Lv2_PrimaryAsset_C", 2},
{L"Radiant Crisis 001 Baseball Bat", L"Default__Melee_Comicbook_PrimaryAsset_C", L"Default__Melee_Comicbook_Lv2_PrimaryAsset_C", 2},
//{L"NOT FOUND", L"Default__Melee_Dragon_PrimaryAsset_C", L"Default__Melee_Dragon_Lv2_PrimaryAsset_C", 2},
{L"Araxys Bio Harvester", L"Default__Melee_Antares_v2_PrimaryAsset_C", L"Default__Melee_Antares_Lv2_PrimaryAsset_C", 2},
{L"Soulstrife Scythe", L"Default__Melee_Haunted_PrimaryAsset_C", L"Default__Melee_Haunted_Lv2_PrimaryAsset_C", 2},
{L"Crimsonbeast Hammer", L"Default__Melee_Mythic_PrimaryAsset_C", L"Default__Melee_Mythic_Lv2_PrimaryAsset_C", 2},
{L"Magepunk Shock Gauntlet", L"Default__Melee_Magepunk2_PrimaryAsset_C", L"Default__Melee_Magepunk2_Lv2_PrimaryAsset_C", 2},
//{L"NOT FOUND", L"Default__Melee_Oni_PrimaryAsset_C", L"Default__Melee_Oni_Lv2_PrimaryAsset_C", 2},
{L"Onimaru Kunitsuna", L"Default__Melee_Oni2_PrimaryAsset_C", L"Default__Melee_Oni2_Lv2_PrimaryAsset_C", 2},
{L"Forsaken Ritual Blade", L"Default__Melee_Fallen_Lv2_PrimaryAsset_C", L"Default__Melee_Fallen_PrimaryAsset_C", 2},
{L"Blade of Chaos", L"Default__Melee_DemonStone_PrimaryAsset_C", L"Default__Melee_DemonStone_v2_PrimaryAsset_C", 2},
};

static const std::vector<SkinData> outlawskins = {
    {L"NIGGA",L"Default__DS_Gun_Afterglow3_PrimaryAsset_C", L"Default__DS_Gun_Afterglow3_v2_PrimaryAsset_C", 2},
};

static const std::vector<SkinData> chamspions_sheriff = {
    {L"NIGGA",L"Default__AK_Champions_PrimaryAsset_C", L"Default__AK_Champions_Lv4_PrimaryAsset_C", 2},
};
static int vandalSkinOption = 0;
static int sheriffSkinOption = 0;
static int guardianSkinOption = 0;
static int frenzySkinOption = 0;
static int bulldogSkinOption = 0;
static int operatorSkinOption = 0;
static int phantomSkinOption = 0;
static int ghostSkinOption = 0;
static int spectreSkinOption = 0;
static int classicSkinOption = 0;
static int marshalSkinOption = 0;
static int knifeSkinOption = 0;
static int outlawSkinOption = 0;
static int selectedSkinIndex = 0;
float rainbowTimeZCH = 0;
uobject* get_finisher_from_skin(std::wstring skinData) {
    std::wstring assetName = skinData;
    const std::wstring defaultPrefix = crypt(L"Default__").decrypt();
    if (assetName.find(defaultPrefix) == 0) {
        assetName = assetName.substr(defaultPrefix.length());
    }

    size_t firstUnderscore = assetName.find(L'_');
    size_t lastUnderscore = assetName.rfind(L"_PrimaryAsset_C");

    if (firstUnderscore == std::wstring::npos || lastUnderscore == std::wstring::npos || lastUnderscore <= firstUnderscore) {
        return nullptr;
    }

    std::wstring skinNameW = assetName.substr(firstUnderscore + 1, lastUnderscore - firstUnderscore - 1);
    std::string skinName(skinNameW.begin(), skinNameW.end());

    std::string obj = crypt("FXC_Finisher_").decrypt() + skinName + crypt("_Victim_C").decrypt();
    std::wstring wobj(obj.begin(), obj.end());
    wprintf(L"\n wobj: %ls", wobj.c_str());

    uobject* effect = uobject::find_object<uobject*>(wobj.c_str(), reinterpret_cast<uobject*>(-1));

    if (!effect && !skinName.empty()) {
        while (!skinName.empty() && std::isdigit(skinName.back())) {
            skinName.pop_back();
        }

        obj = crypt("FXC_Finisher_").decrypt() + skinName + crypt("_Victim_C").decrypt();
        wobj = std::wstring(obj.begin(), obj.end());
        printf("\n wobj: %s", wobj);
        effect = uobject::find_object<uobject*>(wobj.c_str(), reinterpret_cast<uobject*>(-1));
    }

    return effect;
}



using FinisherFn = void* (__fastcall*)(uintptr_t);

inline void* PlayFinisherEffect(uintptr_t effect)
{
    
    static void* (__fastcall * fn)(uintptr_t) = nullptr;
    if (!fn)
        fn = reinterpret_cast<FinisherFn>(memory::module_base + offsets::play_finisher_effect);

    return fn(effect);
}




namespace menu
{
    uobject* font;

    flinearcolor RGBtoFLC(float r, float g, float b)
    {
        return { r / 255, g / 255, b / 255, 1 };
    }


    flinearcolor HSVtoRGB(float h, float s, float v) {
        float r, g, b;

        int i = static_cast<int>(h * 6);
        float f = h * 6 - i;
        float p = v * (1 - s);
        float q = v * (1 - f * s);
        float t = v * (1 - (1 - f) * s);

        switch (i % 6) {
        case 0: r = v; g = t; b = p; break;
        case 1: r = q; g = v; b = p; break;
        case 2: r = p; g = v; b = t; break;
        case 3: r = p; g = q; b = v; break;
        case 4: r = t; g = p; b = v; break;
        case 5: r = v; g = p; b = q; break;
        default: r = g = b = 0.0f;
        }

        return flinearcolor{ r, g, b, 1.0f };

    }

    // x9 ware
    /*namespace Colors
    {
        flinearcolor Text{ 192.0f / 255.0f, 192.0f / 255.0f, 192.0f / 255.0f, 255.0f / 255.0f }; //
        flinearcolor Text_Shadow{ 0.0f, 0.0f, 0.0f, 1.0f };
        flinearcolor Text_Outline{ 0.0f, 0.0f, 0.0f, 1.0f };
        flinearcolor Text_Active = RGBtoFLC(184, 51, 255);  // Updated purple

        flinearcolor Button_Idle{ 10.0 / 255.0f, 10.0 / 255.0f, 10.0 / 255.0f, 0.8f }; //
        flinearcolor Button_Hovered = RGBtoFLC(7, 7, 7);
        flinearcolor Button_Active = RGBtoFLC(184, 51, 255);  // Updated purple

        flinearcolor Checkbox_Idle = RGBtoFLC(15, 15, 15);
        flinearcolor Checkbox_Hovered = RGBtoFLC(20, 20, 20);
        flinearcolor Checkbox_Enabled = RGBtoFLC(184, 51, 255); // Updated purple

        flinearcolor Combobox_Idle{ 200.0f / 255.0f, 150.0f / 255.0f, 40.0f / 255.0f };
        flinearcolor Combobox_Hovered{ 200.0f / 255.0f, 150.0f / 255.0f, 40.0f / 255.0f };
        flinearcolor Combobox_Elements{ 0.239f, 0.42f, 0.0f, 0.5f };

        flinearcolor Slider_Idle = RGBtoFLC(4, 4, 4);
        flinearcolor Slider_Hovered = RGBtoFLC(14, 14, 14);
        flinearcolor Slider_Progress = RGBtoFLC(184, 51, 255);  // Updated purple
        flinearcolor Slider_Button = RGBtoFLC(184, 51, 255);  // Updated purple

        flinearcolor ColorPicker_Background{ 0.006f, 0.006f, 0.006f, 0.4f };
    }*/

#define DEG_TO_RAD (3.14159265358979323846f / 180.0f)
#define RAD_TO_DEG (180.0f / 3.14159265358979323846f)

    inline fvector angle_to_vector(const fvector& angle) {
        
        float pitch = angle.x * DEG_TO_RAD;
        float yaw = angle.y * DEG_TO_RAD;

        float cp = cosf(pitch);
        float sp = sinf(pitch);
        float cy = cosf(yaw);
        float sy = sinf(yaw);

        return fvector(cp * cy, cp * sy, sp);
    }

    inline fvector vector_to_angle(const fvector& vec) {
        
        float hyp = sqrtf(vec.x * vec.x + vec.y * vec.y);
        float pitch = atanf(vec.z / hyp) * RAD_TO_DEG;
        float yaw = atan2f(vec.y, vec.x) * RAD_TO_DEG;
        return fvector(pitch, yaw, 0.f);
    }

    inline void normalize(fvector& vec) {
        
        float len = sqrtf(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
        if (len > 0.0001f) {
            vec.x /= len;
            vec.y /= len;
            vec.z /= len;
        }
    }

    namespace Colors
    {
        flinearcolor Text{ 192.0f / 255.0f, 192.0f / 255.0f, 192.0f / 255.0f, 255.0f / 255.0f }; //
        flinearcolor Text_Shadow{ 0.0f, 0.0f, 0.0f, 1.0f };
        flinearcolor Text_Outline{ 0.0f, 0.0f, 0.0f, 1.0f };
        flinearcolor Text_Active{ 128.0f / 255.0f, 128.0f / 255.0f, 128.0f / 255.0f, 0.8f };

        flinearcolor Button_Idle{ 10.0 / 255.0f, 10.0 / 255.0f, 10.0 / 255.0f, 0.8f / 255.0f }; //
        flinearcolor Button_Hovered{ 15.0f / 255.0f, 15.0f / 255.0f, 15.0f / 255.0f, 1.f };
        flinearcolor Button_Active{ 128.0f / 255.0f, 128.0f / 255.0f, 128.0f / 255.0f, 0.8f };

        flinearcolor Checkbox_Idle = RGBtoFLC(15, 15, 15);
        flinearcolor Checkbox_Hovered = RGBtoFLC(20, 20, 20);
        flinearcolor Checkbox_Enabled = RGBtoFLC(128, 128, 128); //

        flinearcolor Combobox_Idle{ 200.0f / 255.0f, 150.0f / 255.0f, 40.0f / 255.0f };
        flinearcolor Combobox_Hovered{ 200.0f / 255.0f, 150.0f / 255.0f, 40.0f / 255.0f };
        flinearcolor Combobox_Elements{ 0.239f, 0.42f, 0.0f, 0.5f };

        flinearcolor Slider_Idle = RGBtoFLC(4, 4, 4);
        flinearcolor Slider_Hovered = RGBtoFLC(14, 14, 14);
        flinearcolor Slider_Progress = RGBtoFLC(128, 128, 128);
        flinearcolor Slider_Button = RGBtoFLC(128, 128, 128);

        flinearcolor ColorPicker_Background{ 0.006f, 0.006f, 0.006f, 0.4f };
    }

    namespace PostRenderer
    {
        struct DrawList
        {
            int type = -1; //1 = FilledRect, 2 = TextLeft, 3 = TextCenter, 4 = Draw_Line
            fvector2d pos;
            fvector2d size;
            flinearcolor color;
            const wchar_t* name;
            bool outline;

            fvector2d from;
            fvector2d to;
            int thickness;
        };
        DrawList drawlist[128];

        void drawFilledRect(fvector2d pos, float w, float h, flinearcolor color)
        {
            for (int i = 0; i < 128; i++)
            {
                if (drawlist[i].type == -1)
                {
                    drawlist[i].type = 1;
                    drawlist[i].pos = pos;
                    drawlist[i].size = fvector2d{ w, h };
                    drawlist[i].color = color;
                    return;
                }
            }
        }

        void TextFunction(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor color, fvector2d pos) {
            
            canvas->k2_drawtext(font, text, pos, { 1.00f, 1.00f }, color, 0.f, { 0, 0, 0, 0.30f }, { 0, 0 }, true, true, true, { 0, 0, 0, 0.45 });
        }

        void TextCustom(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor text_color, fvector2d position, float width_scale, float height_scale, float thickness, float scale_factor) {

            
            float text_scale_x = width_scale * scale_factor;
            float text_scale_y = height_scale * scale_factor;
            canvas->k2_drawtext(
                font,
                text,
                position,
                { text_scale_x, text_scale_y },
                text_color,
                0.f,
                { 0, 0, 0, 0.30f },
                { 0, 0 },
                true,
                true,
                true,
                { 0, 0, 0, 0.45f }
            );
        }


        void TextLeft(const wchar_t* name, fvector2d pos, flinearcolor color, bool outline)
        {
            for (int i = 0; i < 128; i++)
            {
                if (drawlist[i].type == -1)
                {
                    drawlist[i].type = 2;
                    drawlist[i].name = name;
                    drawlist[i].pos = pos;
                    drawlist[i].outline = outline;
                    drawlist[i].color = color;
                    return;
                }
            }
        }
        void TextCenter(const wchar_t* name, fvector2d pos, flinearcolor color, bool outline)
        {
            for (int i = 0; i < 128; i++)
            {
                if (drawlist[i].type == -1)
                {
                    drawlist[i].type = 3;
                    drawlist[i].name = name;
                    drawlist[i].pos = pos;
                    drawlist[i].outline = outline;
                    drawlist[i].color = color;
                    return;
                }
            }
        }
        void Draw_Line(fvector2d from, fvector2d to, int thickness, flinearcolor color)
        {
            for (int i = 0; i < 128; i++)
            {
                if (drawlist[i].type == -1)
                {
                    drawlist[i].type = 4;
                    drawlist[i].from = from;
                    drawlist[i].to = to;
                    drawlist[i].thickness = thickness;
                    drawlist[i].color = color;
                    return;
                }
            }
        }

        void DrawLine2(ucanvas* nigga, fvector2d from, fvector2d to, int thickness, flinearcolor color)
        {
            
            nigga->k2_drawline(fvector2d{ from.x, from.y }, fvector2d{ to.x, to.y }, thickness, color);
        }

        void MainLineOn(ucanvas* canvas, const fvector2d& start, const fvector2d& end, const flinearcolor& color, float& line_thickness) {
            
            if (!canvas) return;

            canvas->k2_drawline(
                fvector2d{ start.x, start.y },
                fvector2d{ end.x, end.y },
                1.0f,
                color
            );
        }
    }

    ucanvas* canvas;


    bool hover_element = false;
    fvector2d menu_pos = fvector2d{ 0, 0 };
    float offset_x = 0.0f;
    float offset_y = 0.0f;
    float offset_tab1 = 120.0f;
    float offset_tab2 = 325.0f;


    fvector2d first_element_pos = fvector2d{ 0, 0 };

    fvector2d last_element_pos = fvector2d{ 0, 0 };
    fvector2d last_element_size = fvector2d{ 0, 0 };

    int current_element = -1;
    fvector2d current_element_pos = fvector2d{ 0, 0 };
    fvector2d current_element_size = fvector2d{ 0, 0 };
    int elements_count = 0;

    bool sameLine = false;

    bool pushY = false;
    float pushYvalue = 0.0f;

    void SetupCanvas(ucanvas* _canvas)
    {
        canvas = _canvas;
    }

    void Draw_Line(fvector2d from, fvector2d to, int thickness, flinearcolor color)
    {
        canvas->k2_drawline(fvector2d{ from.x, from.y }, fvector2d{ to.x, to.y }, thickness, color);
    }

    void drawFilledRect(fvector2d initial_pos, float w, float h, flinearcolor color)
    {
        for (float i = 0.0f; i < h; i += 1.0f)
            canvas->k2_drawline(fvector2d{ initial_pos.x, initial_pos.y + i }, fvector2d{ initial_pos.x + w, initial_pos.y + i }, 1.0f, color);
    }


    void MainRect(ucanvas* canvas, float x, float y, float width, float height, flinearcolor color) {

        for (float i = 0; i < height; i++) {
            canvas->k2_drawline(
                { x, y + i },
                { x + width, y + i },
                1.0f,
                color
            );
        }
    }

    // xd
    flinearcolor ApplyOpacityToColor(flinearcolor original, float opacity) {
        flinearcolor result = original;
        result.r *= opacity;
        result.g *= opacity;
        result.b *= opacity;
        result.a = opacity;
        return result;
    }

    void SafeDrawLine(ucanvas* canvas, fvector2d start, fvector2d end, float thickness, flinearcolor color) {
        color.r = std::clamp(color.r, 0.0f, 1.0f);
        color.g = std::clamp(color.g, 0.0f, 1.0f);
        color.b = std::clamp(color.b, 0.0f, 1.0f);
        color.a = std::clamp(color.a, 0.0f, 1.0f);

        canvas->k2_drawline(start, end, thickness, color);
    }

    void DrawOpacityLine(
        ucanvas* canvas,
        fvector2d screenpos_a,
        fvector2d screenpos_b,
        flinearcolor color_a,
        flinearcolor color_c,
        flinearcolor color_b,
        float thickness,
        int num_segments,
        float opacity = 1.0f)
    {
        // Aplicar opacidad a los colores base
        flinearcolor modified_color_a = ApplyOpacityToColor(color_a, opacity);
        flinearcolor modified_color_c = ApplyOpacityToColor(color_c, opacity);
        flinearcolor modified_color_b = ApplyOpacityToColor(color_b, opacity);

        for (int i = 0; i < num_segments; i++)
        {
            float t1 = static_cast<float>(i) / num_segments;
            float t2 = static_cast<float>(i + 1) / num_segments;

            fvector2d start = screenpos_a + (screenpos_b - screenpos_a) * t1;
            fvector2d end = screenpos_a + (screenpos_b - screenpos_a) * t2;

            float t_mid = (t1 + t2) / 2.0f;
            flinearcolor segment_color;

            if (t_mid <= 0.5f)
            {
                float u = 2.0f * t_mid;
                segment_color.r = modified_color_a.r * (1.0f - u) + modified_color_c.r * u;
                segment_color.g = modified_color_a.g * (1.0f - u) + modified_color_c.g * u;
                segment_color.b = modified_color_a.b * (1.0f - u) + modified_color_c.b * u;
                segment_color.a = opacity; // Mantener la opacidad uniforme
            }
            else
            {
                float v = 2.0f * (t_mid - 0.5f);
                segment_color.r = modified_color_c.r * (1.0f - v) + modified_color_b.r * v;
                segment_color.g = modified_color_c.g * (1.0f - v) + modified_color_b.g * v;
                segment_color.b = modified_color_c.b * (1.0f - v) + modified_color_b.b * v;
                segment_color.a = opacity; // Mantener la opacidad uniforme
            }

            SafeDrawLine(canvas, start, end, thickness, segment_color);
        }
    }

    void DrawGradientLine(fvector2d screenpos_a, fvector2d screenpos_b, flinearcolor color_a, flinearcolor color_c, flinearcolor color_b, float thickness, int num_segments)
    {
        for (int i = 0; i < num_segments; i++)
        {
            float t1 = static_cast<float>(i) / num_segments;
            float t2 = static_cast<float>(i + 1) / num_segments;

            fvector2d start = screenpos_a + (screenpos_b - screenpos_a) * t1;
            fvector2d end = screenpos_a + (screenpos_b - screenpos_a) * t2;

            float t_mid = (t1 + t2) / 2.0f;

            flinearcolor color;

            if (t_mid <= 0.5f)
            {
                float u = 2.0f * t_mid;  // Maps t_mid [0, 0.5] to u [0, 1]
                color.r = color_a.r * (1.0f - u) + color_c.r * u;
                color.g = color_a.g * (1.0f - u) + color_c.g * u;
                color.b = color_a.b * (1.0f - u) + color_c.b * u;
                color.a = color_a.a * (1.0f - u) + color_c.a * u;
            }
            else
            {
                float v = 2.0f * (t_mid - 0.5f);  // Maps t_mid [0.5, 1] to v [0, 1]
                color.r = color_c.r * (1.0f - v) + color_b.r * v;
                color.g = color_c.g * (1.0f - v) + color_b.g * v;
                color.b = color_c.b * (1.0f - v) + color_b.b * v;
                color.a = color_c.a * (1.0f - v) + color_b.a * v;
            }

            canvas->k2_drawline(start, end, thickness, color);
        }
    }

    // DrawGradientLine(startPos, endPos, red, green, blue, 2.0f, 20);
    void drawGradientFilledRect(fvector2d initial_pos, float w, float h, flinearcolor color_a, flinearcolor color_c, flinearcolor color_b, int num_segments)
    {
        for (float i = 0.0f; i < h; i += 1.0f)
            DrawGradientLine(fvector2d{ initial_pos.x, initial_pos.y + i }, fvector2d{ initial_pos.x + w, initial_pos.y + i }, color_a, color_c, color_b, 1.0f, num_segments);
    }

    void drawOpacityFilledRect(
        ucanvas* canvas,
        fvector2d initial_pos,
        float w,
        float h,
        flinearcolor color_a,
        flinearcolor color_c,
        flinearcolor color_b,
        int num_segments,
        float opacity = 1.0f)
    {
        static uobject* set_blend_func = uobject::find_object<uobject*>(crypt(L"Engine.Canvas.K2_SetBlendMode").decrypt());
        if (set_blend_func)
        {
            struct { uint8_t blend_mode; } blend_params;
            blend_params.blend_mode = 1;
            canvas->process_event(set_blend_func, &blend_params);
        }

        for (float i = 0.0f; i < h; i += 1.0f)
        {
            DrawOpacityLine(
                canvas,
                fvector2d{ initial_pos.x, initial_pos.y + i },
                fvector2d{ initial_pos.x + w, initial_pos.y + i },
                color_a,
                color_c,
                color_b,
                1.0f,
                num_segments,
                opacity);
        }

        if (set_blend_func)
        {
            struct { uint8_t blend_mode; } blend_params;
            blend_params.blend_mode = 0;
            canvas->process_event(set_blend_func, &blend_params);
        }
    }

    void drawGradientFilledRectVertical(fvector2d initial_pos, float w, float h, flinearcolor color_a, flinearcolor color_c, flinearcolor color_b, int num_segments)
    {
        for (float i = 0.0f; i < w; i += 1.0f)
            DrawGradientLine(fvector2d{ initial_pos.x + i, initial_pos.y }, fvector2d{ initial_pos.x + i, initial_pos.y + h }, color_a, color_c, color_b, 1.0f, num_segments);
    }

    void drawFilledRectOn(ucanvas* canvas, float x, float y, float width, float height, flinearcolor color) {
        for (float i = 0; i < height; i++) {
            canvas->k2_drawline(
                { x, y + i },
                { x + width, y + i },
                1.0f,
                color
            );
        }
    }

    void drawRect(ucanvas* canvas, float x, float y, float width, float height, flinearcolor color) {
        canvas->k2_drawline({ x, y }, { x + width, y }, 1.0f, color);
        canvas->k2_drawline({ x + width, y }, { x + width, y + height }, 1.0f, color);
        canvas->k2_drawline({ x + width, y + height }, { x, y + height }, 1.0f, color);
        canvas->k2_drawline({ x, y + height }, { x, y }, 1.0f, color);
    }

    fvector2d CursorPos()
    {
        POINT cursorPos;
        GetCursorPos(&cursorPos);
        return fvector2d{ (double)cursorPos.x, (double)cursorPos.y };
    }
    bool MouseInZone(fvector2d pos, fvector2d size)
    {
        fvector2d cursor_pos = CursorPos();

        if (cursor_pos.x > pos.x && cursor_pos.y > pos.y)
            if (cursor_pos.x < pos.x + size.x && cursor_pos.y < pos.y + size.y)
                return true;

        return false;
    }

    void Draw_Cursor(bool toogle)
    {
        if (toogle)
        {
            fvector2d cursorPos = CursorPos();
            drawFilledRect(fvector2d(cursorPos.x - 5, cursorPos.y - 5), 5, 5, flinearcolor(3, 3, 3));
        }
    }

    void SameLine()
    {
        sameLine = true;
    }
    void PushNextElementY(float y, bool from_last_element = true)
    {
        pushY = true;
        if (from_last_element)
            pushYvalue = last_element_pos.y + last_element_size.y + y;
        else
            pushYvalue = y;
    }
    void NextColumn(float x)
    {
        offset_x = x;
        PushNextElementY(first_element_pos.y, false);
    }
    void ClearFirstPos()
    {
        first_element_pos = fvector2d{ 0, 0 };
    }

    void xDrawTextRGB(const wchar_t* text, float x, float y, flinearcolor color)
    {
        canvas->k2_drawtext(font, text, { x, y }, { 0.85f, 0.85f }, { 1.f,1.f,1.f,1.0f }, 0.f, { 0, 0, 0, 1 }, { 0, 0 }, 0, 0, 0, { 0, 0, 0, 1 });
    }
    void yDrawTextRGB(const wchar_t* text, float x, float y, flinearcolor color)
    {
        canvas->k2_drawtext(font, text, { x, y }, { 1.1, 1.1 }, { 1.f,1.f,1.f,1.0f }, 0.f, { 0, 0, 0, 1 }, { 0, 0 }, 1, 0, 0, { 0, 0, 0, 1 });
    }
    void TextLeft(const wchar_t* name, fvector2d pos, flinearcolor color, bool outline)
    {
        xDrawTextRGB(name, pos.x, pos.y, { 1,1,1,1 });
    }
    void TextCenter(const wchar_t* name, fvector2d pos, flinearcolor color, bool outline, bool kekw = 0)
    {
        if (kekw)
            yDrawTextRGB(name, pos.x, pos.y - 10, color);
        else
            yDrawTextRGB(name, pos.x, pos.y - 10, { 1.f,1.f,1.f,1.0f });
    }

    void GetColor(flinearcolor* color, float* r, float* g, float* b, float* a)
    {
        *r = color->r;
        *g = color->g;
        *b = color->b;
        *a = color->a;
    }
    UINT32 GetColorUINT(int r, int g, int b, int a)
    {
        UINT32 result = (BYTE(a) << 24) + (BYTE(r) << 16) + (BYTE(g) << 8) + BYTE(b);
        return result;
    }


    void DrawFilledCircle(fvector2d pos, float r, flinearcolor color)
    {
        float smooth = 0.07f;

        double PI = 3.14159265359;
        int size = (int)(2.0f * PI / smooth) + 1;

        float angle = 0.0f;
        int i = 0;

        for (; angle < 2 * PI; angle += smooth, i++)
        {
            Draw_Line(fvector2d{ pos.x, pos.y }, fvector2d{ pos.x + cosf(angle) * r, pos.y + sinf(angle) * r }, 1.0f, color);
        }
    }
    void DrawCircle(fvector2d pos, int radius, int numSides, flinearcolor Color)
    {
        float PI = 3.1415927f;

        float Step = PI * 2.0 / numSides;
        int Count = 0;
        fvector2d V[128];
        for (float a = 0; a < PI * 2.0; a += Step) {
            float X1 = radius * cos(a) + pos.x;
            float Y1 = radius * sin(a) + pos.y;
            float X2 = radius * cos(a + Step) + pos.x;
            float Y2 = radius * sin(a + Step) + pos.y;
            V[Count].x = X1;
            V[Count].y = Y1;
            V[Count + 1].x = X2;
            V[Count + 1].y = Y2;

            Draw_Line(fvector2d{ V[Count].x, V[Count].y }, fvector2d{ X2, Y2 }, 1.0f, Color);
        }
    }

    fvector2d dragPos;
    bool Window(fstring title, fstring build, fstring buildtype, fvector2d* pos, fvector2d size, bool isOpen)
    {
        elements_count = 0;

        if (!isOpen)
            return false;

        bool isHovered = MouseInZone(fvector2d{ pos->x, pos->y }, size);

        //Drop last element
        if (current_element != -1 && !GetAsyncKeyState(0x1))
        {
            current_element = -1;
        }

        //Drag
        if (hover_element && GetAsyncKeyState(0x1))
        {

        }
        else if ((isHovered || dragPos.x != 0) && !hover_element)
        {
            if (inpute::is_mouse_clicked(0, elements_count, true))
            {
                fvector2d cursorPos = CursorPos();

                cursorPos.x -= size.x;
                cursorPos.y -= size.y;

                if (dragPos.x == 0)
                {
                    dragPos.x = (cursorPos.x - pos->x);
                    dragPos.y = (cursorPos.y - pos->y);
                }
                pos->x = cursorPos.x - dragPos.x;
                pos->y = cursorPos.y - dragPos.y;
            }
            else
            {
                dragPos = fvector2d{ 0, 0 };
            }
        }
        else
        {
            hover_element = false;
        }


        offset_x = 85.0f; offset_y = 5.0f;
        menu_pos = fvector2d{ pos->x, pos->y };
        first_element_pos = fvector2d{ 0, 0 };
        current_element_pos = fvector2d{ 0, 0 };
        current_element_size = fvector2d{ 0, 0 };

        // bg
        drawFilledRect(fvector2d(pos->x, pos->y), size.x, size.y, RGBtoFLC(-3, -3, -3));
        drawFilledRect(fvector2d(pos->x + 1, pos->y + 1), size.x - 2, size.y - 2, RGBtoFLC(4, 4, 4));
        drawFilledRect(fvector2d(pos->x + 2, pos->y + 2), size.x - 4, size.y - 4, RGBtoFLC(1.75, 1.75, 1.75));

        // mid
        drawFilledRect(fvector2d(pos->x + 2, pos->y + 2), size.x - 4, 22, RGBtoFLC(-3, -3, -3));
        drawFilledRect(fvector2d(pos->x + 1, pos->y + 2 + 22), size.x - 2, 1, RGBtoFLC(4, 4, 4));

        // effect
        drawFilledRect(fvector2d(pos->x + 2, pos->y + size.y - 2 - 23), size.x - 4, 22, RGBtoFLC(-3, -3, -3));
        drawFilledRect(fvector2d(pos->x + 1, pos->y + size.y - 2 - 23), size.x - 2, 1, RGBtoFLC(4, 4, 4));

        // left
        drawFilledRect(fvector2d(pos->x + 13, pos->y + 25 + 10), 120, 330, RGBtoFLC(4, 4, 4)); //outline
        drawFilledRect(fvector2d(pos->x + 14, pos->y + 26 + 10), 120 - 2, 330 - 2, RGBtoFLC(-3, -3, -3)); //main

        // 1TAB
        drawFilledRect(fvector2d(pos->x + 140, pos->y + 25 + 10), 199, 330, RGBtoFLC(4, 4, 4)); //outline
        drawFilledRect(fvector2d(pos->x + 141, pos->y + 26 + 10), 199 - 2, 330 - 2, RGBtoFLC(-3, -3, -3)); //main

        // PART TOP
        drawRect(canvas, pos->x + 140, pos->y + 25 + 10, 199, 30, RGBtoFLC(4, 4, 4));

        // 2TAB
        drawFilledRect(fvector2d(pos->x + 346, pos->y + 25 + 10), 199, 330, RGBtoFLC(4, 4, 4)); //outline
        drawFilledRect(fvector2d(pos->x + 347, pos->y + 26 + 10), 199 - 2, 330 - 2, RGBtoFLC(-3, -3, -3)); //main

        // PART TOP
        drawRect(canvas, pos->x + 346, pos->y + 25 + 10, 199, 30, RGBtoFLC(4, 4, 4));


        canvas->k2_drawtext(font, title, fvector2d(pos->x + 8, pos->y + (23 / 2)), fvector2d(1.1f, 0.93f), RGBtoFLC(220, 0, 0), 0.0f, RGBtoFLC(0, 0, 0), fvector2d(0, 0), false, true, false, RGBtoFLC(0, 0, 0));

        canvas->k2_drawtext(font, build, fvector2d(pos->x + 8, pos->y + size.y - 2 - (23 / 2)), fvector2d(1.05f, 0.93f), RGBtoFLC(94, 94, 94), 0.0f, RGBtoFLC(0, 0, 0), fvector2d(0, 0), false, true, false, RGBtoFLC(0, 0, 0));
        canvas->k2_drawtext(font, fstring(L" CheatGlobal"), fvector2d(pos->x + 50, pos->y + size.y - 2 - (23 / 2)), fvector2d(1.05f, 0.93f), RGBtoFLC(0, 150, 0), 0.0f, RGBtoFLC(0, 0, 0), fvector2d(0, 0), false, true, false, RGBtoFLC(0, 0, 0));
        canvas->k2_drawtext(font, fstring(L" Updated by RyzerINC"), fvector2d(pos->x + 145, pos->y + size.y - 2 - (23 / 2)), fvector2d(1.05f, 0.93f), RGBtoFLC(255, 255, 0), 0.0f, RGBtoFLC(0, 0, 0), fvector2d(0, 0), false, true, false, RGBtoFLC(0, 0, 0));

        return true;
    }

    bool ButtonTab(const wchar_t* name, fvector2d size, bool active)
    {
        elements_count++;

        fvector2d padding = fvector2d{ 0, 0 };
        fvector2d pos = fvector2d{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };
        if (sameLine)
        {
            pos.x = last_element_pos.x + last_element_size.x + offset_x;
            pos.y = last_element_pos.y;
        }
        if (pushY)
        {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 0.0f;
            offset_y = pos.y - menu_pos.y;
        }
        bool isHovered = MouseInZone(fvector2d{ pos.x, pos.y }, size);

        if (!sameLine)
            offset_y += size.y + padding.y;

        fvector2d textPos = fvector2d{ pos.x + size.x / 2, pos.y + size.y / 2 };

        //Bg
        if (active)
        {
            drawFilledRect(fvector2d(pos.x, pos.y + 2), size.x, size.y, RGBtoFLC(10, 10, 10));

            drawFilledRect(fvector2d(pos.x + 1, pos.y + 2), size.x - 2, size.y, RGBtoFLC(1.25, 1.25, 1.25));

            drawGradientFilledRect(fvector2d(pos.x + 1, pos.y + 1), size.x - 2, 1, RGBtoFLC(220 / 4, 0, 0), RGBtoFLC(220 / 2, 0, 0), RGBtoFLC(220, 0, 0), 100);

            drawGradientFilledRect(fvector2d(pos.x, pos.y + 2), 1, 0.5, RGBtoFLC(220 / 4, 0, 0), RGBtoFLC(220 / 2, 0, 0), RGBtoFLC(220, 0, 0), 100);
            drawGradientFilledRect(fvector2d(pos.x + size.x - 1, pos.y + 2), 1, 0.5, RGBtoFLC(220 / 4, 0, 0), RGBtoFLC(220 / 2, 0, 0), RGBtoFLC(220, 0, 0), 100);

            canvas->k2_drawtext(font, name, textPos, fvector2d(0.96, 0.92), RGBtoFLC(220, 0, 0), 0.0f, RGBtoFLC(0, 0, 0), fvector2d(0, 0), true, true, false, RGBtoFLC(0, 0, 0));
        }
        else if (isHovered)
        {
            canvas->k2_drawtext(font, name, textPos, fvector2d(0.96, 0.92), RGBtoFLC(140, 140, 140), 0.0f, RGBtoFLC(0, 0, 0), fvector2d(0, 0), true, true, false, RGBtoFLC(0, 0, 0));
            hover_element = true;
        }
        else
        {
            canvas->k2_drawtext(font, name, textPos, fvector2d(0.96, 0.92), RGBtoFLC(90, 90, 90), 0.0f, RGBtoFLC(0, 0, 0), fvector2d(0, 0), true, true, false, RGBtoFLC(0, 0, 0));
        }

        sameLine = false;
        last_element_pos = pos;
        last_element_size = size;
        if (first_element_pos.x == 0.0f)
            first_element_pos = pos;

        if (isHovered && inpute::is_mouse_clicked(0, elements_count, false))
            return true;

        return false;
    }

    bool ButtonSection(const wchar_t* name, fvector2d size, bool active)
    {
        elements_count++;

        float original_offset_y = offset_y;
        bool original_sameLine = sameLine;
        fvector2d padding = fvector2d{ 0, 0 };
        fvector2d pos = fvector2d{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };
        if (sameLine)
        {
            pos.x = last_element_pos.x + last_element_size.x + offset_x;
            pos.y = last_element_pos.y;
        }
        if (pushY)
        {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 0.0f;
            offset_y = pos.y - menu_pos.y;
        }
        bool isHovered = MouseInZone(fvector2d{ pos.x, pos.y }, size);

        if (!sameLine)
            offset_y += size.y + padding.y;

        fvector2d textPos = fvector2d{ pos.x + 9, pos.y + size.y / 2 - 3 };


        if (active)
        {
            drawGradientFilledRect(fvector2d(pos.x, pos.y), 1.0f, size.y, RGBtoFLC(220 / 4, 0, 0), RGBtoFLC(220 / 2, 0, 0), RGBtoFLC(220, 0, 0), 100);
            drawOpacityFilledRect(canvas, fvector2d{ pos.x + 2, pos.y }, 70, size.y, RGBtoFLC(220 / 2, 0, 0), RGBtoFLC(220 / 4, 0, 0), RGBtoFLC(220 / 8, 0, 0), 100, 0.2);
            canvas->k2_drawtext(font, name, textPos, fvector2d(0.97, 0.92), RGBtoFLC(220, 0, 0), 0.0f, RGBtoFLC(0, 0, 0), fvector2d(0, 0), false, true, false, RGBtoFLC(0, 0, 0));
        }
        else if (isHovered)
        {
            drawGradientFilledRect(fvector2d(pos.x, pos.y), 1.0f, size.y, RGBtoFLC(90 / 2, 90 / 2, 90 / 2), RGBtoFLC(90 / 4, 90 / 4, 90 / 4), RGBtoFLC(90 / 8, 90 / 8, 90 / 8), 100);
            drawOpacityFilledRect(canvas, fvector2d{ pos.x + 2, pos.y }, 70, size.y, RGBtoFLC(90 / 2, 90 / 2, 90 / 2), RGBtoFLC(90 / 4, 90 / 4, 90 / 4), RGBtoFLC(90 / 8, 90 / 8, 90 / 8), 100, 0.2);
            canvas->k2_drawtext(font, name, textPos, fvector2d(0.97, 0.92), RGBtoFLC(140, 140, 140), 0.0f, RGBtoFLC(0, 0, 0), fvector2d(0, 0), false, true, false, RGBtoFLC(0, 0, 0));
            hover_element = true;
        }
        else
        {
            drawGradientFilledRect(fvector2d(pos.x, pos.y), 1, size.y, RGBtoFLC(30 / 2, 30 / 2, 30 / 2), RGBtoFLC(30 / 2, 30 / 2, 30 / 2), RGBtoFLC(30 / 2, 30 / 2, 30 / 2), 100);
            canvas->k2_drawtext(font, name, textPos, fvector2d(0.97, 0.92), RGBtoFLC(90, 90, 90), 0.0f, RGBtoFLC(0, 0, 0), fvector2d(0, 0), false, true, false, RGBtoFLC(0, 0, 0));
        }

        if (!sameLine)
        {
            offset_y = original_offset_y; // Restaurar posición original primero
            offset_y += size.y + 5.0f; // Espacio constante de 5px después del botón
        }

        sameLine = original_sameLine;
        last_element_pos = pos;
        last_element_size = size;
        if (first_element_pos.x == 0.0f)
            first_element_pos = pos;

        if (isHovered && inpute::is_mouse_clicked(0, elements_count, false))
            return true;

        return false;
    }

    void DrawCheckMark(fvector2d pos, float sz, flinearcolor color)
    {
        float thickness = fmaxf(sz / 5.0f, 1.0f);
        sz -= thickness * 0.5f;
        pos.x += thickness * 0.25f;
        pos.y += thickness * 0.25f;

        float third = sz / 3.0f;
        float bx = pos.x + third;
        float by = pos.y + sz - third * 0.5f;

        fvector2d p1 = fvector2d{ bx - third, by - third };
        fvector2d p2 = fvector2d{ bx, by };
        fvector2d p3 = fvector2d{ bx + third * 2.0f, by - third * 2.0f };

        // Assuming a simple function to draw lines with thickness
        canvas->k2_drawline(p1, p2, thickness, color);
        canvas->k2_drawline(p2, p3, thickness, color);
    }

    void SectionWrapper(fstring name, fvector2d size)
    {
        fvector2d padding = fvector2d{ 0, 0 };
        fvector2d pos = fvector2d{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };
        if (sameLine)
        {
            pos.x = menu_pos.x + padding.x + offset_x;
            pos.y = menu_pos.y + padding.y + offset_y;
        }

        drawFilledRect(fvector2d{ pos.x, pos.y }, size.x, size.y, RGBtoFLC(4, 4, 4));
        drawFilledRect(fvector2d{ pos.x + 1, pos.y + 1 }, size.x - 2, size.y - 2, RGBtoFLC(2, 2, 2));

        canvas->k2_drawtext(font, name, fvector2d(pos.x + (size.x / 2), pos.y + (24 / 2)), fvector2d(0.95, 0.85), RGBtoFLC(90, 90, 90), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), true, true, false, Colors::Text_Shadow);

        drawFilledRect(fvector2d{ pos.x + 1 + 13, pos.y + 26 }, size.x - 28, 2, RGBtoFLC(3, 3, 3));

        menu::offset_y += 26 + 4;

        sameLine = false;
    }
    wchar_t GetPressedChar()
    {
        for (int vk = 0x20; vk <= 0x5A; vk++) // SPACE → Z
        {
            if (GetAsyncKeyState(vk) & 0x1)
            {
                // Letters A–Z
                if (vk >= 'A' && vk <= 'Z')
                {
                    bool shift = (GetAsyncKeyState(VK_SHIFT) & 0x8000);
                    wchar_t c = shift ? wchar_t(vk) : wchar_t(vk + 32);
                    return c;
                }

                // Numbers 0–9
                if (vk >= '0' && vk <= '9')
                    return wchar_t(vk);

                // Space
                if (vk == VK_SPACE)
                    return L' ';
            }
        }

        return 0;
    }

    bool IsKeyPressed(int vk)
    {
        return (GetAsyncKeyState(vk) & 0x1);
    }
    static bool WasKeyJustPressed(int vk)
    {
        SHORT state = GetAsyncKeyState(vk);
        bool nowDown = !!(state & 0x8000);
        bool justPressed = (nowDown && !prevKeyDown[vk]);
        prevKeyDown[vk] = nowDown;
        return justPressed;
    }
    static bool GetJustPressedChar(wchar_t& outChar)
    {
        bool shift = (GetAsyncKeyState(VK_SHIFT) & 0x8000) != 0;

        // Letters
        for (int vk = 'A'; vk <= 'Z'; ++vk)
        {
            if (WasKeyJustPressed(vk))
            {
                outChar = (wchar_t)(shift ? vk : vk + 32); // uppercase if shift
                return true;
            }
        }

        // Numbers top row (VK_0..VK_9)
        // map with shift to symbols: 1->! 2->@ 3-># 4->$ 5->% 6->^ 7->& 8->* 9->( 0->)
        const wchar_t shiftNumMap[10] = { L')', L'!', L'@', L'#', L'$', L'%', L'^', L'&', L'*', L'(' };
        for (int vk = '0'; vk <= '9'; ++vk)
        {
            if (WasKeyJustPressed(vk))
            {
                int idx = vk - '0';
                outChar = shift ? shiftNumMap[idx] : (wchar_t)vk;
                return true;
            }
        }

        // Space
        if (WasKeyJustPressed(VK_SPACE))
        {
            outChar = L' ';
            return true;
        }

        // OEM keys (common punctuation) - handle typical US layout
        if (WasKeyJustPressed(VK_OEM_1))  // ;:
        {
            outChar = shift ? L':' : L';'; return true;
        }
        if (WasKeyJustPressed(VK_OEM_PLUS)) // =+
        {
            outChar = shift ? L'+' : L'='; return true;
        }
        if (WasKeyJustPressed(VK_OEM_COMMA)) // ,<
        {
            outChar = shift ? L'<' : L','; return true;
        }
        if (WasKeyJustPressed(VK_OEM_MINUS)) // -_
        {
            outChar = shift ? L'_' : L'-'; return true;
        }
        if (WasKeyJustPressed(VK_OEM_PERIOD)) // .>
        {
            outChar = shift ? L'>' : L'.'; return true;
        }
        if (WasKeyJustPressed(VK_OEM_2)) // /?
        {
            outChar = shift ? L'?' : L'/'; return true;
        }
        if (WasKeyJustPressed(VK_OEM_3)) // `~
        {
            outChar = shift ? L'~' : L'`'; return true;
        }
        if (WasKeyJustPressed(VK_OEM_4)) // [{
        {
            outChar = shift ? L'{' : L'['; return true;
        }
        if (WasKeyJustPressed(VK_OEM_5)) // \|
        {
            outChar = shift ? L'|' : L'\\'; return true;
        }
        if (WasKeyJustPressed(VK_OEM_6)) // ]}
        {
            outChar = shift ? L'}' : L']'; return true;
        }
        if (WasKeyJustPressed(VK_OEM_7)) // '"
        {
            outChar = shift ? L'"' : L'\''; return true;
        }

        return false;
    }
    void HandleClipboardPaste(std::wstring& buffer)
    {
        bool ctrlPressed = (GetAsyncKeyState(VK_CONTROL) & 0x8000) != 0;
        bool vPressed = WasKeyJustPressed('V');

        if (ctrlPressed && vPressed)
        {
            if (OpenClipboard(nullptr))
            {
                HANDLE hData = GetClipboardData(CF_UNICODETEXT);
                if (hData)
                {
                    wchar_t* pszText = static_cast<wchar_t*>(GlobalLock(hData));
                    if (pszText)
                    {
                        buffer += pszText; // append clipboard content
                        GlobalUnlock(hData);
                    }
                }
                CloseClipboard();
            }
        }
    }
    bool InputText(const wchar_t* name, std::wstring& buffer, fvector2d size)
    {
        elements_count++;

        fvector2d padding{ 15, 10 };
        fvector2d pos{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };

        if (sameLine) { pos.x = last_element_pos.x + last_element_size.x + padding.x; pos.y = last_element_pos.y; }
        if (pushY) { pos.y = pushYvalue; pushY = false; pushYvalue = 0.f; offset_y = pos.y - menu_pos.y; }

        bool hovered = MouseInZone(pos, size);
        bool leftClick = (GetAsyncKeyState(VK_LBUTTON) & 0x1) != 0;
        static bool lastClickState = false;

        // === Click handling (activate/deactivate input) ===
        if (hovered && leftClick && !lastClickState)
        {
            chatTypingActive = true;
            lastCursorFlip = GetTickCount64();
            cursorOn = true;
        }
        else if (!hovered && leftClick && !lastClickState)
        {
            chatTypingActive = false;
        }
        lastClickState = leftClick;

        // === Background ===
        drawFilledRect(pos, size.x, size.y, RGBtoFLC(12, 12, 12));
        drawFilledRect(fvector2d(pos.x + 1, pos.y + 1), size.x - 2, size.y - 2, hovered ? RGBtoFLC(4, 4, 4) : RGBtoFLC(3, 3, 3));

        // === Prepare text with blinking cursor ===
        std::wstring drawText = buffer.empty() && !chatTypingActive ? L"[ Type message... ]" : buffer;
        DWORD now = GetTickCount64();
        if (now - lastCursorFlip >= CURSOR_BLINK_MS) { lastCursorFlip = now; cursorOn = !cursorOn; }

        if (chatTypingActive && drawText.size() < CHAT_MAX_LENGTH)
            drawText += cursorOn ? L'|' : L' ';

        canvas->k2_drawtext(font, drawText.c_str(), fvector2d(pos.x + 6, pos.y + size.y / 4),
            fvector2d(0.9, 0.9), RGBtoFLC(180, 180, 180), 0.f,
            Colors::Text_Shadow, fvector2d(0, 0), false, false, false, Colors::Text_Outline);

        // === Input handling when active ===
        if (chatTypingActive)
        {
            // Backspace
            if (WasKeyJustPressed(VK_BACK) && !buffer.empty()) buffer.pop_back();

            // Paste from clipboard
            HandleClipboardPaste(buffer);

            // Normal characters
            wchar_t ch;
            if (GetJustPressedChar(ch) && buffer.size() < CHAT_MAX_LENGTH) buffer.push_back(ch);
        }

        // === Layout bookkeeping ===
        if (!sameLine) offset_y += size.y + padding.y;
        sameLine = false; last_element_pos = pos; last_element_size = size;
        if (first_element_pos.x == 0.f) first_element_pos = pos;

        return chatTypingActive;
    }

    void ChatInputHandler(WPARAM key)
    {
        if (!chatTypingActive)
            return;

        if (key == VK_BACK)
        {
            if (!globals::misc::chatMessage.empty())
                globals::misc::chatMessage.pop_back();
            return;
        }

        if (key == VK_RETURN)
        {
            chatTypingActive = false;
            return;
        }

        // Only visible characters
        if (key >= 32 && key <= 126)
            globals::misc::chatMessage.push_back((wchar_t)key);
    }

    void Checkbox(const wchar_t* name, bool* value)
    {

        elements_count++;

        const float checkboxSize = 12.0f;
        const float textOffsetY = -1.0f;
        const float spacing = 5.0f;
        fvector2d padding = fvector2d{ 5.0f, 10.0f };


        fvector2d pos = fvector2d{
        menu_pos.x + padding.x + offset_x,
        menu_pos.y + padding.y + offset_y
        };

        if (sameLine) {
            pos.x = last_element_pos.x + last_element_size.x + padding.x;
            pos.y = last_element_pos.y;
        }

        if (pushY) {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 0.0f;
            offset_y = pos.y - menu_pos.y;
        }

        fvector2d checkboxPos = pos;
        fvector2d textPos = fvector2d{
            pos.x + checkboxSize + spacing,
            pos.y + textOffsetY
        };


        bool isHovered = MouseInZone(
            fvector2d{ pos.x, pos.y },
            fvector2d{ checkboxSize + 100.0f, checkboxSize }
        );

        drawFilledRect(checkboxPos, checkboxSize, checkboxSize, RGBtoFLC(7, 7, 7));
        drawFilledRect(fvector2d{ checkboxPos.x + 1, checkboxPos.y + 1 }, checkboxSize - 2, checkboxSize - 2, RGBtoFLC(2.5, 2.5, 2.5));

        canvas->k2_drawtext(
            font, name, textPos,
            fvector2d(0.9f, 0.9f),
            *value ? RGBtoFLC(255, 255, 255) : RGBtoFLC(90, 90, 90),
            0.0f, Colors::Text_Shadow, fvector2d(0, 0),
            false, false, false, Colors::Text_Shadow
        );

        if (*value) {
            drawGradientFilledRect(fvector2d{ checkboxPos.x + 2, checkboxPos.y + 2 }, checkboxSize - 4, checkboxSize - 4, RGBtoFLC(220 / 4, 0, 0), RGBtoFLC(220 / 2, 0, 0), RGBtoFLC(220, 0, 0), 100);
        }

        if (!sameLine) {
            offset_y += checkboxSize + padding.y;
        }

        sameLine = false;
        last_element_pos = pos;
        last_element_size = fvector2d{ checkboxSize + 100.0f + spacing, checkboxSize };

        if (first_element_pos.x == 0.0f) {
            first_element_pos = pos;
        }

        if (isHovered && inpute::is_mouse_clicked(0, elements_count, false)) {
            *value = !*value;
        }
    }	bool checkbox_enabled[256];

    void Combobox(const wchar_t* name, fvector2d size, int* value, const wchar_t* arg, ...)
    {
        elements_count++;

        fvector2d padding = fvector2d{ 14, 30 };
        fvector2d pos = fvector2d{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };
        if (sameLine)
        {
            pos.x = last_element_pos.x + last_element_size.x + padding.x;
            pos.y = last_element_pos.y;
        }
        if (pushY)
        {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 20.0f;
            offset_y = pos.y - menu_pos.y;
        }
        bool isHovered = MouseInZone(fvector2d{ pos.x, pos.y }, size);

        //Bg
        if (isHovered || checkbox_enabled[elements_count])
        {
            drawFilledRect(fvector2d{ pos.x, pos.y }, size.x, size.y, RGBtoFLC(10, 10, 10));
            drawFilledRect(fvector2d{ pos.x + 1, pos.y + 1 }, size.x - 2, size.y - 2, RGBtoFLC(3, 3, 3));

            hover_element = true;
        }
        else
        {
            drawFilledRect(fvector2d{ pos.x, pos.y }, size.x, size.y, RGBtoFLC(10, 10, 10));
            drawFilledRect(fvector2d{ pos.x + 1, pos.y + 1 }, size.x - 2, size.y - 2, RGBtoFLC(2, 2, 2));
        }

        if (!sameLine)
            offset_y += size.y + padding.y;

        //Text
        fvector2d textPos = fvector2d{ pos.x - 2.0f, pos.y - size.y + 2.0f };
        canvas->k2_drawtext(font, name, textPos, fvector2d(0.99, 0.99), RGBtoFLC(255, 255, 255), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), false, false, true, Colors::Text_Outline);

        canvas->k2_drawtext(font, s2wc("-"), fvector2d{ pos.x + size.x - 17, pos.y + size.y / 2 }, fvector2d(0.97, 0.97), RGBtoFLC(255, 255, 255), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), false, true, true, Colors::Text_Outline);

        //Elements
        bool isHovered2 = false;
        fvector2d element_pos = pos;
        int num = 0;

        if (checkbox_enabled[elements_count])
        {
            current_element_size.x = element_pos.x - 5.0f;
            current_element_size.y = element_pos.y - 5.0f;
        }
        va_list arguments;
        for (va_start(arguments, arg); arg != NULL; arg = va_arg(arguments, const wchar_t*))
        {
            //Selected Element
            if (num == *value)
            {
                fvector2d _textPos = fvector2d{ pos.x + 5, pos.y + size.y / 2 };
                canvas->k2_drawtext(font, arg, _textPos, fvector2d(0.98, 0.98), RGBtoFLC(130, 130, 130), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), false, true, true, Colors::Text_Outline);
            }

            if (checkbox_enabled[elements_count])
            {
                element_pos.y += 25.0f;

                isHovered2 = MouseInZone(fvector2d{ element_pos.x, element_pos.y }, fvector2d{ size.x, 25.0f });
                if (isHovered2)
                {
                    hover_element = true;
                    PostRenderer::drawFilledRect(fvector2d{ element_pos.x, element_pos.y }, size.x, 25.0f, RGBtoFLC(4, 4, 4));

                    //Click
                    if (inpute::is_mouse_clicked(0, elements_count, false))
                    {
                        *value = num;
                        checkbox_enabled[elements_count] = false;
                    }
                }
                else
                {
                    PostRenderer::drawFilledRect(fvector2d{ element_pos.x, element_pos.y }, size.x, 25.0f, RGBtoFLC(3, 3, 3));
                }

                PostRenderer::TextLeft(arg, fvector2d{ element_pos.x + 10.0f, element_pos.y + 5.0f }, RGBtoFLC(110, 110, 110), true);
            }
            num++;
        }
        va_end(arguments);
        if (checkbox_enabled[elements_count])
        {
            current_element_size.x = element_pos.x + 5.0f;
            current_element_size.y = element_pos.y + 5.0f;
        }


        sameLine = false;
        last_element_pos = pos;
        last_element_size = size;
        if (first_element_pos.x == 0.0f)
            first_element_pos = pos;

        if (isHovered && inpute::is_mouse_clicked(0, elements_count, false))
        {
            checkbox_enabled[elements_count] = !checkbox_enabled[elements_count];
        }
        if (!isHovered && !isHovered2 && inpute::is_mouse_clicked(0, elements_count, false))
        {
            checkbox_enabled[elements_count] = false;
        }
    }
    void Combobox2(const wchar_t* name, fvector2d size, int* value, const std::vector<const wchar_t*>& items)
    {
        elements_count++;

        fvector2d padding = fvector2d{ 15, 30 };
        fvector2d pos = fvector2d(menu::offset_x, menu::offset_y);
        if (sameLine)
        {
            pos.x = last_element_pos.x + last_element_size.x + padding.x;
            pos.y = last_element_pos.y;
        }
        if (pushY)
        {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 20.0f;
            offset_y = pos.y - menu_pos.y;
        }
        bool isHovered = MouseInZone(fvector2d{ pos.x, pos.y }, size);

        if (isHovered || checkbox_enabled[elements_count])
        {
            drawFilledRect(fvector2d{ pos.x, pos.y }, size.x, size.y, RGBtoFLC(5, 5, 5));
            drawFilledRect(fvector2d{ pos.x + 1, pos.y + 1 }, size.x - 2, size.y - 2, RGBtoFLC(4, 4, 4));
            hover_element = true;
        }
        else
        {
            drawFilledRect(fvector2d{ pos.x, pos.y }, size.x, size.y, RGBtoFLC(5, 5, 5));
            drawFilledRect(fvector2d{ pos.x + 1, pos.y + 1 }, size.x - 2, size.y - 2, RGBtoFLC(3, 3, 3));
        }

        if (!sameLine)
            offset_y += size.y + padding.y;

        fvector2d textPos = fvector2d{ pos.x - 2.0f, pos.y - size.y + 2.0f };
        canvas->k2_drawtext(menu::font, name, textPos, fvector2d(0.99, 0.99), RGBtoFLC(255, 255, 255), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), false, false, true, Colors::Text_Outline);
        canvas->k2_drawtext(menu::font, s2wc("v"), fvector2d{ pos.x + size.x - 18, pos.y - 2 + size.y / 2 }, fvector2d(1.2, 0.96), RGBtoFLC(255, 255, 255), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), false, true, false, Colors::Text_Outline);

        bool isHovered2 = false;
        fvector2d element_pos = pos;

        if (checkbox_enabled[elements_count])
        {
            current_element_size.x = element_pos.x - 5.0f;
            current_element_size.y = element_pos.y - 5.0f;
        }

        for (int num = 0; num < items.size(); num++)
        {
            const wchar_t* arg = items[num];
            if (num == *value)
            {
                fvector2d _textPos = fvector2d{ pos.x + 5, pos.y + size.y / 2 };
                canvas->k2_drawtext(menu::font, arg, _textPos, fvector2d(0.98, 0.98), RGBtoFLC(130, 130, 130), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), false, true, true, Colors::Text_Outline);
            }

            if (checkbox_enabled[elements_count])
            {
                element_pos.y += 25.0f;
                isHovered2 = MouseInZone(fvector2d{ element_pos.x, element_pos.y }, fvector2d{ size.x, 25.0f });

                if (isHovered2)
                {
                    hover_element = true;
                    PostRenderer::drawFilledRect(fvector2d{ element_pos.x, element_pos.y }, size.x, 25.0f, RGBtoFLC(4, 4, 4));

                    if (inpute::is_mouse_clicked(0, elements_count, false))
                    {
                        *value = num;
                        checkbox_enabled[elements_count] = false;
                    }
                }
                else
                {
                    PostRenderer::drawFilledRect(fvector2d{ element_pos.x, element_pos.y }, size.x, 25.0f, RGBtoFLC(3, 3, 3));
                }

                PostRenderer::TextLeft(arg, fvector2d{ element_pos.x + 10.0f, element_pos.y + 5.0f }, RGBtoFLC(110, 110, 110), true);
            }
        }

        if (checkbox_enabled[elements_count])
        {
            current_element_size.x = element_pos.x + 5.0f;
            current_element_size.y = element_pos.y + 5.0f;
        }

        sameLine = false;
        last_element_pos = pos;
        last_element_size = size;
        if (first_element_pos.x == 0.0f)
            first_element_pos = pos;

        if (isHovered && inpute::is_mouse_clicked(0, elements_count, false))
        {
            checkbox_enabled[elements_count] = !checkbox_enabled[elements_count];
        }
        if (!isHovered && !isHovered2 && inpute::is_mouse_clicked(0, elements_count, false))
        {
            checkbox_enabled[elements_count] = false;
        }
    }


    void ShowSkinCombobox(const wchar_t* name, fvector2d size, int* selectedSkin, const std::vector<SkinData>& skinData)
    {
        // Collect the skin display names in a vector of const wchar_t*
        std::vector<const wchar_t*> skinNames;
        for (const auto& skin : skinData)
        {
            skinNames.push_back(skin.SkinName);
        }

        // Pass the skin names to your Combobox function
        Combobox2(name, size, selectedSkin, skinNames);
    }

    void SliderFloat(const wchar_t* name, float* value, float min, float max, const char* format = "%.0f")
    {
        elements_count++;
        fvector2d size = fvector2d{ 10, 10 };
        fvector2d slider_size = fvector2d{ 125, 10 };
        fvector2d adjust_zone = fvector2d{ 0, 10 };
        fvector2d padding = fvector2d{ 10, 6 };
        fvector2d pos = fvector2d{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };
        if (sameLine)
        {
            pos.x = last_element_pos.x + last_element_size.x + padding.x;
            pos.y = last_element_pos.y;
        }
        if (pushY)
        {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 0.0f;
            offset_y = pos.y - menu_pos.y;
        }
        bool isHovered = MouseInZone(fvector2d{ pos.x, pos.y + slider_size.y + padding.y - adjust_zone.y }, fvector2d{ slider_size.x, slider_size.y + adjust_zone.y * 1.5f });

        if (!sameLine)
            offset_y += size.y + padding.y;

        //Bg
        if (isHovered || current_element == elements_count)
        {
            //Drag
            if (inpute::is_mouse_clicked(0, elements_count, true))
            {
                current_element = elements_count;

                fvector2d cursorPos = CursorPos();
                *value = ((cursorPos.x - pos.x) * ((max - min) / slider_size.x)) + min;
                if (*value < min) *value = min;
                if (*value > max) *value = max;
            }

            drawFilledRect(fvector2d{ pos.x, pos.y + slider_size.y + padding.y }, slider_size.x, slider_size.y, RGBtoFLC(10, 10, 9));
            drawFilledRect(fvector2d{ pos.x + 1, pos.y + slider_size.y + padding.y + 1 }, slider_size.x - 2, slider_size.y - 2, RGBtoFLC(6, 6, 6));

            hover_element = true;
        }
        else
        {
            drawFilledRect(fvector2d{ pos.x, pos.y + slider_size.y + padding.y }, slider_size.x, slider_size.y, RGBtoFLC(10, 10, 9));
            drawFilledRect(fvector2d{ pos.x + 1, pos.y + slider_size.y + padding.y + 1 }, slider_size.x - 2, slider_size.y - 2, RGBtoFLC(4, 4, 4));
        }

        fvector2d textPos = fvector2d{ pos.x, pos.y - 2.0f };
        canvas->k2_drawtext(font, name, textPos, fvector2d(0.9, 0.9), RGBtoFLC(90, 90, 90), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), false, false, false, Colors::Text_Shadow);

        float oneP = slider_size.x / (max - min);
        drawGradientFilledRect(fvector2d{ pos.x + 1, pos.y + slider_size.y + padding.y + 1 }, oneP * (*value - min) - 2, slider_size.y - 2, RGBtoFLC(220 / 4, 0, 0), RGBtoFLC(220 / 2, 0, 0), RGBtoFLC(220, 0, 0), 100);

        char buffer[32];
        sprintf_s(buffer, format, *value);
        canvas->k2_drawtext(font, s2wc(buffer), fvector2d(pos.x + slider_size.x - 16.0f, pos.y - 0.1f), fvector2d(0.9, 0.9), RGBtoFLC(90, 90, 90), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), true, false, false, Colors::Text_Outline);

        sameLine = false;
        last_element_pos = pos;
        last_element_size = size;
        if (first_element_pos.x == 0.0f)
            first_element_pos = pos;
    }

    int active_hotkey = -1;
    bool already_pressed = false;
    std::string VirtualKeyCodeToString(UCHAR virtualKey)
    {
        UINT scanCode = MapVirtualKey(virtualKey, MAPVK_VK_TO_VSC);
        if (virtualKey == VK_LBUTTON)
        {
            return ("MOUSE0");
        }
        if (virtualKey == VK_RBUTTON)
        {
            return ("MOUSE1");
        }
        if (virtualKey == VK_MBUTTON)
        {
            return ("MBUTTON");
        }
        if (virtualKey == VK_XBUTTON1)
        {
            return ("XBUTTON1");
        }
        if (virtualKey == VK_XBUTTON2)
        {
            return ("XBUTTON2");
        }


        CHAR szName[128];
        int result = 0;
        switch (virtualKey)
        {
        case VK_LEFT: case VK_UP: case VK_RIGHT: case VK_DOWN:
        case VK_RCONTROL: case VK_RMENU:
        case VK_LWIN: case VK_RWIN: case VK_APPS:
        case VK_PRIOR: case VK_NEXT:
        case VK_END: case VK_HOME:
        case VK_INSERT: case VK_DELETE:
        case VK_DIVIDE:
        case VK_NUMLOCK:
            scanCode |= KF_EXTENDED;
        default:
            result = GetKeyNameTextA(scanCode << 16, szName, 128);
        }

        return szName;
    }

    void Hotkey(const char* label, fvector2d size, int* key)
    {
        elements_count++;
        fvector2d padding = fvector2d{ 5, 5 };
        fvector2d pos = fvector2d{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };

        if (sameLine)
        {
            pos.x = last_element_pos.x + last_element_size.x + padding.x;
            pos.y = last_element_pos.y - padding.y;
        }

        if (pushY)
        {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 0.0f;
            offset_y = pos.y - menu_pos.y;
        }

        bool isHovered = MouseInZone(fvector2d{ pos.x, pos.y }, size);

        // Dibujar el fondo del hotkey
        drawFilledRect(fvector2d{ pos.x, pos.y }, size.x, size.y, RGBtoFLC(10, 10, 10));
        drawFilledRect(fvector2d{ pos.x + 1, pos.y + 1 }, size.x - 2, size.y - 2, RGBtoFLC(2, 2, 2));

        if (!sameLine)
            offset_y += size.y + padding.y;

        // Posición del texto (centrado)
        fvector2d textPos = fvector2d{ pos.x + size.x / 2, pos.y + size.y / 2 };

        if (active_hotkey == elements_count)
        {
            // Modo edición - mostrar "..."
            canvas->k2_drawtext(font, L"...", textPos, fvector2d(0.9, 0.9), RGBtoFLC(60, 60, 60), 0.0f,
                Colors::Text_Shadow, fvector2d(0, 0), true, true, true, Colors::Text_Outline);

            if (!inpute::is_any_mouse_down())
            {
                already_pressed = false;
            }

            if (!already_pressed)
            {
                for (int code = 0; code < 255; code++)
                {
                    if (GetAsyncKeyState(code))
                    {
                        *key = code;
                        active_hotkey = -1;
                    }
                }
            }
        }
        else
        {
            // Modo normal - mostrar label o tecla actual
            std::wstring displayText;

            if (*key == 0)
            {
                displayText = s2wc(label); // Mostrar el nombre descriptivo ("Trigger")
            }
            else
            {
                displayText = s2wc(VirtualKeyCodeToString(*key).c_str()); // Mostrar la tecla actual
            }

            canvas->k2_drawtext(font, displayText.c_str(), textPos, fvector2d(0.99, 0.99),
                RGBtoFLC(60, 60, 60), 0.0f, Colors::Text_Shadow,
                fvector2d(0, 0), true, true, true, Colors::Text_Outline);

            if (isHovered)
            {
                if (inpute::is_mouse_clicked(0, elements_count, false))
                {
                    already_pressed = true;
                    active_hotkey = elements_count;

                    // Queue Fix
                    for (int code = 0; code < 255; code++)
                        if (GetAsyncKeyState(code)) {}
                }
            }
            else
            {
                if (inpute::is_mouse_clicked(0, elements_count, false))
                {
                    active_hotkey = -1;
                }
            }
        }

        sameLine = false;
        last_element_pos = pos;
        last_element_size = size;
        if (first_element_pos.x == 0.0f)
            first_element_pos = pos;
    }

    bool draw_color_picker(ucanvas* canvas, uobject* font, const wchar_t* label, flinearcolor& color, fvector2d pos, fvector2d mouse_pos, bool mouse_clicked) {
        const float hue_slider_width = 100.0f;
        const float hue_slider_height = 7.0f;
        const float sb_picker_size = 75.0f;
        const float alpha_slider_width = hue_slider_width;
        const float alpha_slider_height = 7.0f;
        const float preview_box_size = 15.0f;
        const float spacing = 5.0f;

        static bool hue_dragging = false;
        static bool sb_dragging = false;
        static bool alpha_dragging = false;

        static float hue = 0.0f;
        static float saturation = 1.0f;
        static float brightness = 1.0f;

        float thickness = 2.0f; // grosor del texto
        float width_scale = 1.0f; // escala de anchura
        float height_scale = 0.8f; // escala de altura
        float text_scale = 1.1f; // escala del tamaÃ±o de la fuente

        bool value_changed = false;

        for (int i = 0; i < hue_slider_width; i++) {
            float h = (float)i / hue_slider_width;
            flinearcolor color_at_hue = HSVtoRGB(h, 1.0f, 1.0f);
            menu::drawFilledRectOn(canvas, pos.x + i, pos.y, 1.0f, hue_slider_height, color_at_hue); // raya arriba
        }
        menu::drawRect(canvas, pos.x, pos.y, hue_slider_width, hue_slider_height, RGBtoFLC(5, 5, 5));

        if (mouse_clicked && mouse_pos.x >= pos.x && mouse_pos.x <= pos.x + hue_slider_width &&
            mouse_pos.y >= pos.y && mouse_pos.y <= pos.y + hue_slider_height) {
            hue_dragging = true;
        }
        if (hue_dragging) {
            if (mouse_clicked) {
                hue = (mouse_pos.x - pos.x) / hue_slider_width;
                hue = std::clamp(hue, 0.0f, 1.0f);
                value_changed = true;
            }
            else {
                hue_dragging = false;
            }
        }

        fvector2d sb_pos = { pos.x, pos.y + hue_slider_height + spacing };

        for (int y = 0; y < sb_picker_size; y++) {
            for (int x = 0; x < sb_picker_size; x++) {
                float s = (float)x / sb_picker_size;
                float b = 1.0f - (float)y / sb_picker_size;
                flinearcolor sb_color = HSVtoRGB(hue, s, b);
                menu::drawFilledRectOn(canvas, sb_pos.x + x, sb_pos.y + y, 1.0f, 1.0f, sb_color);
            }
        }
        menu::drawRect(canvas, sb_pos.x, sb_pos.y, sb_picker_size, sb_picker_size, RGBtoFLC(5, 5, 5));

        if (mouse_clicked && mouse_pos.x >= sb_pos.x && mouse_pos.x <= sb_pos.x + sb_picker_size &&
            mouse_pos.y >= sb_pos.y && mouse_pos.y <= sb_pos.y + sb_picker_size) {
            sb_dragging = true;
        }
        if (sb_dragging) {
            if (mouse_clicked) {
                saturation = (mouse_pos.x - sb_pos.x) / sb_picker_size;
                brightness = 1.0f - (mouse_pos.y - sb_pos.y) / sb_picker_size;
                saturation = std::clamp(saturation, 0.0f, 1.0f);
                brightness = std::clamp(brightness, 0.0f, 1.0f);
                value_changed = true;
            }
            else {
                sb_dragging = false;
            }
        }

        fvector2d alpha_pos = { pos.x, sb_pos.y + sb_picker_size + spacing };

        for (int i = 0; i < alpha_slider_width; i++) {
            float alpha = (float)i / alpha_slider_width;
            flinearcolor alpha_color = HSVtoRGB(hue, saturation, brightness);
            alpha_color.a = alpha;
            menu::drawFilledRectOn(canvas, alpha_pos.x + i, alpha_pos.y, 1.0f, alpha_slider_height, alpha_color);
        }
        menu::drawRect(canvas, alpha_pos.x, alpha_pos.y, alpha_slider_width, alpha_slider_height, RGBtoFLC(5, 5, 5));

        if (mouse_clicked && mouse_pos.x >= alpha_pos.x && mouse_pos.x <= alpha_pos.x + alpha_slider_width &&
            mouse_pos.y >= alpha_pos.y && mouse_pos.y <= alpha_pos.y + alpha_slider_height) {
            alpha_dragging = true;
        }
        if (alpha_dragging) {
            if (mouse_clicked) {
                color.a = (mouse_pos.x - alpha_pos.x) / alpha_slider_width;
                color.a = std::clamp(color.a, 0.0f, 1.0f);
                value_changed = true;
            }
            else {
                alpha_dragging = false;
            }
        }

        flinearcolor final_color = HSVtoRGB(hue, saturation, brightness);
        color.r = final_color.r;
        color.g = final_color.g;
        color.b = final_color.b;

        fvector2d preview_pos = { pos.x + hue_slider_width + spacing, pos.y };
        menu::drawFilledRectOn(canvas, preview_pos.x, preview_pos.y, preview_box_size, preview_box_size, { color.r, color.g, color.b, color.a });
        menu::drawRect(canvas, preview_pos.x, preview_pos.y, preview_box_size, preview_box_size, RGBtoFLC(5, 5, 5));

        return value_changed;
    }

    // END
    void Text(const wchar_t* text, bool center = false, bool outline = false)
    {
        elements_count++;

        float size = 24;
        fvector2d padding = fvector2d{ 1,3 };
        fvector2d pos = fvector2d{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };
        if (sameLine)
        {
            pos.x = last_element_pos.x + last_element_size.x + padding.x;
            pos.y = last_element_pos.y;
        }
        if (pushY)
        {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 0.0f;
            offset_y = pos.y - menu_pos.y;
        }

        if (!sameLine)
            offset_y += size + padding.y;

        //Text
        fvector2d textPos = fvector2d{ pos.x + 5.0f, pos.y };
        if (center)
            TextCenter(text, textPos, Colors::Text_Shadow, outline);
        else
            TextLeft(text, textPos, Colors::Text_Shadow, outline);

        sameLine = false;
        last_element_pos = pos;
        //last_element_size = size;
        if (first_element_pos.x == 0.0f)
            first_element_pos = pos;
    }
    bool Button(const wchar_t* name, fvector2d size)
    {
        elements_count++;

        fvector2d padding = fvector2d{ 15, 15 };
        fvector2d pos = fvector2d{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };
        if (sameLine)
        {
            pos.x = last_element_pos.x + last_element_size.x + padding.x;
            pos.y = last_element_pos.y;
        }
        if (pushY)
        {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 0.0f;
            offset_y = pos.y - menu_pos.y;
        }
        bool isHovered = MouseInZone(fvector2d{ pos.x, pos.y }, size);

        drawFilledRect(fvector2d{ pos.x, pos.y }, size.x, size.y, RGBtoFLC(7, 7, 7));

        //Bg
        if (isHovered)
        {
            drawFilledRect(fvector2d{ pos.x + 1, pos.y + 1 }, size.x - 2, size.y - 2, RGBtoFLC(3, 3, 3));
            hover_element = true;
        }
        else
        {
            drawFilledRect(fvector2d{ pos.x + 1, pos.y + 1 }, size.x - 2, size.y - 2, RGBtoFLC(2, 2, 2));
        }

        if (!sameLine)
            offset_y += size.y + padding.y;

        //Text
        fvector2d textPos = fvector2d{ pos.x + size.x / 2, pos.y + size.y / 2 };
        canvas->k2_drawtext(font, name, textPos, fvector2d(1.05, 0.99), RGBtoFLC(160, 160, 160), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), true, true, false, Colors::Text_Outline);


        sameLine = false;
        last_element_pos = pos;
        last_element_size = size;
        if (first_element_pos.x == 0.0f)
            first_element_pos = pos;

        if (isHovered && inpute::is_mouse_clicked(0, elements_count, false))
            return true;

        return false;
    }
    void SliderInt(const wchar_t* name, int* value, int min, int max)
    {
        elements_count++;
        fvector2d size = fvector2d{ 10, 10 };
        fvector2d slider_size = fvector2d{ 125, 10 };
        fvector2d adjust_zone = fvector2d{ 0, 10 };
        fvector2d padding = fvector2d{ 10, 6 };
        fvector2d pos = fvector2d{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };

        if (sameLine)
        {
            pos.x = last_element_pos.x + last_element_size.x + padding.x;
            pos.y = last_element_pos.y;
        }
        if (pushY)
        {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 0.0f;
            offset_y = pos.y - menu_pos.y;
        }

        bool isHovered = MouseInZone(fvector2d{ pos.x, pos.y + slider_size.y + padding.y - adjust_zone.y }, fvector2d{ slider_size.x, slider_size.y + adjust_zone.y * 1.5f });

        if (!sameLine)
            offset_y += size.y + padding.y;

        if (isHovered || current_element == elements_count)
        {
            if (inpute::is_mouse_clicked(0, elements_count, true))
            {
                current_element = elements_count;

                fvector2d cursorPos = CursorPos();
                int newVal = ((cursorPos.x - pos.x) * ((max - min) / slider_size.x)) + min;
                *value = std::clamp(newVal, min, max);
            }


            drawFilledRect(fvector2d{ pos.x, pos.y + slider_size.y + padding.y }, slider_size.x, slider_size.y, RGBtoFLC(10, 10, 9));
            drawFilledRect(fvector2d{ pos.x + 1, pos.y + slider_size.y + padding.y + 1 }, slider_size.x - 2, slider_size.y - 2, RGBtoFLC(6, 6, 6));
            hover_element = true;
        }
        else
        {
            drawFilledRect(fvector2d{ pos.x, pos.y + slider_size.y + padding.y }, slider_size.x, slider_size.y, RGBtoFLC(10, 10, 9));
            drawFilledRect(fvector2d{ pos.x + 1, pos.y + slider_size.y + padding.y + 1 }, slider_size.x - 2, slider_size.y - 2, RGBtoFLC(4, 4, 4));
        }

        fvector2d textPos = fvector2d{ pos.x, pos.y - 2.0f };
        canvas->k2_drawtext(font, name, textPos, fvector2d(0.9, 0.9), RGBtoFLC(90, 90, 90), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), false, false, false, Colors::Text_Shadow);

        float oneP = slider_size.x / (float)(max - min);
        drawGradientFilledRect(fvector2d{ pos.x + 1, pos.y + slider_size.y + padding.y + 1 }, oneP * (*value - min) - 2, slider_size.y - 2, RGBtoFLC(220 / 4, 0, 0), RGBtoFLC(220 / 2, 0, 0), RGBtoFLC(220, 0, 0), 100);
        char buffer[32];
        sprintf_s(buffer, "%d", *value);
        canvas->k2_drawtext(font, s2wc(buffer), fvector2d(pos.x + slider_size.x - 16.0f, pos.y - 0.1f), fvector2d(0.9, 0.9), RGBtoFLC(90, 90, 90), 0.0f, Colors::Text_Shadow, fvector2d(0, 0), true, false, false, Colors::Text_Outline);

        sameLine = false;
        last_element_pos = pos;
        last_element_size = size;
        if (first_element_pos.x == 0.0f)
            first_element_pos = pos;
    }


    int active_picker = -1;
    flinearcolor saved_color;
    bool ColorPixel(fvector2d pos, fvector2d size, flinearcolor* original, flinearcolor color)
    {
        PostRenderer::drawFilledRect(fvector2d{ pos.x, pos.y }, size.x, size.y, color);

        //Выбранный цвет
        if (original->r == color.r && original->g == color.g && original->b == color.b)
        {
            PostRenderer::Draw_Line(fvector2d{ pos.x, pos.y }, fvector2d{ pos.x + size.x - 1, pos.y }, 1.0f, flinearcolor{ 0.0f, 0.0f, 0.0f, 1.0f });
            PostRenderer::Draw_Line(fvector2d{ pos.x, pos.y + size.y - 1 }, fvector2d{ pos.x + size.x - 1, pos.y + size.y - 1 }, 1.0f, flinearcolor{ 0.0f, 0.0f, 0.0f, 1.0f });
            PostRenderer::Draw_Line(fvector2d{ pos.x, pos.y }, fvector2d{ pos.x, pos.y + size.y - 1 }, 1.0f, flinearcolor{ 0.0f, 0.0f, 0.0f, 1.0f });
            PostRenderer::Draw_Line(fvector2d{ pos.x + size.x - 1, pos.y }, fvector2d{ pos.x + size.x - 1, pos.y + size.y - 1 }, 1.0f, flinearcolor{ 0.0f, 0.0f, 0.0f, 1.0f });
        }

        //Смена цвета
        bool isHovered = MouseInZone(fvector2d{ pos.x, pos.y }, size);
        if (isHovered)
        {
            if (inpute::is_mouse_clicked(0, elements_count, false))
                *original = color;
        }

        return true;
    }
    void ColorPicker(const wchar_t* name, flinearcolor* color)
    {
        elements_count++;

        float size = 15;
        float xsize = 5;
        fvector2d padding = fvector2d{ 15, 10 };
        fvector2d pos = fvector2d{ menu_pos.x + padding.x + offset_x, menu_pos.y + padding.y + offset_y };
        if (sameLine)
        {
            pos.x = last_element_pos.x + last_element_size.x + padding.x;
            pos.y = last_element_pos.y;
        }
        if (pushY)
        {
            pos.y = pushYvalue;
            pushY = false;
            pushYvalue = 0.0f;
            offset_y = pos.y - menu_pos.y;
        }
        bool isHovered = MouseInZone(fvector2d{ pos.x, pos.y }, fvector2d{ size, size });

        if (!sameLine)
            offset_y += size + padding.y;

        if (active_picker == elements_count)
        {
            hover_element = true;

            float sizePickerX = 250;
            float sizePickerY = 250;
            bool isHoveredPicker = MouseInZone(fvector2d{ pos.x, pos.y }, fvector2d{ sizePickerX, sizePickerY - 60 });

            //Background
            PostRenderer::drawFilledRect(fvector2d{ pos.x, pos.y }, sizePickerX, sizePickerY - 65, Colors::ColorPicker_Background);

            fvector2d pixelSize = fvector2d{ sizePickerX / 12, sizePickerY / 12 };

            //0
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 0, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 174 / 255.f, 235 / 255.f, 253 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 0, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 136 / 255.f, 225 / 255.f, 251 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 0, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 108 / 255.f, 213 / 255.f, 250 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 0, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 89 / 255.f, 175 / 255.f, 213 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 0, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 76 / 255.f, 151 / 255.f, 177 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 0, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 60 / 255.f, 118 / 255.f, 140 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 0, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 43 / 255.f, 85 / 255.f, 100 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 0, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 32 / 255.f, 62 / 255.f, 74 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 0, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 255 / 255.f, 255 / 255.f, 255 / 255.f, 1.0f });
            }
            //1
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 1, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 175 / 255.f, 205 / 255.f, 252 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 1, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 132 / 255.f, 179 / 255.f, 252 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 1, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 90 / 255.f, 152 / 255.f, 250 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 1, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 55 / 255.f, 120 / 255.f, 250 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 1, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 49 / 255.f, 105 / 255.f, 209 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 1, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 38 / 255.f, 83 / 255.f, 165 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 1, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 28 / 255.f, 61 / 255.f, 120 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 1, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 20 / 255.f, 43 / 255.f, 86 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 1, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 247 / 255.f, 247 / 255.f, 247 / 255.f, 1.0f });
            }
            //2
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 2, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 153 / 255.f, 139 / 255.f, 250 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 2, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 101 / 255.f, 79 / 255.f, 249 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 2, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 64 / 255.f, 50 / 255.f, 230 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 2, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 54 / 255.f, 38 / 255.f, 175 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 2, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 39 / 255.f, 31 / 255.f, 144 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 2, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 32 / 255.f, 25 / 255.f, 116 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 2, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 21 / 255.f, 18 / 255.f, 82 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 2, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 16 / 255.f, 13 / 255.f, 61 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 2, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 228 / 255.f, 228 / 255.f, 228 / 255.f, 1.0f });
            }
            //3
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 3, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 194 / 255.f, 144 / 255.f, 251 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 3, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 165 / 255.f, 87 / 255.f, 249 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 3, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 142 / 255.f, 57 / 255.f, 239 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 3, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 116 / 255.f, 45 / 255.f, 184 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 3, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 92 / 255.f, 37 / 255.f, 154 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 3, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 73 / 255.f, 29 / 255.f, 121 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 3, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 53 / 255.f, 21 / 255.f, 88 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 3, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 37 / 255.f, 15 / 255.f, 63 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 3, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 203 / 255.f, 203 / 255.f, 203 / 255.f, 1.0f });
            }
            //4
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 4, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 224 / 255.f, 162 / 255.f, 197 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 4, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 210 / 255.f, 112 / 255.f, 166 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 4, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 199 / 255.f, 62 / 255.f, 135 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 4, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 159 / 255.f, 49 / 255.f, 105 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 4, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 132 / 255.f, 41 / 255.f, 89 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 4, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 104 / 255.f, 32 / 255.f, 71 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 4, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 75 / 255.f, 24 / 255.f, 51 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 4, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 54 / 255.f, 14 / 255.f, 36 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 4, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 175 / 255.f, 175 / 255.f, 175 / 255.f, 1.0f });
            }
            //5
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 5, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 235 / 255.f, 175 / 255.f, 176 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 5, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 227 / 255.f, 133 / 255.f, 135 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 5, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 219 / 255.f, 87 / 255.f, 88 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 5, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 215 / 255.f, 50 / 255.f, 36 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 5, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 187 / 255.f, 25 / 255.f, 7 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 5, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 149 / 255.f, 20 / 255.f, 6 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 5, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 107 / 255.f, 14 / 255.f, 4 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 5, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 77 / 255.f, 9 / 255.f, 3 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 5, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 144 / 255.f, 144 / 255.f, 144 / 255.f, 1.0f });
            }
            //6
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 6, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 241 / 255.f, 187 / 255.f, 171 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 6, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 234 / 255.f, 151 / 255.f, 126 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 6, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 229 / 255.f, 115 / 255.f, 76 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 6, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 227 / 255.f, 82 / 255.f, 24 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 6, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 190 / 255.f, 61 / 255.f, 15 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 6, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 150 / 255.f, 48 / 255.f, 12 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 6, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 107 / 255.f, 34 / 255.f, 8 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 6, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 79 / 255.f, 25 / 255.f, 6 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 6, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 113 / 255.f, 113 / 255.f, 113 / 255.f, 1.0f });
            }
            //7
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 7, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 245 / 255.f, 207 / 255.f, 169 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 7, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 240 / 255.f, 183 / 255.f, 122 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 7, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 236 / 255.f, 159 / 255.f, 74 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 7, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 234 / 255.f, 146 / 255.f, 37 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 7, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 193 / 255.f, 111 / 255.f, 28 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 7, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 152 / 255.f, 89 / 255.f, 22 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 7, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 110 / 255.f, 64 / 255.f, 16 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 7, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 80 / 255.f, 47 / 255.f, 12 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 7, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 82 / 255.f, 82 / 255.f, 82 / 255.f, 1.0f });
            }
            //8
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 8, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 247 / 255.f, 218 / 255.f, 170 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 8, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 244 / 255.f, 200 / 255.f, 124 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 8, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 241 / 255.f, 182 / 255.f, 77 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 8, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 239 / 255.f, 174 / 255.f, 44 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 8, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 196 / 255.f, 137 / 255.f, 34 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 8, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 154 / 255.f, 108 / 255.f, 27 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 8, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 111 / 255.f, 77 / 255.f, 19 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 8, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 80 / 255.f, 56 / 255.f, 14 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 8, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 54 / 255.f, 54 / 255.f, 54 / 255.f, 1.0f });
            }
            //9
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 9, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 254 / 255.f, 243 / 255.f, 187 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 9, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 253 / 255.f, 237 / 255.f, 153 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 9, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 253 / 255.f, 231 / 255.f, 117 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 9, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 254 / 255.f, 232 / 255.f, 85 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 9, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 242 / 255.f, 212 / 255.f, 53 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 9, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 192 / 255.f, 169 / 255.f, 42 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 9, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 138 / 255.f, 120 / 255.f, 30 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 9, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 101 / 255.f, 87 / 255.f, 22 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 9, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 29 / 255.f, 29 / 255.f, 29 / 255.f, 1.0f });
            }
            //10
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 10, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 247 / 255.f, 243 / 255.f, 185 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 10, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 243 / 255.f, 239 / 255.f, 148 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 10, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 239 / 255.f, 232 / 255.f, 111 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 10, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 235 / 255.f, 229 / 255.f, 76 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 10, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 208 / 255.f, 200 / 255.f, 55 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 10, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 164 / 255.f, 157 / 255.f, 43 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 10, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 118 / 255.f, 114 / 255.f, 31 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 10, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 86 / 255.f, 82 / 255.f, 21 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 10, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 9 / 255.f, 9 / 255.f, 9 / 255.f, 1.0f });
            }
            //11
            {
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 11, pos.y + pixelSize.y * 0 }, pixelSize, color, flinearcolor{ 218 / 255.f, 232 / 255.f, 182 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 11, pos.y + pixelSize.y * 1 }, pixelSize, color, flinearcolor{ 198 / 255.f, 221 / 255.f, 143 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 11, pos.y + pixelSize.y * 2 }, pixelSize, color, flinearcolor{ 181 / 255.f, 210 / 255.f, 103 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 11, pos.y + pixelSize.y * 3 }, pixelSize, color, flinearcolor{ 154 / 255.f, 186 / 255.f, 76 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 11, pos.y + pixelSize.y * 4 }, pixelSize, color, flinearcolor{ 130 / 255.f, 155 / 255.f, 64 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 11, pos.y + pixelSize.y * 5 }, pixelSize, color, flinearcolor{ 102 / 255.f, 121 / 255.f, 50 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 11, pos.y + pixelSize.y * 6 }, pixelSize, color, flinearcolor{ 74 / 255.f, 88 / 255.f, 36 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 11, pos.y + pixelSize.y * 7 }, pixelSize, color, flinearcolor{ 54 / 255.f, 64 / 255.f, 26 / 255.f, 1.0f });
                ColorPixel(fvector2d{ pos.x + pixelSize.x * 11, pos.y + pixelSize.y * 8 }, pixelSize, color, flinearcolor{ 0 / 255.f, 0 / 255.f, 0 / 255.f, 1.0f });
            }



            if (isHoveredPicker)
            {
                if (inpute::is_mouse_clicked(0, elements_count, false))
                {

                }
            }
            else
            {
                if (inpute::is_mouse_clicked(0, elements_count, false))
                {
                    active_picker = -1;
                    //hover_element = false;
                }
            }
        }
        else
        {
            //Bg
            if (isHovered)
            {
                drawFilledRect(fvector2d{ pos.x, pos.y }, size, size, Colors::Checkbox_Hovered);
                hover_element = true;
            }
            else
            {
                drawFilledRect(fvector2d{ pos.x, pos.y }, size, size, Colors::Checkbox_Idle);
            }

            //Color
            drawFilledRect(fvector2d{ pos.x + 4, pos.y + 4 }, size - 8, size - 8, *color);

            //Text
            fvector2d textPos = fvector2d{ pos.x + size + 5.0f, pos.y - xsize + 6.0f };
            TextLeft(name, textPos, flinearcolor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);

            if (isHovered && inpute::is_mouse_clicked(0, elements_count, false))
            {
                saved_color = *color;
                active_picker = elements_count;
            }
        }


        sameLine = false;
        last_element_pos = pos;
        //last_element_size = size;
        if (first_element_pos.x == 0.0f)
            first_element_pos = pos;
    }

    void Render()
    {
        for (int i = 0; i < 128; i++)
        {
            if (PostRenderer::drawlist[i].type != -1)
            {
                //Filled Rect
                if (PostRenderer::drawlist[i].type == 1)
                {
                    menu::drawFilledRect(PostRenderer::drawlist[i].pos, PostRenderer::drawlist[i].size.x, PostRenderer::drawlist[i].size.y, PostRenderer::drawlist[i].color);
                }
                //TextLeft
                else if (PostRenderer::drawlist[i].type == 2)
                {
                    canvas->k2_drawtext(font, (const wchar_t*)PostRenderer::drawlist[i].name, PostRenderer::drawlist[i].pos, fvector2d(0.98, 0.98), PostRenderer::drawlist[i].color, 0.0f, Colors::Text_Shadow, fvector2d(0, 0), false, false, PostRenderer::drawlist[i].outline, Colors::Text_Outline);
                }
                //TextCenter
                else if (PostRenderer::drawlist[i].type == 3)
                {
                    menu::TextCenter((const wchar_t*)PostRenderer::drawlist[i].name, PostRenderer::drawlist[i].pos, PostRenderer::drawlist[i].color, PostRenderer::drawlist[i].outline);
                }
                //Draw_Line
                else if (PostRenderer::drawlist[i].type == 4)
                {
                    Draw_Line(PostRenderer::drawlist[i].from, PostRenderer::drawlist[i].to, PostRenderer::drawlist[i].thickness, PostRenderer::drawlist[i].color);
                }

                PostRenderer::drawlist[i].type = -1;
            }
        }
    }
}

float AngleDiff(float a, float b) {
    float diff = fmod(b - a + 180.0f, 360.0f) - 180.0f;
    return diff < -180.0f ? diff + 360.0f : diff;
}
namespace resolver_math {
    __forceinline float AngleDiff(float a, float b) {
        float diff = fmod(b - a + 180.0f, 360.0f) - 180.0f;
        return diff < -180.0f ? diff + 360.0f : diff;
    }
    __forceinline float clamp(float value, float min_val, float max_val) {
        return value < min_val ? min_val : (value > max_val ? max_val : value);
    }
    __forceinline float lerp(float a, float b, float t) { return a + t * (b - a); }
}

template<typename T, size_t N>
struct UltimateCircularBuffer {
    std::array<T, N> data;
    size_t head = 0;
    size_t size = 0;

    __forceinline void push_back(const T& value) {
        data[head] = value;
        head = (head + 1) % N;
        size = (size < N) ? size + 1 : N;
    }

    __forceinline T& operator[](size_t index) { return data[(head + N - size + index) % N]; }
    __forceinline const T& operator[](size_t index) const { return data[(head + N - size + index) % N]; }
    __forceinline T& back() { return (*this)[size - 1]; }
    __forceinline T& front() { return (*this)[0]; }
    __forceinline bool empty() const { return size == 0; }
    __forceinline void clear() { size = 0; head = 0; }
};
struct UltimateResolverData {
    UltimateCircularBuffer<frotator, 48> rotation_history;
    UltimateCircularBuffer<fvector, 32> position_history;
    UltimateCircularBuffer<fvector, 24> velocity_history;
    UltimateCircularBuffer<float, 96> yaw_pattern;
    UltimateCircularBuffer<float, 96> pitch_pattern;

    UltimateCircularBuffer<float, 32> movement_angles;
    UltimateCircularBuffer<float, 32> acceleration_pattern;
    UltimateCircularBuffer<bool, 64> visibility_history;

    float base_yaw = 0.0f;
    float real_yaw = 0.0f;
    float fake_yaw = 0.0f;
    float pattern_frequency = 0.0f;
    float pattern_amplitude = 0.0f;
    float resolver_confidence = 1.0f;
    float last_successful_resolve = 0.0f;
    float desync_range = 58.0f;

    uint32_t pattern_analysis_ticks = 0;
    uint32_t shots_fired = 0;
    uint32_t shots_hit = 0;
    uint32_t resolver_updates = 0;

    int8_t pattern_type = 0;
    int8_t resolved_side = 0;
    int8_t last_resolved_side = 0;
    int8_t network_role = 0;

    bool was_moving : 1;
    bool requires_prediction : 1;
    bool is_desyncing : 1;
    bool was_visible : 1;
    bool brute_force_active : 1;
    bool adaptive_learning : 1;

    int8_t brute_force_step = 0;
    float brute_force_timer = 0.0f;
    std::array<bool, 8> attempted_sides = { false };

    fvector last_resolved_head_pos;
    fvector last_original_head_pos;
    fvector last_predicted_pos;
    float last_confidence = 0.0f;
    int last_pattern_type = 0;

    UltimateResolverData() : was_moving(false), requires_prediction(false),
        is_desyncing(false), was_visible(false), brute_force_active(false),
        adaptive_learning(true) {
    }
};
static std::array<UltimateResolverData, 64> ultimate_resolver_states;
static std::array<ashootercharacter*, 64> resolver_target_map;
static std::array<float, 64> resolver_confidence_cache;
static uint32_t resolver_frame_counter = 0;
static uint32_t last_cleanup_frame = 0;
class UltimateValorantResolver {
private:
    ashootercharacter* m_target;
    ashootercharacter* m_local;
    UltimateResolverData* m_data;
    uint32_t m_target_index;
    float m_current_time;
    float m_last_update_time;

    float m_position_variance = 0.0f;
    float m_movement_consistency = 0.0f;
    float m_pattern_entropy = 0.0f;
    float m_yaw_variance = 0.0f;
    float m_pitch_variance = 0.0f;

public:
    UltimateValorantResolver(ashootercharacter* target, ashootercharacter* local)
        : m_target(target), m_local(local), m_current_time(0.0f), m_last_update_time(0.0f) {
        m_target_index = FindOrCreateTargetIndex(target);
        m_data = &ultimate_resolver_states[m_target_index];
        m_current_time = GetTickCount64() * 0.001f;
        m_last_update_time = m_current_time;
        InitializeResolver();
    }

    ~UltimateValorantResolver() {}

    fvector ResolveHeadPosition(fvector current_head, fvector velocity) {
        if (!IsValidForResolution()) return current_head;

        float delta_time = m_current_time - m_last_update_time;
        m_current_time = GetTickCount64() * 0.001f;

        UpdateTargetData();

        AnalyzeMovementAdvanced();
        AnalyzePositionPatterns();
        AnalyzeRotationAdvanced();
        AnalyzeNetworkStateAdvanced();
        AnalyzeVisibilityPattern();
        AnalyzeStrafingPatterns();

        fvector resolved_position = ApplyPositionResolution(current_head, velocity);

        m_data->last_successful_resolve = m_current_time;
        m_data->resolver_updates++;
        m_last_update_time = m_current_time;

        return resolved_position;
    }

    void RegisterShotFired() {
        m_data->shots_fired++;
        UpdateConfidenceMetrics();
    }

    void RegisterShotHit() {
        m_data->shots_hit++;
        UpdateConfidenceMetrics();
        if (m_data->shots_hit > 5) {
            float hit_ratio = float(m_data->shots_hit) / float(m_data->shots_fired);
            m_data->resolver_confidence = min(1.0f, hit_ratio + 0.1f);
            if (hit_ratio > 0.8f) m_data->adaptive_learning = false;
        }
    }

    float GetConfidence() const { return m_data->resolver_confidence; }
    int GetPatternType() const { return m_data->pattern_type; }
    UltimateResolverData* GetResolverData() const { return m_data; }

    void UpdateVisualizationData(fvector original_head, fvector resolved_head) {
        m_data->last_original_head_pos = original_head;
        m_data->last_resolved_head_pos = resolved_head;
        m_data->last_confidence = m_data->resolver_confidence;
        m_data->last_pattern_type = m_data->pattern_type;
    }

private:
    uint32_t FindOrCreateTargetIndex(ashootercharacter* target) {
        for (uint32_t i = 0; i < 64; i++) {
            if (resolver_target_map[i] == target) {
                resolver_confidence_cache[i] = ultimate_resolver_states[i].resolver_confidence;
                return i;
            }
        }

        uint32_t oldest_index = resolver_frame_counter % 64;
        for (uint32_t i = 0; i < 64; i++) {
            if (resolver_target_map[i] == nullptr) {
                oldest_index = i;
                break;
            }
        }

        resolver_target_map[oldest_index] = target;
        ultimate_resolver_states[oldest_index] = UltimateResolverData();
        resolver_confidence_cache[oldest_index] = 1.0f;

        return oldest_index;
    }

    bool IsValidForResolution() const {
        if (!m_target || !m_local) return false;
        if (!m_target->is_alive() || !m_local->is_alive()) return false;

        fvector target_pos = m_target->k2_get_actor_location();
        fvector local_pos = m_local->k2_get_actor_location();
        float distance = (target_pos - local_pos).size();
        return distance > 0.0f && distance < 5000.0f;
    }

    void InitializeResolver() {
        m_data->brute_force_active = false;
        m_data->brute_force_step = 0;
        m_data->brute_force_timer = 0.0f;
        m_data->attempted_sides.fill(false);
    }

    void UpdateTargetData() {
        frotator current_rot = m_target->K2_GetActorRotation();
        fvector current_pos = m_target->k2_get_actor_location();
        fvector current_vel = m_target->get_velocity();

        m_data->rotation_history.push_back(current_rot);
        m_data->position_history.push_back(current_pos);
        m_data->velocity_history.push_back(current_vel);
        m_data->yaw_pattern.push_back(current_rot.yaw);
        m_data->pitch_pattern.push_back(current_rot.pitch);

        fvector head_pos = m_target->get_mesh()->get_bone_location(8);

        bool is_visible = true;
        m_data->visibility_history.push_back(is_visible);

        m_data->pattern_analysis_ticks++;
        resolver_frame_counter++;
    }

    void AnalyzeMovementAdvanced() {
        if (m_data->velocity_history.size < 3) return;

        fvector current_vel = m_data->velocity_history.back();
        fvector previous_vel = m_data->velocity_history[m_data->velocity_history.size - 2];
        float speed = current_vel.size();
        m_data->was_moving = (speed > 10.0f);
        m_data->requires_prediction = (speed > 2.0f);

        if (speed > 1.0f) {
            float movement_angle = atan2(current_vel.y, current_vel.x) * (180.0f / 3.14159265358979323846f);
            m_data->movement_angles.push_back(movement_angle);
        }
        AnalyzeMovementConsistency();
    }

    void AnalyzeMovementConsistency() {
        if (m_data->movement_angles.size < 4) return;

        float consistency = 0.0f;
        for (size_t i = 1; i < m_data->movement_angles.size; i++) {
            float diff = std::abs(AngleDiff(m_data->movement_angles[i], m_data->movement_angles[i - 1]));
            consistency += (1.0f - (diff / 180.0f));
        }
        m_movement_consistency = consistency / (m_data->movement_angles.size - 1);
    }

    void AnalyzeStrafingPatterns() {
        if (m_data->velocity_history.size < 8) return;

        int direction_changes = 0;
        fvector prev_dir = m_data->velocity_history[0];

        for (size_t i = 1; i < m_data->velocity_history.size; i++) {
            fvector current_dir = m_data->velocity_history[i];
            float dot = prev_dir.dot(current_dir) / (prev_dir.size() * current_dir.size());

            if (dot < -0.5f) {
                direction_changes++;
            }
            prev_dir = current_dir;
        }

        if (direction_changes > m_data->velocity_history.size / 3) {
            m_data->is_desyncing = true;
        }
    }

    void AnalyzeRotationAdvanced() {
        if (m_data->yaw_pattern.size < 8) return;

        CalculateYawStatistics();
        DetectPatternType();
        CalculatePatternMetrics();
        AnalyzeDesyncRange();
    }

    void CalculateYawStatistics() {
        float sum = 0.0f, sum_sq = 0.0f;
        float min_yaw = FLT_MAX, max_yaw = -FLT_MAX;
        for (size_t i = 0; i < m_data->yaw_pattern.size; i++) {
            float yaw = m_data->yaw_pattern[i];
            sum += yaw;
            sum_sq += yaw * yaw;
            min_yaw = min(min_yaw, yaw);
            max_yaw = max(max_yaw, yaw);
        }
        float mean = sum / m_data->yaw_pattern.size;
        m_yaw_variance = (sum_sq / m_data->yaw_pattern.size) - (mean * mean);
        m_data->pattern_amplitude = max_yaw - min_yaw;
        m_data->base_yaw = mean;
    }

    void DetectPatternType() {
        if (m_yaw_variance > 5000.0f) {
            m_data->pattern_type = 1; // Spin
        }
        else if (m_yaw_variance > 500.0f && m_data->pattern_amplitude < 180.0f) {
            m_data->pattern_type = 2; // Jitter
        }
        else if (m_yaw_variance > 100.0f && m_data->pattern_amplitude > 45.0f) {
            m_data->pattern_type = 3; // Desync
        }
        else if (m_yaw_variance < 50.0f && m_data->was_moving) {
            m_data->pattern_type = 4; // Static while moving
        }
        else {
            m_data->pattern_type = 0; // Legit
        }
    }

    void CalculatePatternMetrics() {
        if (m_data->yaw_pattern.size < 16) return;

        int best_lag = 1;
        float max_correlation = -1.0f;

        for (int lag = 1; lag <= 8; lag++) {
            float correlation = 0.0f;
            int count = 0;

            for (size_t i = lag; i < m_data->yaw_pattern.size; i++) {
                correlation += std::cos(AngleDiff(m_data->yaw_pattern[i], m_data->yaw_pattern[i - lag]) * (3.14159265358979323846f / 180.0f));
                count++;
            }

            if (count > 0) {
                correlation /= count;
                if (correlation > max_correlation) {
                    max_correlation = correlation;
                    best_lag = lag;
                }
            }
        }

        m_data->pattern_frequency = (best_lag > 0) ? (1.0f / best_lag) : 0.0f;
    }

    void AnalyzeDesyncRange() {
        if (m_data->yaw_pattern.size < 12) return;

        std::map<float, int> angle_counts;
        for (size_t i = 0; i < m_data->yaw_pattern.size; i++) {
            float rounded = std::round(m_data->yaw_pattern[i] / 5.0f) * 5.0f;
            angle_counts[rounded]++;
        }

        float primary_angle = 0.0f;
        int max_count = 0;
        for (const auto& pair : angle_counts) {
            if (pair.second > max_count) {
                max_count = pair.second;
                primary_angle = pair.first;
            }
        }

        float secondary_angle = 0.0f;
        int second_count = 0;
        for (const auto& pair : angle_counts) {
            if (pair.second > second_count && std::abs(pair.first - primary_angle) > 10.0f) {
                second_count = pair.second;
                secondary_angle = pair.first;
            }
        }

        m_data->desync_range = std::abs(AngleDiff(primary_angle, secondary_angle));
    }

    void AnalyzeNetworkStateAdvanced() {
        m_data->network_role = m_target->GetLocalRole();

        switch (m_data->network_role) {
        case 3: // SimProxy
            m_data->resolver_confidence *= 1.1f;
            break;
        case 2: // AutoProxy
            m_data->resolver_confidence *= 0.9f;
            break;
        default:
            m_data->resolver_confidence *= 0.8f;
            break;
        }

        m_data->resolver_confidence = std::clamp(m_data->resolver_confidence, 0.1f, 1.0f);
    }

    void AnalyzeVisibilityPattern() {
        if (m_data->visibility_history.size < 8) return;

        int visible_count = 0;
        for (size_t i = 0; i < m_data->visibility_history.size; i++) {
            if (m_data->visibility_history[i]) visible_count++;
        }

        float visibility_ratio = float(visible_count) / m_data->visibility_history.size;
        m_data->was_visible = (visibility_ratio > 0.7f);
    }

    void AnalyzePositionPatterns() {
        if (m_data->position_history.size < 8) return;

        CalculatePositionStatistics();
    }

    void CalculatePositionStatistics() {
        if (m_data->position_history.size < 8) return;

        fvector sum = fvector(0, 0, 0);
        fvector sum_sq = fvector(0, 0, 0);

        for (size_t i = 0; i < m_data->position_history.size; i++) {
            fvector pos = m_data->position_history[i];
            sum = sum + pos;
            sum_sq.x += pos.x * pos.x;
            sum_sq.y += pos.y * pos.y;
            sum_sq.z += pos.z * pos.z;
        }

        fvector mean = sum / float(m_data->position_history.size);
        m_position_variance = (sum_sq.x / m_data->position_history.size) - (mean.x * mean.x);
    }

    fvector ApplyPositionResolution(fvector current_head, fvector velocity) {
        switch (m_data->pattern_type) {
        case 1: return ResolveSpinAA(current_head, velocity);
        case 2: return ResolveJitterAA(current_head, velocity);
        case 3: return ResolveDesyncAA(current_head, velocity);
        case 4: return ResolveStaticAA(current_head, velocity);
        default: return ResolveLegitAA(current_head, velocity);
        }
    }

    fvector ResolveSpinAA(fvector head, fvector velocity) {
        const float prediction_time = 0.1f;
        fvector predicted = head + velocity * prediction_time;

        if (m_data->pattern_frequency > 0.1f) {
            float phase = fmod(m_current_time * m_data->pattern_frequency * 360.0f, 360.0f);
            float radius = m_data->desync_range * 0.5f;
            predicted.x += cos(phase * (3.14159265358979323846f / 180.0f)) * radius;
            predicted.y += sin(phase * (3.14159265358979323846f / 180.0f)) * radius;
        }

        return predicted;
    }

    fvector ResolveJitterAA(fvector head, fvector velocity) {
        if (m_data->position_history.size < 4) return head;

        std::vector<fvector> valid_positions;
        fvector mean = head;

        for (size_t i = 0; i < m_data->position_history.size; i++) {
            fvector pos = m_data->position_history[i];
            float distance = (pos - mean).size();
            if (distance < 50.0f) {
                valid_positions.push_back(pos);
            }
        }

        if (!valid_positions.empty()) {
            fvector sum = fvector(0, 0, 0);
            for (const fvector& pos : valid_positions) sum = sum + pos;
            return sum / float(valid_positions.size());
        }

        return head;
    }

    fvector ResolveDesyncAA(fvector head, fvector velocity) {
        float side_multiplier = DetermineOptimalSide();

        float position_offset = m_data->desync_range * 0.1f * side_multiplier;

        fvector right_vec = m_target->GetActorRightVector();
        fvector corrected = head + right_vec * position_offset;

        if (velocity.size() > 5.0f) {
            corrected = corrected + velocity * 0.05f;
        }

        return corrected;
    }

    fvector ResolveStaticAA(fvector head, fvector velocity) {
        if (m_data->was_moving && !m_data->movement_angles.empty()) {
            float movement_angle = m_data->movement_angles.back();
            float movement_rad = movement_angle * (3.14159265358979323846f / 180.0f);

            head.x += cos(movement_rad) * 5.0f;
            head.y += sin(movement_rad) * 5.0f;
        }
        return head;
    }

    fvector ResolveLegitAA(fvector head, fvector velocity) {
        if (velocity.size() > 2.0f) {
            return head + velocity * 0.05f;
        }
        return head;
    }

    float DetermineOptimalSide() {
        float movement_side = DetermineMovementSide();
        float history_side = DetermineHistoricalSide();
        return (movement_side * 0.7f) + (history_side * 0.3f);
    }

    float DetermineMovementSide() {
        if (m_data->velocity_history.empty()) return 0.0f;

        fvector velocity = m_data->velocity_history.back();
        if (velocity.size() < 5.0f) return 0.0f;

        fvector right_vec = m_target->GetActorRightVector();
        float dot = velocity.dot(right_vec) / velocity.size();
        return (dot > 0.0f) ? 1.0f : -1.0f;
    }

    float DetermineHistoricalSide() {
        if (m_data->resolved_side == 0) return 0.0f;
        return (m_data->resolved_side > 0) ? 1.0f : -1.0f;
    }

    void UpdateConfidenceMetrics() {
        if (m_data->shots_fired > 0) {
            float hit_ratio = float(m_data->shots_hit) / float(m_data->shots_fired);
            if (hit_ratio > 0.7f) m_data->resolver_confidence = min(1.0f, m_data->resolver_confidence + 0.05f);
            else if (hit_ratio < 0.3f) m_data->resolver_confidence = max(0.1f, m_data->resolver_confidence - 0.1f);
        }
    }
};
class ResolverVisualizer {
private:
    static float m_pulse_time;
    static float m_rainbow_hue;
    static float m_hitmarker_time;
    static uobject* m_font;

public:

    static void SetFont(uobject* font) {
        m_font = font;
    }

    static void DrawModernResolverInfo(ucanvas* canvas, aplayercontroller* controller,
        ashootercharacter* target, UltimateResolverData* resolver_data) {
        try {
            if (!canvas || !controller || !target || !resolver_data || !m_font) return;

            m_pulse_time += 0.02f;
            if (m_pulse_time > 6.28318530718f) m_pulse_time = 0.0f;

            m_rainbow_hue += 0.001f;
            if (m_rainbow_hue > 1.0f) m_rainbow_hue = 0.0f;

            if (m_hitmarker_time > 0.0f) {
                m_hitmarker_time -= 0.05f;
            }

            fvector2d original_screen, resolved_screen;
            bool original_visible = false;
            bool resolved_visible = false;

            try {
                original_visible = controller->project_world_location_to_screen(resolver_data->last_original_head_pos, original_screen, true);
                resolved_visible = controller->project_world_location_to_screen(resolver_data->last_resolved_head_pos, resolved_screen, true);
            }
            catch (...) {
                return;
            }

            if (original_visible && resolved_visible) {
                try {
                    DrawAdvanced3DVisualization(canvas, original_screen, resolved_screen, resolver_data);
                }
                catch (...) {}
            }

            try {
                DrawModernResolverHUD(canvas, resolver_data, original_screen);
            }
            catch (...) {}

            if (m_hitmarker_time > 0.0f && resolved_visible) {
                try {
                    DrawModernHitmarker(canvas, resolved_screen, resolver_data->last_confidence);
                }
                catch (...) {}
            }
        }
        catch (...) {}
    }

    static void RegisterHit() {
        try {
            m_hitmarker_time = 2.0f;
        }
        catch (...) {}
    }

private:
    static void DrawAdvanced3DVisualization(ucanvas* canvas, const fvector2d& original,
        const fvector2d& resolved, UltimateResolverData* data) {
        try {
            if (!canvas || !data) return;

            float pulse = (sin(m_pulse_time) + 1.0f) * 0.5f;
            flinearcolor high_conf_color = { 0.0f, 1.0f, 0.0f, 1.0f };
            flinearcolor low_conf_color = { 1.0f, 0.0f, 0.0f, 1.0f };
            flinearcolor confidence_color = LerpColor(low_conf_color, high_conf_color, data->last_confidence);

            if (data->last_confidence > 0.8f) {
                confidence_color = HueToRGB(m_rainbow_hue);
                confidence_color.a = 0.8f + pulse * 0.2f;
            }


            if (!data->velocity_history.empty() && data->velocity_history.back().size() > 10.0f) {
                DrawMovementSphere(canvas, resolved);
            }


            DrawSimpleMarker(canvas, original, { 1.0f, 1.0f, 1.0f, 0.8f });
            DrawSimpleMarker(canvas, resolved, confidence_color);
        }
        catch (...) {}
    }

    static void DrawModernResolverHUD(ucanvas* canvas, UltimateResolverData* data, const fvector2d& screen_pos) {
        try {
            if (!canvas || !data) return;

            fvector2d hud_pos = { screen_pos.x - 42.5f, screen_pos.y - 140.0f };

            DrawModernPanel(canvas, hud_pos, { 120.0f, 110.0f }, { 0.08f, 0.08f, 0.12f, 0.95f });

            flinearcolor header_color = HueToRGB(m_rainbow_hue);
            float panel_center_X = hud_pos.x + (120.0f / 2.0f);

            DrawTextSafe(canvas, L"RESOLVER", { panel_center_X - 6.0f, hud_pos.y + 5.0f }, header_color, 0.8f);
            canvas->k2_drawline({ hud_pos.x + 10.0f, hud_pos.y + 22.0f }, { hud_pos.x + 110.0f, hud_pos.y + 22.0f }, 1.2f, { 0.3f, 0.3f, 0.4f, 0.7f });

            DrawAdvancedProgressBar(canvas, { hud_pos.x + 10.0f, hud_pos.y + 28.0f }, 100.0f, data->last_confidence, L"CONFIDENCE");
            float velocity_progress = 0.0f;
            if (!data->velocity_history.empty()) {
                velocity_progress = resolver_math::clamp(data->velocity_history.back().size() / 500.0f, 0.0f, 1.0f);
            }

            DrawAdvancedProgressBar(canvas, { hud_pos.x + 10.0f, hud_pos.y + 43.0f }, 100.0f, velocity_progress, L"VELOCITY");
            float prediction_progress = data->pattern_frequency;

            DrawAdvancedProgressBar(canvas, { hud_pos.x + 10.0f, hud_pos.y + 58.0f }, 100.0f, prediction_progress, L"PREDICTION");
            std::wstring desync_text = L"DESYNC: " + std::to_wstring((int)data->desync_range) + L"°";

            DrawTextSafe(canvas, desync_text.c_str(), { hud_pos.x + 10.0f, hud_pos.y + 73.0f }, { 0.8f, 0.8f, 1.0f, 1.0f }, 0.5f);
            std::wstring pattern_text = GetPatternTypeName(data->last_pattern_type);

            DrawTextSafe(canvas, pattern_text.c_str(), { hud_pos.x + 70.0f, hud_pos.y + 73.0f }, { 1.0f, 1.0f, 1.0f, 1.0f }, 0.5f);
            std::wstring shots_text = L"SHOTS: " + std::to_wstring(data->shots_fired);

            DrawTextSafe(canvas, shots_text.c_str(), { hud_pos.x + 10.0f, hud_pos.y + 85.0f }, { 0.9f, 0.9f, 0.9f, 0.9f }, 0.45f);
            if (data->shots_fired > 0) {
                float hit_rate = (float)data->shots_hit / (float)data->shots_fired * 100.0f;
                std::wstring hit_text = L"HIT: " + std::to_wstring((int)hit_rate) + L"%";
                DrawTextSafe(canvas, hit_text.c_str(), { hud_pos.x + 70.0f, hud_pos.y + 85.0f }, { 0.7f, 1.0f, 0.7f, 0.9f }, 0.45f);
            }


            std::wstring state_text = data->resolver_confidence > 0.7f ? L"OPTIMAL" : L"LEARNING";
            flinearcolor state_color = data->resolver_confidence > 0.7f ? flinearcolor{ 0.2f, 0.8f, 0.2f, 0.9f } : flinearcolor{ 0.8f, 0.8f, 0.2f, 0.9f };
            DrawTextSafe(canvas, state_text.c_str(), { hud_pos.x + 10.0f, hud_pos.y + 97.0f }, state_color, 0.45f);
        }
        catch (...) {}
    }


    static void DrawMovementSphere(ucanvas* canvas, const fvector2d& center) {
        try {
            if (!canvas) return;

            float sphere_radius = 6.0f;
            flinearcolor sphere_color = { 1.0f, 1.0f, 1.0f, 0.7f };


            int segments = 8;
            for (int i = 0; i < segments; i++) {
                float angle1 = (i * 2 * 3.14159265358979323846f) / segments;
                float angle2 = ((i + 1) * 2 * 3.14159265358979323846f) / segments;

                fvector2d point1 = center + fvector2d(cos(angle1) * sphere_radius, sin(angle1) * sphere_radius);
                fvector2d point2 = center + fvector2d(cos(angle2) * sphere_radius, sin(angle2) * sphere_radius);

                canvas->k2_drawline(point1, point2, 1.5f, sphere_color);
            }
        }
        catch (...) {}
    }

    static void DrawSimpleMarker(ucanvas* canvas, const fvector2d& position, const flinearcolor& color) {
        try {
            if (!canvas) return;

            float size = 4.0f;
            canvas->k2_drawline({ position.x - size, position.y }, { position.x + size, position.y }, 1.5f, color);
            canvas->k2_drawline({ position.x, position.y - size }, { position.x, position.y + size }, 1.5f, color);
        }
        catch (...) {}
    }

    static void DrawAdvancedProgressBar(ucanvas* canvas, const fvector2d& position, float width,
        float progress, const wchar_t* label) {
        try {
            if (!canvas) return;

            // BACKGROUND
            fvector2d bg_start = position;
            fvector2d bg_end = fvector2d(position.x + width, position.y);
            canvas->k2_drawline(bg_start, bg_end, 4.0f, flinearcolor(0.2f, 0.2f, 0.2f, 0.9f));

            // PROGRESS
            flinearcolor progress_color;
            if (progress < 0.3f) progress_color = flinearcolor(1.0f, 0.0f, 0.0f, 0.9f);
            else if (progress < 0.7f) progress_color = flinearcolor(1.0f, 1.0f, 0.0f, 0.9f);
            else progress_color = flinearcolor(0.0f, 1.0f, 0.0f, 0.9f);

            fvector2d progress_end = fvector2d(position.x + width * progress, position.y);
            canvas->k2_drawline(position, progress_end, 4.0f, progress_color);

            // LABEL
            std::wstring progress_text = std::to_wstring(int(progress * 100)) + L"%";

            // LABEL YAZISI
            DrawTextSafe(canvas, label, fvector2d(position.x, position.y - 8.0f), flinearcolor(1.0f, 1.0f, 1.0f, 1.0f), 0.5f);

            // YÜZDE DEĞERİ
            DrawTextSafe(canvas, progress_text.c_str(), fvector2d(position.x + width + 2.0f, position.y - 8.0f), flinearcolor(1.0f, 1.0f, 1.0f, 1.0f), 0.5f);
        }
        catch (...) {}
    }

    static void DrawModernPanel(ucanvas* canvas, const fvector2d& position, const fvector2d& size,
        const flinearcolor& color) {
        try {
            if (!canvas) return;

            fvector2d points[4] = {
                position,
                {position.x + size.x, position.y},
                {position.x + size.x, position.y + size.y},
                {position.x, position.y + size.y}
            };

            // DAHA KALIN ÇERÇEVE
            for (int i = 0; i < 4; i++) {
                int next = (i + 1) % 4;
                canvas->k2_drawline(points[i], points[next], 1.5f, color);
            }

            // DAHA BELİRGİN GRADIENT BORDER
            flinearcolor top_border_color = { 0.4f, 0.6f, 0.9f, 0.7f };
            canvas->k2_drawline(points[0], points[1], 1.2f, top_border_color);
        }
        catch (...) {}
    }

    static void DrawModernHitmarker(ucanvas* canvas, const fvector2d& position, float confidence) {
        try {
            if (!canvas) return;

            float hitmarker_size = 8.0f + m_hitmarker_time * 3.0f;
            float pulse = (sin(m_hitmarker_time * 10.0f) + 1.0f) * 0.5f;

            flinearcolor hitmarker_color = { 1.0f, 1.0f, 0.0f, 0.8f * pulse };

            canvas->k2_drawline({ position.x - hitmarker_size, position.y }, { position.x - 2.0f, position.y }, 2.0f, hitmarker_color);
            canvas->k2_drawline({ position.x + hitmarker_size, position.y }, { position.x + 2.0f, position.y }, 2.0f, hitmarker_color);
            canvas->k2_drawline({ position.x, position.y - hitmarker_size }, { position.x, position.y - 2.0f }, 2.0f, hitmarker_color);
            canvas->k2_drawline({ position.x, position.y + hitmarker_size }, { position.x, position.y + 2.0f }, 2.0f, hitmarker_color);
        }
        catch (...) {}
    }

    static void DrawTextSafe(ucanvas* canvas, const wchar_t* text, const fvector2d& position,
        const flinearcolor& color, float scale) {
        try {
            if (!canvas || !text) return;

            canvas->k2_drawtext(menu::font, fstring(text), position, fvector2d(scale, scale), color, 0.0f,
                flinearcolor(0.0f, 0.0f, 0.0f, 0.0f), fvector2d(0.0f, 0.0f),
                true, true, true, flinearcolor(0.0f, 0.0f, 0.0f, 0.0f));
        }
        catch (...) {}
    }

    static flinearcolor HueToRGB(float hue) {
        try {
            float r = std::abs(hue * 6.0f - 3.0f) - 1.0f;
            float g = 2.0f - std::abs(hue * 6.0f - 2.0f);
            float b = 2.0f - std::abs(hue * 6.0f - 4.0f);

            return { resolver_math::clamp(r, 0.0f, 1.0f),
                     resolver_math::clamp(g, 0.0f, 1.0f),
                     resolver_math::clamp(b, 0.0f, 1.0f), 1.0f };
        }
        catch (...) {
            return { 1.0f, 1.0f, 1.0f, 1.0f };
        }
    }

    static flinearcolor LerpColor(const flinearcolor& a, const flinearcolor& b, float t) {
        try {
            return { resolver_math::lerp(a.r, b.r, t),
                     resolver_math::lerp(a.g, b.g, t),
                     resolver_math::lerp(a.b, b.b, t),
                     resolver_math::lerp(a.a, b.a, t) };
        }
        catch (...) {
            return a;
        }
    }

    static std::wstring GetPatternTypeName(int pattern_type) {
        try {
            switch (pattern_type) {
            case 0: return L"LEGIT";
            case 1: return L"SPIN";
            case 2: return L"JITTER";
            case 3: return L"DESYNC";
            case 4: return L"STATIC";
            default: return L"UNKNOWN";
            }
        }
        catch (...) {
            return L"ERROR";
        }
    }
};
float ResolverVisualizer::m_pulse_time = 0.0f;
float ResolverVisualizer::m_rainbow_hue = 0.0f;
float ResolverVisualizer::m_hitmarker_time = 0.0f;
uobject* ResolverVisualizer::m_font = nullptr;

void ResetOffset() {
    menu::offset_x = 23;
    menu::offset_y = 43; // Posición base después de los tabs
}

void* m_memset(void* dest, char c, unsigned int len)
{
    
    unsigned int i;
    unsigned int fill;
    unsigned int chunks = len / sizeof(fill);
    char* char_dest = (char*)dest;
    unsigned int* uint_dest = (unsigned int*)dest;
    fill = (c << 24) + (c << 16) + (c << 8) + c;

    for (i = len; i > chunks * sizeof(fill); i--) {
        char_dest[i - 1] = c;
    }

    for (i = chunks; i > 0; i--) {
        uint_dest[i - 1] = fill;
    }

    return dest;
}

void* m_memcpy(void* dest, void* src, unsigned int len)
{
    
    unsigned int i;
    char* char_src = (char*)src;
    char* char_dest = (char*)dest;
    for (i = 0; i < len; i++) {
        char_dest[i] = char_src[i];
    }
    return dest;
}
flinearcolor HSVtoRGB(float H, float S, float V)
{
    H = std::fmod(H, 1.0f);
    if (H < 0.0f) H += 1.0f;

    float R, G, B;

    int i = static_cast<int>(H * 6);
    float f = H * 6 - i;
    float p = V * (1.0f - S);
    float q = V * (1.0f - f * S);
    float t = V * (1.0f - (1.0f - f) * S);

    switch (i % 6)
    {
    case 0: R = V; G = t; B = p; break;
    case 1: R = q; G = V; B = p; break;
    case 2: R = p; G = V; B = t; break;
    case 3: R = p; G = q; B = V; break;
    case 4: R = t; G = p; B = V; break;
    case 5: R = V; G = p; B = q; break;
    default: R = G = B = 0.0f; break; // fallback
    }

    return flinearcolor(R, G, B, 1.0f);
}

float GetTimeSeconds()
{
    using namespace std::chrono;
    static auto startTime = high_resolution_clock::now();
    auto now = high_resolution_clock::now();
    return duration<float>(now - startTime).count();
}

void DrawChineseHat(fvector head, aplayercontroller* controller, ucanvas* canvas)
{
    static float colorRotation = 0.0f;
    colorRotation = std::fmod(colorRotation + 0.001f, 1.0f);
    constexpr float twoPi = 2.0f * static_cast<float>(M_PI);

    fvector base_center = head + fvector(0, 0, 12.5f + sinf(GetTimeSeconds() * 2.0f) * 5.0f);
    fvector apex_world = base_center + fvector(0, 0, 25.0f);

    fvector2d apex_2D;
    if (!controller->project_world_location_to_screen(apex_world, apex_2D, false)) return;

    std::vector<fvector2d> circle_dots;
    circle_dots.reserve(50);

    const float radius = 50.0f;

    for (int i = 0; i < 50; i++) {
        float angle = twoPi * i / 50;
        fvector circle_point_world = base_center + fvector(cosf(angle), sinf(angle), 0.0f) * radius;

        fvector2d circle_point_2D;
        if (!controller->project_world_location_to_screen(circle_point_world, circle_point_2D, false))
            continue;

        circle_dots.emplace_back(circle_point_2D);

        float hue = std::fmod((float)i / 50 + colorRotation, 1.0f);
        flinearcolor lineColor = HSVtoRGB(hue, 1.0f, 1.0f);

        canvas->k2_drawline(apex_2D, circle_point_2D, 1.3f, lineColor);

    }

    for (int i = 0; i < circle_dots.size(); i++) {
        float hue = std::fmod((float)i / 50 + colorRotation, 1.0f);
        flinearcolor ringColor = HSVtoRGB(hue, 1.0f, 1.0f);
        const fvector2d& p1 = circle_dots[i];
        const fvector2d& p2 = circle_dots[(i + 1) % circle_dots.size()];
        canvas->k2_drawline(p1, p2, 1.0f, ringColor);

    }
}
static void partyhat(aplayercontroller* my_controller, uskeletalmeshcomponent* mesh, fvector head, fvector base, ucanvas* canvas)
{
    if (!canvas || !my_controller)
        return;

    fvector tip = { head.x, head.y, head.z + 20.0f };
    fvector2d screen_tip;

    if (!my_controller->project_world_location_to_screen(tip, screen_tip, false))
        return;

    tarray<fvector2d> base_points_2d;


    static float total_time = 0.0f;
    total_time += 0.016f;
    float time = total_time;

    float rotation_speed = 1.5f;
    float rotation = time * rotation_speed;

    float radius = 30.0f;
    int segments = 16;

    for (int i = 0; i < segments; ++i)
    {
        float angle = (2.0f * 3.14159265358979323846f / segments) * i + rotation;
        float x = cosf(angle) * radius;
        float y = sinf(angle) * radius;

        fvector base_point_3d = { head.x + x, head.y + y, head.z + 5.0f };
        fvector2d screen_base;

        if (my_controller->project_world_location_to_screen(base_point_3d, screen_base, false))
        {
            base_points_2d.add(screen_base);
        }
    }

    if (base_points_2d.size() < 2)
        return;

    float thickness = 1.0f;
    float outline_thickness = thickness + 1.8f;
    bool bOutline = false;


    for (int i = 0; i < base_points_2d.size(); ++i)
    {
        int next = (i + 1) % base_points_2d.size();


        float r = (sinf(time * 2.0f + i * 0.3f) + 1.0f) * 0.5f;
        float g = (sinf(time * 2.0f + i * 0.3f + 2.0f) + 1.0f) * 0.5f;
        float b = (sinf(time * 2.0f + i * 0.3f + 4.0f) + 1.0f) * 0.5f;
        flinearcolor rainbow_color = { r, g, b, 0.8f };


        for (float t = 0.0f; t <= 1.0f; t += 0.1f) {
            fvector2d interpolated_point = {
                screen_tip.x + (base_points_2d[i].x - screen_tip.x) * t,
                screen_tip.y + (base_points_2d[i].y - screen_tip.y) * t
            };

            fvector2d interpolated_next = {
                screen_tip.x + (base_points_2d[next].x - screen_tip.x) * t,
                screen_tip.y + (base_points_2d[next].y - screen_tip.y) * t
            };

            canvas->k2_drawline(interpolated_point, interpolated_next, 2.0f, rainbow_color);
        }


        canvas->k2_drawline(screen_tip, base_points_2d[i], 2.0f, rainbow_color);
        canvas->k2_drawline(base_points_2d[i], base_points_2d[next], 2.0f, rainbow_color);
        canvas->k2_drawline(base_points_2d[next], screen_tip, 2.0f, rainbow_color);
    }


    for (int i = 0; i < base_points_2d.size(); ++i)
    {
        int next = (i + 1) % base_points_2d.size();


        float r = (sinf(time * 2.0f + i * 0.3f) + 1.0f) * 0.5f;
        float g = (sinf(time * 2.0f + i * 0.3f + 2.0f) + 1.0f) * 0.5f;
        float b = (sinf(time * 2.0f + i * 0.3f + 4.0f) + 1.0f) * 0.5f;
        flinearcolor rainbow_color = { r, g, b, 1.0f };


        canvas->k2_drawline(screen_tip, base_points_2d[i], 3.0f, rainbow_color);
        canvas->k2_drawline(base_points_2d[i], base_points_2d[next], 3.0f, rainbow_color);
    }
}



static std::unordered_map<uobject*, std::string> objectNameCache;
inline std::string get_cached_name(uobject* obj) {
    auto it = objectNameCache.find(obj);
    if (it != objectNameCache.end()) return it->second;
    std::string name = system::get_object_name(obj).to_str();
    objectNameCache[obj] = name;
    return name;
}
static const std::pair<const char*, const char*> kWeaponToFamily[] = {
    {"AssaultRifle_AK_C",           "AssaultRifle_AK"},
    {"AssaultRifle_ACR_C",          "AssaultRifle_ACR"},
    {"BoltSniper_C",                "BoltSniper"},
    {"AssaultRifle_Burst_C",        "AssaultRifle_Burst"},
    {"AutomaticPistol_C",           "AutomaticPistol"},
    {"DMR_C",                        "DMR"},
    {"RevolverPistol_C",            "Revolver"},
    {"LugerPistol_C",               "LugerPistol"},
    {"SubMachineGun_MP5_C",         "SubMachineGun_MP5"},
    {"Vector_C",                    "SubMachineGun_Vector"},
    {"BasePistol_C",                "BasePistol"},
    {"LeverSniperRifle_C",          "LeverSniper"},
    {"DS_Gun_C",                    "DS_Gun"},
    {"Ability_Melee_Base_C",        "Melee"},
    {"HeavyMachineGun_C",           "HeavyMachineGun"},
    {"LightMachineGun_C",           "LightMachineGun"},
    {"SawedOffShotgun_C",           "SawedOffShotgun"},
    {"AutomaticShotgun_C",          "AutomaticShotgun"},
    {"PumpShotgun_C",               "PumpShotgun"},
};
struct SkinItem {
    std::wstring name;
};
static std::unordered_map<std::string, std::vector<SkinItem>> g_byFamily;
static std::unordered_map<std::string, int> g_selectedIndexForFamily;
std::wstring get_chosen_skin(const std::string& weapon_name) {


    std::string family;
    for (const auto& [key, fam] : kWeaponToFamily) {
        if (weapon_name == key) {
            family = fam;
            break;
        }
    }

    if (family.empty()) {

        return L"";
    }



    auto it = g_byFamily.find(family);
    if (it == g_byFamily.end()) {
        return L"";
    }

    int index = g_selectedIndexForFamily[family];
    auto& skins = it->second;

    if (index < 0 || index >= static_cast<int>(skins.size())) {

        return L"";
    }

    return skins[index].name;
}
static std::string family_from_logged_name(const std::wstring& wname) {
    std::string s(wname.begin(), wname.end());

    const std::string pre = "Default__";
    const std::string suf = "_PrimaryAsset_C";
    if (s.rfind(pre, 0) == 0) s.erase(0, pre.size());
    if (s.size() >= suf.size() && s.compare(s.size() - suf.size(), suf.size(), suf) == 0)
        s.erase(s.size() - suf.size());

    if (s.rfind("AK_", 0) == 0) return "AssaultRifle_AK";
    if (s.rfind("Melee_", 0) == 0) return "Melee";
    if (s.rfind("Vector_", 0) == 0) return "SubMachineGun_Vector";
    if (s.rfind("Luger_", 0) == 0) return "LugerPistol";

    auto u1 = s.find('_');
    if (u1 == std::string::npos) return s;
    auto u2 = s.find('_', u1 + 1);
    return (u2 == std::string::npos) ? s.substr(0, u1) : s.substr(0, u2);
}
static void store_skin_by_name(const std::wstring& fullName) {
    std::string fam = family_from_logged_name(fullName);
    auto& vec = g_byFamily[fam];

    if (std::none_of(vec.begin(), vec.end(), [&](const SkinItem& it) { return it.name == fullName; })) {
        vec.push_back(SkinItem{ fullName });

        if (vec.size() == 1) {
            g_selectedIndexForFamily[fam] = 0;
        }
    }
}
static std::unordered_map<equippable_skin_data_asset*, std::wstring> g_skinNameCache;
static const std::wstring& get_skin_name_cached(equippable_skin_data_asset* p, bool refresh = false) {
    static const std::wstring kEmpty;
    if (!p) return kEmpty;

    if (!refresh) {
        auto it = g_skinNameCache.find(p);
        if (it != g_skinNameCache.end()) return it->second;
    }

    // Query once, then copy into a stable std::wstring
    fstring f = system::get_object_name(p);
    auto [it, _] = g_skinNameCache.emplace(p, std::wstring(f.c_str()));
    if (!_) it->second.assign(f.c_str()); // if already existed & refresh==true
    return it->second;
}
std::string normalize_weapon_class(const std::string& weapon) {
    size_t pos = weapon.find_last_of('_');
    if (pos != std::string::npos && pos + 1 < weapon.size() &&
        std::all_of(weapon.begin() + pos + 1, weapon.end(), ::isdigit)) {
        return weapon.substr(0, pos);
    }
    return weapon;
}

#define MAX_TRACERS 100
#define TRACER_LIFETIME 7.0f
#define MAX_COLORS 20
#define MAX_TRACERS2 100
struct Tracer {
    fvector worldStart;    // 1
    fvector worldEnd;      // 2
    flinearcolor color;    // 3 - YER DEĞİŞTİRDİ!
    float timeCreated;     // 4 - YER DEĞİŞTİRDİ!
    bool bValid;           // 5 - YENİ EKLENDİ!

    Tracer() : bValid(false) {} // Constructor
};

Tracer tracers[MAX_TRACERS2];
int currentTracerIndex = 0;

struct FFiringResults {
    fvector FiringDirection;
    fvector StartLocation;
};


struct FCustom_OnShot_Params
{
    firing_state* FiringState;
    int32_t ShotIndex;
    bool bTracerEnabled;
    bool bWasLastShot;
    char Pad_E[0x2];
    tarray<FFiringResults> FiringResults;
};
bool ClipLineToScreen(fvector2d& start, fvector2d& end, float screenWidth, float screenHeight)
{
    auto ComputeOutCode = [](float x, float y, float w, float h) -> int {
        int code = 0;
        if (x < 0) code |= 1;
        if (x > w) code |= 2;
        if (y < 0) code |= 4;
        if (y > h) code |= 8;
        return code;
        };

    int outcode0 = ComputeOutCode(start.x, start.y, screenWidth, screenHeight);
    int outcode1 = ComputeOutCode(end.x, end.y, screenWidth, screenHeight);

    while (true)
    {
        if (!(outcode0 | outcode1)) return true;
        if (outcode0 & outcode1) return false;

        int outcodeOut = outcode0 ? outcode0 : outcode1;
        float x, y;

        if (outcodeOut & 8) {
            x = start.x + (end.x - start.x) * (screenHeight - start.y) / (end.y - start.y);
            y = screenHeight;
        }
        else if (outcodeOut & 4) {
            x = start.x + (end.x - start.x) * (0 - start.y) / (end.y - start.y);
            y = 0;
        }
        else if (outcodeOut & 2) {
            y = start.y + (end.y - start.y) * (screenWidth - start.x) / (end.x - start.x);
            x = screenWidth;
        }
        else {
            y = start.y + (end.y - start.y) * (0 - start.x) / (end.x - start.x);
            x = 0;
        }

        if (outcodeOut == outcode0) {
            start.x = x;
            start.y = y;
            outcode0 = ComputeOutCode(start.x, start.y, screenWidth, screenHeight);
        }
        else {
            end.x = x;
            end.y = y;
            outcode1 = ComputeOutCode(end.x, end.y, screenWidth, screenHeight);
        }
    }
}
struct FWallPenetrationSpan
{
    float Length = 0.f;
    bool bIsPlayable = false;
};


enum class EWallBangResult
{
    Clear,
    NotBangable,
    Bangable_NoKill,
    Bangable_CanKill
};


enum class ETraceResult
{
    Clear,
    Smoke,
    Wall_NotBangable,
    Wall_Bangable_NoKill,
    Wall_Bangable_CanKill
};











bool PerformLineTrace(fvector Start, fvector Direction, float MaxDistance, fvector& OutHitLocation)
{
    UWorld2* g_World = UWorld2::GetWorld();
    if (!g_World)
    {
        OutHitLocation = Start + (Direction * MaxDistance);
        return false;
    }

    fvector End = Start + (Direction * MaxDistance);
    FHitResult HitResult;
    tarray<uobject*> ignoreActors;

    bool bHit = ShooterGameBlueprints::ares_line_trace_single_by_channel(
        UWorld2::GetWorld(),
        Start,
        End,
        ignoreActors,
        &HitResult,
        ECollisionChannel::ECC_Visibility,
        false,
        true
    );

    if (bHit)
    {
        OutHitLocation = HitResult.Location;
        return true;
    }
    else {
        OutHitLocation = End;
        return false;
    }
}


float GetCurrentGameTime()
{
    return GetTickCount64() / 1000.0f;
}

static bool didLogInit = false;

struct BulletImpact {
    fvector hitLocation;
    fvector hitNormal;
    float timeCreated;
    flinearcolor color;
    float size;
    bool bValid;
};

#define MAX_IMPACTS 50
#define IMPACT_LIFETIME 2.0f

BulletImpact bulletImpacts[MAX_IMPACTS];
int currentImpactIndex = 0;

void AddBulletImpact(fvector location, fvector normal, flinearcolor color, float size = 25.0f)
{
    if (currentImpactIndex >= MAX_IMPACTS) {
        currentImpactIndex = 0;
    }

    bulletImpacts[currentImpactIndex] = {
        location,
        normal,
        GetCurrentGameTime(),
        color,
        size,
        true
    };

    currentImpactIndex = (currentImpactIndex + 1) % MAX_IMPACTS;
}

void hooks::hkProcessEvent(void* class_, uobject* function, void* params, uintptr_t magic, void* original_fn)
{
    static bool didLogInit = false;
    if (!didLogInit)
    {
        didLogInit = true;
    }

    if (!function || !class_)
        return hooks::oProcessEvent(class_, function, params, magic, original_fn);

    fstring functionName = system::get_object_name(function);

    if (functionName.to_str() == crypt("Custom_OnShot").decrypt() || functionName.to_str().find("OnShot__DelegateSignature") != std::string::npos)
    {
        if (!params) {
            return hooks::oProcessEvent(class_, function, params, magic, original_fn);
        }

        auto* shotParams = static_cast<FCustom_OnShot_Params*>(params);

        if (!shotParams) {
            return hooks::oProcessEvent(class_, function, params, magic, original_fn);
        }

        if (shotParams->bTracerEnabled && shotParams->FiringResults.Num() > 0)
        {
            float currentTime = GetCurrentGameTime();

            static const std::vector<flinearcolor> vibrantColors = {
                flinearcolor(1.0f, 0.0f, 0.0f, 1.0f),
                flinearcolor(0.0f, 1.0f, 0.0f, 1.0f),
                flinearcolor(0.0f, 0.5f, 1.0f, 1.0f),
                flinearcolor(1.0f, 1.0f, 0.0f, 1.0f),
                flinearcolor(1.0f, 0.0f, 1.0f, 1.0f),
                flinearcolor(0.0f, 1.0f, 1.0f, 1.0f),
                flinearcolor(1.0f, 0.5f, 0.0f, 1.0f),
                flinearcolor(0.5f, 0.0f, 1.0f, 1.0f)
            };

            for (int i = 0; i < shotParams->FiringResults.Num(); i++)
            {
                FFiringResults& result = shotParams->FiringResults[i];
                fvector actualEndLocation;
                float maxRange = 50000.0f;

                bool bHit = PerformLineTrace(
                    result.StartLocation,
                    result.FiringDirection,
                    maxRange,
                    actualEndLocation
                );

                static int colorCounter = 0;
                int colorIndex = colorCounter % vibrantColors.size();
                colorCounter++;

                flinearcolor tracerColor = vibrantColors[colorIndex];
                tracerColor.a = 1.0f;

                if (currentTracerIndex >= MAX_TRACERS) {
                    currentTracerIndex = 0;
                }

                tracers[currentTracerIndex].worldStart = result.StartLocation;
                tracers[currentTracerIndex].worldEnd = actualEndLocation;
                tracers[currentTracerIndex].color = tracerColor;
                tracers[currentTracerIndex].timeCreated = currentTime;
                tracers[currentTracerIndex].bValid = true;

                currentTracerIndex = (currentTracerIndex + 1) % MAX_TRACERS;

                if (bHit)
                {
                    fvector hitNormal = (actualEndLocation - result.StartLocation).GetSafeNormal();
                    float impactSize = 25.0f;
                    AddBulletImpact(actualEndLocation, hitNormal, tracerColor, impactSize);
                }

            }


        }
    }

    hooks::oProcessEvent(class_, function, params, magic, original_fn);

}

#define MAX_TRACERS2 100
#define TRACER_LIFETIME2 3.5f   // MUST be > 2s for visible fade
shadow_vmt vmt_hook;

void InstallProcessEventHook(currentequippable* anyUObject)
{
    if (!anyUObject) return;
    constexpr int ProcessEventIndex = 0x53;

    static shadow_vmt viewport_hook;
    viewport_hook.hook<hooks::tProcessEvent>(
        memory::module_base,
        (uintptr_t)anyUObject,
        ProcessEventIndex,
        hooks::hkProcessEvent,
        &hooks::oProcessEvent
    );
}
frotator VectorToRotator(const fvector& dir)
{
    frotator rot;
    rot.pitch = atan2f(dir.z, sqrtf(dir.x * dir.x + dir.y * dir.y)) * (180.f / 3.14159265f);
    rot.yaw = atan2f(dir.y, dir.x) * (180.f / 3.14159265f);
    rot.roll = 0.f;
    return rot;
}


void RenderBulletTracers(ucanvas* canvas, aplayercontroller* controller, fvector cameraLocation, fvector cameraForward, ashootercharacter* MyShooter)
{
    if (!canvas || !controller || !MyShooter) return;

    float currentTime = GetCurrentGameTime();
    const float invLifetime = 1.0f / TRACER_LIFETIME2;

    fvector2d screenSize = canvas->get_screen_size2();

    if (screenSize.x <= 0.0f || screenSize.y <= 0.0f) return;

    const float screenWidth = screenSize.x;
    const float screenHeight = screenSize.y;


    for (int i = 0; i < MAX_TRACERS; ++i)
    {
        Tracer& tracer = tracers[i];
        if (!tracer.bValid) continue;

        float age = currentTime - tracer.timeCreated;

        if (age >= TRACER_LIFETIME)
        {
            tracer.bValid = false;
            continue;
        }

        fvector start = tracer.worldStart;
        fvector end = tracer.worldEnd;

        fvector toStart = start - cameraLocation;
        fvector toEnd = end - cameraLocation;
        const float startDot = fvector::DotProduct(toStart, cameraForward);
        const float endDot = fvector::DotProduct(toEnd, cameraForward);


        if (startDot < NEAR_PLANE_DISTANCE && endDot < NEAR_PLANE_DISTANCE) continue;
        if (startDot < NEAR_PLANE_DISTANCE) {
            float t = (NEAR_PLANE_DISTANCE - startDot) / (endDot - startDot);
            t = (t < 0.0f) ? 0.0f : (t > 1.0f) ? 1.0f : t;
            start = start + (end - start) * t;
        }
        if (endDot < NEAR_PLANE_DISTANCE) {
            float t = (NEAR_PLANE_DISTANCE - startDot) / (endDot - startDot);
            t = (t < 0.0f) ? 0.0f : (t > 1.0f) ? 1.0f : t;
            end = start + (end - start) * t;
        }

        fvector2d screenStart, screenEnd;
        if (!controller->project_world_location_to_screen(start, screenStart, false)) continue;
        if (!controller->project_world_location_to_screen(end, screenEnd, false)) continue;

        if (!ClipLineToScreen(screenStart, screenEnd, screenWidth, screenHeight)) continue;

        const float normalizedAge = age * invLifetime;
        const float fadeFactorSq = normalizedAge * normalizedAge;
        const float fadeFactor = 1.0f - (fadeFactorSq * normalizedAge);

        flinearcolor tracerColor = tracer.color;

        tracerColor.r *= 3.0f;
        if (tracerColor.r > 1.0f) tracerColor.r = 1.0f;

        tracerColor.g *= 3.0f;
        if (tracerColor.g > 1.0f) tracerColor.g = 1.0f;

        tracerColor.b *= 3.0f;
        if (tracerColor.b > 1.0f) tracerColor.b = 1.0f;

        tracerColor.a = fadeFactor;

        canvas->k2_drawtransparentline(screenStart, screenEnd, TRACER_THICKNESS, tracerColor);
    }
}

inline fvector VectorFromRotator(const frotator& Rot)
{
    float CP = cosf(Rot.pitch * (3.14159265f / 180.f));
    float SP = sinf(Rot.pitch * (3.14159265f / 180.f));
    float CY = cosf(Rot.yaw * (3.14159265f / 180.f));
    float SY = sinf(Rot.yaw * (3.14159265f / 180.f));

    return fvector(CP * CY, CP * SY, SP);
}





namespace NoSpread
{
    __declspec(noinline) bool safe_func1(uintptr_t stability_component, uint8_t* error_values, void* fn) {
        __try {
            reinterpret_cast<float* (__fastcall*)(uintptr_t, uintptr_t)>(fn)(stability_component, (uintptr_t)error_values);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            return false;
        }
    }

    __declspec(noinline) bool safe_func2(uintptr_t seed_data_ptr, fvector* firing_direction, float v48, float v46, int retries, uintptr_t out_angles, void* fn) {
        __try {
            reinterpret_cast<void(__fastcall*)(uintptr_t, fvector*, float, float, int, int, uintptr_t)>(fn)(seed_data_ptr, firing_direction, v48, v46, retries, 1, out_angles);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            return false;
        }
    }

    __declspec(noinline) bool safe_func3(fvector* in, fvector* out, void* fn) {
        __try {
            reinterpret_cast<fvector* (__fastcall*)(fvector*, fvector*)>(fn)(in, out);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            return false;
        }
    }

    __declspec(noinline) uintptr_t safe_func5(uintptr_t stability_component, float* out, void* fn) {
        __try {
            return reinterpret_cast<uintptr_t(__fastcall*)(uintptr_t, float*)>(fn)(stability_component, out);
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            return 0;
        }
    }
    class UStabilityComponent;

#define SPOOF_FUNC1(stability_component, error_values) \
    reinterpret_cast<float* (__cdecl*)(uint64_t, float*, uintptr_t, void*)>(spoofcall_stub)( \
        stability_component, error_values, offsets::MagicOffsets, \
        (float* (__fastcall*)(uint64_t, float*))(memory::module_base + offsets::get_spread_values))

#define SPOOF_FUNC2(seed_snapshot, firing_dir, v48, v46, retries, out_angles) \
    reinterpret_cast<void(__cdecl*)(uint64_t, fvector*, float, float, int, int, uint64_t, uintptr_t, void*)>(spoofcall_stub)( \
        seed_snapshot, firing_dir, v48, v46, retries, 1, out_angles, \
        offsets::MagicOffsets, \
        (void(__fastcall*)(uint64_t, fvector*, float, float, int, int, uint64_t))(memory::module_base + offsets::get_spread_angles))

#define SPOOF_FUNC3(inVec, outVec) \
    reinterpret_cast<fvector* (__cdecl*)(fvector*, fvector*, uintptr_t, void*)>(spoofcall_stub)( \
        inVec, outVec, offsets::MagicOffsets, \
        (fvector* (__fastcall*)(fvector*, fvector*))(memory::module_base + offsets::tovector_and_normalize))

#define SPOOF_FUNC4(inVec, outVec) \
    reinterpret_cast<fvector* (__cdecl*)(fvector*, fvector*, uintptr_t, void*)>(spoofcall_stub)( \
        inVec, outVec, offsets::MagicOffsets, \
        (fvector* (__fastcall*)(fvector*, fvector*))(memory::module_base + offsets::toangle_and_normalize))

#define SPOOF_FUNC5(stability_component, test) \
    reinterpret_cast<uintptr_t(__cdecl*)(__int64, float*, uintptr_t, void*)>(spoofcall_stub)( \
        stability_component, test, offsets::MagicOffsets, \
        (uintptr_t(__fastcall*)(__int64, float*))(memory::module_base + offsets::get_spread_values))


#define SPOOF_FUNC6(nigga1, nigga2, nigga3) \
    reinterpret_cast<uintptr_t(__cdecl*)(uint64_t, fvector*, fvector*, uintptr_t, void*)>(spoofcall_stub)( \
        nigga1, nigga2,nigga3, offsets::MagicOffsets, \
        (uintptr_t(__fastcall*)(__int64, float*))(memory::module_base + offsets::GetFiringLocationAndDirection))

    fvector calc_spread(ashootercharacter* actor, firing_state* firing_state_component)
    {
   
  
        static uint8_t error_values[4096];
        static uint8_t seed_data_snapshot[4096];
        static uint8_t spread_angles[4096];
        static uint8_t out_spread_angles[4096];

        m_memset(error_values, 0, sizeof(error_values));
        m_memset(seed_data_snapshot, 0, sizeof(seed_data_snapshot));
        m_memset(spread_angles, 0, sizeof(spread_angles));
        m_memset(out_spread_angles, 0, sizeof(out_spread_angles));

        *(uint64_t*)(&out_spread_angles[0]) = (uint64_t)&spread_angles[0];
        *(int*)(&out_spread_angles[0] + 8) = 1;
        *(int*)(&out_spread_angles[0] + 12) = 1;

        uint64_t seed_data = *(uint64_t*)((uintptr_t)firing_state_component + offsets::seed_data);
        if (!seed_data || seed_data > 9999999999999 || seed_data < 1000000000000) { // hotfix
            return NULL;
        }

        memcpy((void*)seed_data_snapshot, (const void*)seed_data, sizeof(seed_data_snapshot));
        uint64_t stability_component = firing_state_component->GetStabilityComponent();

        if(stability_component)
            SPOOF_FUNC1(stability_component, (float*)&error_values[0]);

      

        fvector temp1, temp2 = fvector(0, 0, 0);
        fvector previous_firing_direction, firing_direction = fvector(0, 0, 0);
        SPOOF_FUNC6((uint64_t)actor, &temp1, &previous_firing_direction);
        SPOOF_FUNC3(&previous_firing_direction, &temp2);
        SPOOF_FUNC4(&temp2, &temp1);
        previous_firing_direction = temp1;
        temp1.x += *(float*)(&error_values[0] + 12);
        temp1.y += *(float*)(&error_values[0] + 16);
        SPOOF_FUNC3(&temp1, &firing_direction);
        float test[20] = { 0 };
        uintptr_t v38 = SPOOF_FUNC5(stability_component, test);
        float v46 = *(float*)(v38 + 0x14);
        float v48 = *(float*)(&error_values[0] + 8) + *(float*)(&error_values[0] + 4);
        int error_retries = *(int*)((uintptr_t)firing_state_component + offsets::error_retries);
        SPOOF_FUNC2(((uint64_t)&seed_data_snapshot[0]) + offsets::NoSpreadNeed,
            &firing_direction, v48, v46, error_retries,
            (uint64_t)&out_spread_angles[0]);
        fvector spread_vector = *(fvector*)(&spread_angles[0]);
        SPOOF_FUNC4(&spread_vector, &firing_direction);
        if (!firing_direction.is_null() && !previous_firing_direction.is_null())   {

            fvector BROWHAT = firing_direction - previous_firing_direction;
            if (BROWHAT.x > 10000 || BROWHAT.y > 10000 || BROWHAT.z > 10000)
                return NULL;

            return BROWHAT;
        }
 
    }

}

static int killSoundIndex = 0;

const wchar_t* killSounds[] = {
    L"C:\\Sync\\kill.wav",           
    L"C:\\Sync\\4.wav",      
    L"C:\\Sync\\12.wav",             
    L"C:\\Sync\\agpa1.wav",         
    L"C:\\Sync\\agpa2.wav",           
    L"C:\\Sync\\animezing.wav",       
    L"C:\\Sync\\archive.wav",         
    L"C:\\Sync\\basshit.wav",      
    L"C:\\Sync\\Beep1.wav",    
    L"C:\\Sync\\bell.wav",         
    L"C:\\Sync\\bepis.wav",          
    L"C:\\Sync\\bubble.wav",         
    L"C:\\Sync\\burp.wav",         
    L"C:\\Sync\\cod.wav",             
    L"C:\\Sync\\coinmaster.wav",    
    L"C:\\Sync\\connectpacanoff.wav",  
    L"C:\\Sync\\minecraft_bow.wav",   
    L"C:\\Sync\\msfrs.wav",        
    L"C:\\Sync\\my_name_jeff.wav",    
    L"C:\\Sync\\neverlose.wav",       
    L"C:\\Sync\\plasmablaster.wav",    
    L"C:\\Sync\\poolplayer.wav",       
    L"C:\\Sync\\poordrum.wav",      
    L"C:\\Sync\\primordial.wav",       
    L"C:\\Sync\\Punch.wav",       
    L"C:\\Sync\\punchy.wav",          
    L"C:\\Sync\\quake.wav",          
    L"C:\\Sync\\reminder.wav",         
    L"C:\\Sync\\roblox.wav",          
    L"C:\\Sync\\rust_headshot.wav",   
    L"C:\\Sync\\skeet.wav",           
    L"C:\\Sync\\sonic.wav",       
    L"C:\\Sync\\stapler.wav",        
    L"C:\\Sync\\unreal1.wav",     
    L"C:\\Sync\\window_xp_error.wav",  
    L"C:\\Sync\\zingtrio.wav"        
};
// Calculate the number of sounds
const int killSoundCount = sizeof(killSounds) / sizeof(killSounds[0]);




void __stdcall hk_death(ashootercharacter* shooter_character, UDamageResponse* a2) {
    try {
        SPOOF_FUNC;
        if (!shooter_character || !memory::IsValidPointer((uintptr_t)shooter_character)) {
            return hooks::oHkDeath(shooter_character, a2);
        }

        acknowledgedpawn* pawn = controller->get_acknowledged_pawn();
        ashootercharacter* CharacterContext = (ashootercharacter*)character;
        acknowledgedpawn* LPawnContext = (acknowledgedpawn*)pawn;


        if (!CharacterContext || !LPawnContext || !a2) {
            return hooks::oHkDeath(shooter_character, a2);
        }

        if (!memory::IsValidPointer((uintptr_t)CharacterContext) ||
            !memory::IsValidPointer((uintptr_t)LPawnContext) ||
            !memory::IsValidPointer((uintptr_t)a2)) {
            return hooks::oHkDeath(shooter_character, a2);
        }

        auto component = (uintptr_t)memory::read<uobject*>((uintptr_t)shooter_character + offsets::death_reaction_component_offset);
        if (!component || !memory::IsValidPointer(component)) {
            return hooks::oHkDeath(shooter_character, a2);
        }

        BYTE b1 = memory::read<BYTE>(component + 0x15A);
        BYTE b2 = memory::read<BYTE>(component + 0x168);

        if (!(b1 == 0 || b2 == 1)) {
            return hooks::oHkDeath(shooter_character, a2);
        }

        auto Killer = a2->GetDamageCauser();

        auto Equippable = a2->GetEquippableUsed();

        if (!Killer || !Equippable ||
            !memory::IsValidPointer((uintptr_t)Killer) ||
            !memory::IsValidPointer((uintptr_t)Equippable)) {

            return hooks::oHkDeath(shooter_character, a2);
        }

        auto ItemSlot = Equippable->GetItemSlot();

        if (!UWorldSave || !memory::IsValidPointer((uintptr_t)UWorldSave)) {
            return hooks::oHkDeath(shooter_character, a2);
        }

        tarray<ashootercharacter*> enemiese = blueprints::find_all_shooters_with_alliance(UWorldSave, character, earesalliance::enemy, false, true);
        myweapon = character->get_inventory()->get_current_equippable();

        if ((uintptr_t)shooter_character == (uintptr_t)LPawnContext) {
            killSoundIndex = 0;
        }

        if (globals::misc::finisher || globals::misc::KillSound || globals::misc::KillMessage && character->is_alive() && character->health() > 0 && character && memory::IsValidPointer((uintptr_t)character)) {
            if (Killer == LPawnContext) {
                int numEnemies = enemiese.size();
                for (int idx = 0; idx < enemiese.size(); ++idx) {
                    if (enemiese[idx] == shooter_character) {
                        numEnemies -= 1;
                        break;
                    }
                }

                if (globals::misc::KillSound) {

                    int selectedIndex = globals::misc::KillSoundEffectOption;
                    if (selectedIndex >= 0 && selectedIndex < 36) {

                        PlaySoundW(killSounds[selectedIndex], NULL, SND_FILENAME | SND_ASYNC);
                    }
                }
                if (globals::misc::KillMessage) {
                    ares_client_game_instace* aresInstance =
                        ares_instance::get_ares_client_game_instance(UWorldSave);

                    UThreadedChatManager* ThreadedManager =
                        aresInstance->GetThreadedChatManager();

                    if (!ThreadedManager)
                        return hooks::oHkDeath(shooter_character, a2);

                    UThreadedChatManager* ThreadedManager2 =
                        ThreadedManager->GetThreadedChatManager(UWorldSave);

                    if (!ThreadedManager2)
                        return hooks::oHkDeath(shooter_character, a2);

                    variables.kismet_text =
                        uobject::find_object<uobject*>(
                            crypt(L"Engine.Default__KismetTextLibrary").decrypt()
                        );

                    ftext msg = text::string_to_text(fstring(globals::misc::chatMessage.c_str()));

                    ThreadedManager2->send_chat_message_v2(EChatRoomType::All, msg);
                }

                bool shouldPlayFinisher = globals::misc::onlylastkill ? (enemiese.size() == 0) : true;

                std::string raw_weapon = get_cached_name(myweapon);
                std::string weapon_name = normalize_weapon_class(raw_weapon.c_str());
                if (globals::misc::finisher) {
                    auto applyFinisher = [&]() {
                        std::wstring skin = get_chosen_skin(weapon_name);

                        uobject* finisher = get_finisher_from_skin(skin.c_str());


                        static uobject* dummyFinisher = uobject::find_object<uobject*>(L"FXC_Finisher_Invalid_Victim_C", reinterpret_cast<uobject*>(-1));
                        memory::write<uobject*>(component + offsets::montage_effect_override_offset, dummyFinisher);
                        memory::write<uobject*>(component + offsets::montage_effect_override_context_offset, nullptr);

                        memory::write<uobject*>(component + offsets::montage_effect_override_offset, nullptr);
                        memory::write<uobject*>(component + offsets::montage_effect_override_context_offset, nullptr);

                        memory::write<uobject*>(component + offsets::montage_effect_override_offset, finisher);
                        memory::write<uobject*>(component + offsets::montage_effect_override_context_offset, LPawnContext);

                        PlayFinisherEffect(component);
                        };

                    if (shouldPlayFinisher) {
                        if (weapon_name.find("AssaultRifle_AK_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("AssaultRifle_ACR_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("BoltSniper_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("AssaultRifle_Burst_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("AutomaticPistol_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("DMR_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("RevolverPistol_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("LugerPistol_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("SubMachineGun_MP5_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("BasePistol_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("LeverSniperRifle_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("DS_Gun_C") != std::string::npos) {
                            applyFinisher();
                        }
                        else if (weapon_name.find("Ability_Melee_Base_C") != std::string::npos) {
                            memory::write<uobject*>(component + offsets::montage_effect_override_offset, nullptr);
                            memory::write<uobject*>(component + offsets::montage_effect_override_context_offset, nullptr);
                        }
                    }
                }
            }
        }
        return hooks::oHkDeath(shooter_character, a2);
    }
    catch (...) {
        return hooks::oHkDeath(shooter_character, a2);
    }
}
#define DEG2RAD (PI / 180.0f)


fvector rotation_to_direction(const frotator& rot)
{
    float pitchRad = rot.pitch * DEG2RAD;
    float yawRad = rot.yaw * DEG2RAD;

    float cp = cosf(pitchRad);
    float sp = sinf(pitchRad);
    float cy = cosf(yawRad);
    float sy = sinf(yawRad);

    return fvector(cp * cy, cp * sy, sp);
}

flinearcolor RGBtoFLC(float R, float G, float B)
{
    return { R / 255, G / 255, B / 255, 1 };
}


void DrawEspText(ucanvas* canvas, const fstring& text2, const fvector2d& position, const fvector2d& scale, const flinearcolor& color, float shadowOpacity = 0.75f)
{
    flinearcolor shadowColor = { 0.0f, 0.0f, 0.0f, 1.0f };
    flinearcolor outlineColor = flinearcolor(0, 0, 0, shadowOpacity);  // black w/ variable alpha
    fvector2d shadowOffset = fvector2d(1.0f, 1.0f); // slight offset for soft shadow

    canvas->k2_drawtext(menu::font,
        text2,                 // The text to render
        position,             // Screen position
        scale,                // Scale (usually FVector2D(1.0f, 1.0f))
        color,                // Main text color
        0.0f,                 // Kerning
        shadowColor,          // Shadow color
        shadowOffset,         // Shadow offset
        true,                 // Center X
        true,                 // Center Y
        true,                 // Enable outline
        outlineColor          // Outline color
    );
}  

void skills_names(std::string ObjectName, ashootercharacter* MyShooter, ucanvas* canvas, fvector2d ObjectLocation) {

    static float font_size = 0.80f;

    if (ObjectName.find(("SmokeZone")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Smoke" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("Zone_Wraith_4_Smoke_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Smoke" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("Zone_Mage_Q_SphereShield_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Smoke" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Sarge_4_SmokeManager_Production_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Smoke" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Pandemic_E_SmokeScreenManager_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Viper Wall Smoke" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Phoenix_Q_FlameWallManager_Production_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Flame Wall Smoke" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Sprinter_4_Tunnel_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Neon Wall Smoke" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Sequoia_4_MovingCover_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Iso Wall" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Rift_GlobalWall_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Astra Smoke" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Breach_4_FusionBlast_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Fusion Line" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Breach_4_SweetSpotFissure_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Fault Line" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Breach_X_Shockwave_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Breach Ulti" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Sarge_E_SpeedStim_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Brim SpeedKit" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Deadeye_E_Trap_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Chamber Trap" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Deadeye_E_Teleporter_Tether_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Chamber Teleport" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Gumshoe_E_TripWire_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Cyper Trap" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Gumshoe_4_Cage_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Cyper Cage" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_CableJamRoot_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Deadlock JamRoot" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_StealthingTrap_SoundSensor_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Deadlock Trap" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_FishingHook_BouncingTrajectoryWarning_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Deadlock Ulti" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_BountyHunter_E_LoSReveal_Source_Reactivate_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Fade Hount" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Q_BountyHunter_Tether_SphereExpansion_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Fade Seize" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_BountyHunter_X_WaveForm_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Fade Ulti" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_BountyHunter_X_WaveForm_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Fade Ulti" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Mage_4_Wave_Chunk_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Harbor Wall" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Mage_E_WallManager_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Harbor Wall" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Sequoia_Q_FragileMissile_TrajectoryWarning_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Iso UnderCut" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Grenadier_E_SuppressionPulse_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Kayo Point" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Killjoy_X_Bomb_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Killjoy Ulti" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Sprinter_Q_ElectricSphere_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Neon RelayBlot" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Wraith_Q_NearsightMissile_TrajectoryWarning_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Omen Paranora" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Wraith_X_GlobalTeleport_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Omen Teleport" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Phoenix_X_ResTarget_Production_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Phoenix Ulti" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Phoenix_X_ResTarget_Production_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Phoenix Ulti" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Vampire_4_NearsightAOE_Source_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Reyna Blind" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Hunter_Q_SonarBolt_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Sova Arrow" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Hunter_4_ExplosiveBolt_Explosion_PrototypeBalance_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Sova Shock" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Gumshoe_E_TripWire_SecondWire_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Cyper Trap" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Gumshoe_E_TripWire_SecondWire_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Cyper Trap" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Sarge_4_Smoke_ProductionNEW_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Smoke" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Sarge_4_OrbitalStrike_Production_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Brim Ulti" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Killjoy_4_BeeSwarm_Damage_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Killjoy Molly" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Aggrobot_Reclaim_Orb_SkederNade_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Iso Orb" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }

    // Clove
    if (ObjectName.find(("GameObject_Smonk_NewSmoke_C")) != std::string::npos) {
        if (!MyShooter->is_alive())
            return;
        DrawEspText(canvas, fstring{ L"Clove Ruse" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }

    if (ObjectName.find(("GameObject_Smonk_Q_DecayExplosion_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Clove Meddle" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }


    if (ObjectName.find(("GameObject_Gumshoe_Q_PossessableCamera_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Cyper Camera" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Killjoy_E_Turret_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Killjoy Turret" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Killjoy_Q_StealthAlarmbot_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Killjoy Alarmbot" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Clay_E_Boomba_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"RazeBot" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Aggrobot_SeekerNade_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Wingman" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("Ability_Guide_Q_PossessableScout_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Sky Kurd" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Stealth_4_Decoy_V2_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Yoru Klon" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Stealth_E_TeleporterMoving_FakeTP_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Yoru Teleport" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("Ability_Stealth_X_Cloak_Equip_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Yoru Ulti" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_BountyHunter_4_WolfHound_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Fade Prowler" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Hunter_E_Drone_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Sova Drone" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
    if (ObjectName.find(("GameObject_Rift_Q_FlashBurst_C")) != std::string::npos)
    {
        if (!MyShooter->is_alive())
            return;

        DrawEspText(canvas, fstring{ L"Astra FlashBurst" }, ObjectLocation, fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
    }
}


#include <string>

#pragma pack(push, 1)
union fp_flag_store {
    unsigned char raw;
    struct {
        unsigned char f0 : 1;
        unsigned char f1 : 1;
        unsigned char f2 : 6;
    } bits;
};
#pragma pack(pop)

struct ViewModelCache {
    uskeletalmeshcomponent* mesh1p = nullptr;
    uskeletalmeshcomponent* overlayMesh = nullptr;
    uskeletalmeshcomponent* weaponMesh1P = nullptr;
    uskeletalmeshcomponent* cosmeticMesh1P = nullptr;
    uskeletalmeshcomponent* meleeMesh1P = nullptr;
    uskeletalmeshcomponent* offHandMesh = nullptr;
    currentequippable* lastWeapon = nullptr;
    currentequippable* lastMelee = nullptr;
    ULONGLONG lastCacheTime = 0;

    void Clear() {
        mesh1p = overlayMesh = weaponMesh1P = cosmeticMesh1P = nullptr;
        meleeMesh1P = offHandMesh = nullptr;
        lastWeapon = lastMelee = nullptr;
    }

    bool IsValid() const {
        return mesh1p != nullptr && weaponMesh1P != nullptr;
    }
};


currentequippable* GetLocalMeleeWeapon() {
    static currentequippable* CachedMelee = nullptr;
    static ULONGLONG lastCacheTime = 0;

    ULONGLONG currentTime = GetTickCount64();
    if (CachedMelee && (currentTime - lastCacheTime) < 2000) {
        return CachedMelee;
    }

    // Cache yenile
    CachedMelee = nullptr;

    if (!UWorldSave) return nullptr;

    tarray<AGameObject*> Objects;
    GameplayStatics::GetAllActorsOfClass2(UWorldSave, Class::Actors(), &Objects);
    for (int i = 0; i < Objects.size(); ++i) {
        AGameObject* Object = Objects[i];
        if (!Object) continue;

        auto name = system::get_object_name((uobject*)Object);
        if (!name.is_valid()) continue;

        if (name.to_str().find("Ability_Melee_Base_C") != std::string::npos) {
            CachedMelee = (currentequippable*)Object;
            lastCacheTime = currentTime;
            return CachedMelee;
        }
    }

    return nullptr;
}
template<typename T>
inline bool SafeRead(uintptr_t address, T& value) {
    if (!IsValidViewModelPointer(address)) return false;

    __try {
        value = *reinterpret_cast<T*>(address);
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

template<typename T>
inline bool SafeWrite(uintptr_t address, const T& value) {
    if (!IsValidViewModelPointer(address)) return false;

    __try {
        *reinterpret_cast<T*>(address) = value;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

inline bool SafeProcessFlag(uskeletalmeshcomponent* mesh, uintptr_t flag_offset, bool clear_flag = false) {
    if (!mesh || !IsValidViewModelObject(mesh)) return false;

    uintptr_t flag_addr = (uintptr_t)mesh + flag_offset;
    if (!IsValidViewModelPointer(flag_addr)) return false;

    fp_flag_store state;
    if (!SafeRead(flag_addr, state.raw)) return false;

    if (clear_flag) {
        state.bits.f0 = 0;
        return SafeWrite(flag_addr, state.raw);
    }

    return true;
}
inline void SafeLockDescendants(USceneComponent* component) {
    if (!component || !IsValidViewModelObject(component)) return;

    tarray<USceneComponent*> allChildren;
    __try {

        printf("\n allChildren false");
        allChildren = GetChildrenComponents(component, true);
        printf("\n allChildren true");
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return;
    }

    for (int i = 0; i < allChildren.Num(); i++) {
        USceneComponent* child = allChildren[i];
        if (child && IsValidViewModelObject(child)) {
            uintptr_t child_flag_addr = (uintptr_t)child + 0x364;
            SafeWrite(child_flag_addr, (unsigned char)0x00);
        }
    }
}


//void process_fp2_nigga(ashootercharacter* negneg) {
//    UPrimitiveComponent* mesh_1p = (UPrimitiveComponent*)negneg->GetMesh1P();
//    UPrimitiveComponent* mesh_overlay_1p = (UPrimitiveComponent*)negneg->GetOverlayMesh1P();
//
//
//    auto gun = negneg->get_inventory()->get_current_equippable();
//    UPrimitiveComponent* mesh_1pgun = (UPrimitiveComponent*)gun->GetMesh1P();
//    UPrimitiveComponent* mesh_1pgunoverlay;
//    uintptr_t cosmetic_ptr = (uintptr_t)gun + 0x1160;
//    if (IsValidViewModelPointer(cosmetic_ptr)) {
//       mesh_1pgunoverlay= (UPrimitiveComponent*)memory::read<UPrimitiveComponent*>(cosmetic_ptr);
//    }
//
//
//    auto meleeWeapon = GetLocalMeleeWeapon();
//    UPrimitiveComponent* offhandknife;
//    if (meleeWeapon && IsValidViewModelObject(meleeWeapon)) {
//    
//        auto meleeweapon2 = (UPrimitiveComponent*)meleeWeapon->GetMesh1P();
//        uintptr_t offhand_ptr = (uintptr_t)meleeWeapon + 0x11F8;
//        if (IsValidViewModelPointer(offhand_ptr) && meleeweapon2) {
//            offhandknife = (UPrimitiveComponent*)memory::read<UPrimitiveComponent*>(offhand_ptr);
//        }
//    }
//
//
//    if (!mesh_1p || !mesh_1pgun) {
//        return;
//    }
//
//    if (mesh_overlay_1p && IsValidViewModelObject(mesh_overlay_1p)) {
//        mesh_overlay_1p->set_is_first_person(false);
//    }
//
//    if (mesh_1pgun && IsValidViewModelObject(mesh_1pgun)) {
//        mesh_1pgun->set_is_first_person(false);
//    }
//
//    if (mesh_1pgunoverlay && IsValidViewModelObject(mesh_1pgunoverlay)) {
//        mesh_1pgunoverlay->set_is_first_person(false);
//    }
//
//    mesh_overlay_1p->set_is_first_person(false);
//    mesh_1pgun->set_is_first_person(false);
//   
//
//        
//    if (mesh_1p && IsValidViewModelObject(mesh_1p)) {
//        SafeLockDescendants((USceneComponent*)mesh_1p);
//    }
//
//    if (mesh_1pgun && IsValidViewModelObject(mesh_1pgun)) {
//        SafeLockDescendants((USceneComponent*)mesh_1pgun);
//    }
//
//    if (meleeweapon2 && IsValidViewModelObject(meleeweapon2)) {
//        SafeLockDescendants((USceneComponent*)meleeweapon2);
//    }
//
//}
//

inline void process_fp_mode(ashootercharacter* shooter) {
    if (!shooter || !IsValidViewModelObject(shooter)) return;

    bool isAlive = false;
    __try {
        isAlive = shooter->is_alive();
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return;
    }

    if (!isAlive) {
        static ViewModelCache cache;
        cache.Clear();
        return;
    }

    static ViewModelCache cache;
    static bool last_force_key_state = false;

    ULONGLONG current_time = GetTickCount64();
    bool force_key_pressed = GetAsyncKeyState(VK_F8) & 0x8000;
    bool force_reapply = force_key_pressed && !last_force_key_state;
    last_force_key_state = force_key_pressed;

    uinventory* inventory = nullptr;
    __try {
        inventory = shooter->get_inventory();
        printf("\n inventory: 0x%p", inventory);
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        cache.Clear();
        return;
    }

    if (!inventory || !IsValidViewModelObject(inventory)) {
        cache.Clear();
        return;
    }

    currentequippable* weapon = nullptr;
    __try {
        weapon = inventory->get_current_equippable();

    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        cache.Clear();
        return;
    }

    if (!weapon || !IsValidViewModelObject(weapon)) {
        cache.Clear();
        return;
    }

    bool needs_refresh = false;
    if (!cache.IsValid() ||
        weapon != cache.lastWeapon ||
        (current_time - cache.lastCacheTime) >= 2000 ||
        force_reapply) {
        needs_refresh = true;
    }

    if (needs_refresh) {
        cache.Clear();
        cache.lastCacheTime = current_time;
        cache.lastWeapon = weapon;

        __try {
            cache.mesh1p = shooter->GetMesh1P();

        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            cache.Clear();
            return;
        }

        if (!cache.mesh1p || !IsValidViewModelObject(cache.mesh1p)) {
            cache.Clear();
            return;
        }

        __try {
            cache.overlayMesh = shooter->GetOverlayMesh1P();

        }
        __except (EXCEPTION_EXECUTE_HANDLER) {

        }

        __try {
            cache.weaponMesh1P = weapon->GetMesh1P();

        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            cache.Clear();
            return;
        }

        if (!cache.weaponMesh1P || !IsValidViewModelObject(cache.weaponMesh1P)) {
            cache.Clear();
            return;
        }

        uintptr_t cosmetic_ptr = (uintptr_t)weapon + 0x1188;
        if (IsValidViewModelPointer(cosmetic_ptr)) {
            __try {
                cache.cosmeticMesh1P = memory::read2<uskeletalmeshcomponent*>(cosmetic_ptr);

            }
            __except (EXCEPTION_EXECUTE_HANDLER) {
            }
        }

        auto meleeWeapon = GetLocalMeleeWeapon();
        if (meleeWeapon && IsValidViewModelObject(meleeWeapon)) {
            cache.lastMelee = meleeWeapon;

            __try {
                cache.meleeMesh1P = meleeWeapon->GetMesh1P();
                printf("\n cache.meleeMesh1P: 0x%p", cache.meleeMesh1P);
            }
            __except (EXCEPTION_EXECUTE_HANDLER) {
                cache.meleeMesh1P = nullptr;
            }

            uintptr_t offhand_ptr = (uintptr_t)meleeWeapon + 0x1220;
            if (IsValidViewModelPointer(offhand_ptr) && cache.meleeMesh1P) {
                __try {
                    cache.offHandMesh = memory::read2<uskeletalmeshcomponent*>(offhand_ptr);
                }
                __except (EXCEPTION_EXECUTE_HANDLER) {
                    cache.offHandMesh = nullptr;
                }
            }
        }
    }

    if (!cache.IsValid() || !cache.mesh1p || !cache.weaponMesh1P) {
        return;
    }

    const uintptr_t flag_offset = 0x364;

    bool should_process_flags = false;
    fp_flag_store main_state;

    if (SafeProcessFlag(cache.mesh1p, flag_offset, false)) {
        uintptr_t mesh_flag_addr = (uintptr_t)cache.mesh1p + flag_offset;
        if (SafeRead(mesh_flag_addr, main_state.raw)) {
            should_process_flags = (main_state.bits.f0 != 0) || force_reapply;
        }
    }

    if (should_process_flags) {
        SafeProcessFlag(cache.mesh1p, flag_offset, true);

        if (cache.overlayMesh && IsValidViewModelObject(cache.overlayMesh)) {
            SafeProcessFlag(cache.overlayMesh, flag_offset, true);
        }

        if (cache.weaponMesh1P && IsValidViewModelObject(cache.weaponMesh1P)) {
            SafeProcessFlag(cache.weaponMesh1P, flag_offset, true);
        }

        if (cache.cosmeticMesh1P && IsValidViewModelObject(cache.cosmeticMesh1P)) {
            SafeProcessFlag(cache.cosmeticMesh1P, flag_offset, true);
        }
    }

    if (cache.mesh1p && IsValidViewModelObject(cache.mesh1p)) {
        SafeLockDescendants((USceneComponent*)cache.mesh1p);
    }

    if (cache.weaponMesh1P && IsValidViewModelObject(cache.weaponMesh1P)) {
        SafeLockDescendants((USceneComponent*)cache.weaponMesh1P);
    }

    if (cache.meleeMesh1P && IsValidViewModelObject(cache.meleeMesh1P)) {
        SafeLockDescendants((USceneComponent*)cache.meleeMesh1P);
    }
}


fvector RotatorToVector(const frotator& rot)
{
    float radPitch = rot.pitch * PI / 180.f;
    float radYaw = rot.yaw * PI / 180.f;

    float CP = cosf(radPitch);
    float SP = sinf(radPitch);
    float CY = cosf(radYaw);
    float SY = sinf(radYaw);

    return fvector(CP * CY, CP * SY, SP);
}



namespace g {


    fvector2d screen_size = canvas->get_screen_size();
    fvector2d pos = { (screen_size.x / 2.0f) - 500, (screen_size.y / 2.0f) - 475 };


}

struct FGameFeatureSubclass {
    struct AActor* Class; // 0x00(0x08)
    struct tarray<struct FGameFeatureAlternateClass> AlternateClasses;
};



class Vector5 {
public:
    float x, y;

    Vector5(float x = 0, float y = 0) : x(x), y(y) {}

    Vector5 operator-(const Vector5& other) const {
        return Vector5(x - other.x, y - other.y);
    }

    Vector5 operator+(const Vector5& other) const {
        return Vector5(x + other.x, y + other.y);
    }

    Vector5 operator*(float scalar) const {
        return Vector5(x * scalar, y * scalar);
    }

    void normalize() {
        float length = std::sqrt(x * x + y * y);
        if (length > 0) {
            x /= length;
            y /= length;
        }
    }
};

class Projectile {
public:
    Vector5 position;
    Vector5 velocity;
    float lifetime;

    Projectile(Vector5 startPos, Vector5 direction, float speed, float life)
        : position(startPos), lifetime(life) {
        velocity = direction * speed; // Set velocity based on direction and speed
    }

    void update(float deltaTime) {
        position = position + (velocity * deltaTime);
        lifetime -= deltaTime;
    }

    bool isAlive() const {
        return lifetime > 0;
    }
};

// Global variables
std::vector<Projectile> projectiles;
const float projectileSpeed = 500.0f;
const float projectileLifetime = 3.0f;

// Function to throw a projectile
void throwProjectile(Vector5 throwerPosition, Vector5 targetPosition) {
    Vector5 direction = targetPosition - throwerPosition;
    direction.normalize(); // Normalize the direction

    // Create the projectile
    Projectile projectile(throwerPosition, direction, projectileSpeed, projectileLifetime);
    projectiles.push_back(projectile); // Add to the list of projectiles
}

// Function to update all projectiles
void updateProjectiles(float deltaTime) {
    for (auto it = projectiles.begin(); it != projectiles.end();) {
        it->update(deltaTime);
        if (!it->isAlive()) {
            it = projectiles.erase(it); // Remove dead projectiles
        }
        else {
            ++it;
        }
    }
}

bool isColliding(const Vector5& projectilePosition, const Vector5& bombPosition) {
    float distance = std::sqrt(std::pow(projectilePosition.x - bombPosition.x, 2) +
        std::pow(projectilePosition.y - bombPosition.y, 2));
    return distance < 10.0f;
}



std::vector<fvector> simulate_trajectory(
    const fvector& Origin,
    const fvector& Direction,
    float Speed,
    const fvector& Gravity,
    float TimeStep,
    int MaxSteps
)
{
    std::vector<fvector> Path;
    fvector Position = Origin;
    fvector Velocity = Direction * Speed;

    for (int i = 0; i < MaxSteps; ++i)
    {
        Path.push_back(Position);
        Position = Position + Velocity * TimeStep;
        Velocity = Velocity + Gravity * TimeStep;
    }

    return Path;
}

bool solve_projectile_arc(
    const fvector& origin,
    const fvector& target,
    float speed,
    float gravity,
    fvector& outInitialVelocity)
{
    // Simplified 2D projectile motion formula on flat terrain for demonstration:

    fvector displacement = target - origin;
    float dx = sqrtf(displacement.x * displacement.x + displacement.y * displacement.y);
    float dy = displacement.z;

    float g = fabsf(gravity);
    float speedSq = speed * speed;
    float underSqrt = speedSq * speedSq - g * (g * dx * dx + 2 * dy * speedSq);

    if (underSqrt < 0) return false; // no solution

    float sqrtVal = sqrtf(underSqrt);

    float angle1 = atanf((speedSq + sqrtVal) / (g * dx));
    // float angle2 = atanf((speedSq - sqrtVal) / (g * dx)); // alternative angle

    // Compose velocity vector
    float vx = speed * cosf(angle1) * (displacement.x / dx);
    float vy = speed * cosf(angle1) * (displacement.y / dx);
    float vz = speed * sinf(angle1);

    outInitialVelocity = fvector(vx, vy, vz);
    return true;
}


struct FProjectileThrowTuning {
    // Order and padding must match the game's memory layout exactly!

    // Assuming offsets from your earlier enum:
    // 0x0  ProjectileClass (skip or pad)
    char _pad0[0x20];  // skip 0x20 bytes (ProjectileClass + ProjectileType)

    float SpeedScale;       // 0x20
    float UpwardArc;        // 0x24
    float UpwardShift;      // 0x28
    fvector ThrowOffset;    // 0x2C
    float ThrowDelay;       // 0x38
    bool bJumpThrowNormalization_LaunchPoint;   // 0x3C
    bool bJumpThrowNormalization_ImpartedVelocity; // 0x3D

    // You may need to add padding or proper packing directives depending on compiler
};

static bool SafeReadPointer(uintptr_t address, uintptr_t* outValue) {
    __try {
        *outValue = *(uintptr_t*)address;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}
static bool SafeReadByte(uintptr_t address, uint8* outValue) {
    __try {
        *outValue = *(uint8*)address;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}
struct WeaponPenetrationData {
    float HeadDamage;
    float BodyDamage;
    float LegDamage;
    float PenetrationPower;
    float DamageReductionPerWall;
    bool CanPenetrateWalls;
};


static const std::map<uint8_t, float> MaterialPenetrationLimits = {
    { 9,  0.0f },
    { 13, 0.0f },
    { 26, 0.0f },
    { 3,  200.0f },
    { 4,  200.0f },
    { 7,  200.0f },
    { 22, 200.0f },
    { 28, 200.0f },
    { 31, 200.0f },
    { 2,  150.0f },
    { 6,  150.0f },
    { 1,  125.0f },
    { 5,  100.0f }
};

std::map<std::wstring, WeaponPenetrationData> WeaponDatabase = {
    { L"Vandal",     { 160.0f, 160.0f, 134.0f, 0.75f, 0.35f, true } },
    { L"Phantom",    { 156.0f, 156.0f, 130.0f, 0.75f, 0.35f, true } },
    { L"Operator",   { 255.0f, 150.0f, 120.0f, 0.90f, 0.25f, true } },
    { L"Marshal",    { 202.0f, 101.0f,  85.0f, 0.85f, 0.30f, true } },
    { L"Sheriff",    { 159.0f,  55.0f,  46.0f, 0.70f, 0.40f, true } },
    { L"Guardian",   { 195.0f,  65.0f,  49.0f, 0.80f, 0.30f, true } },
    { L"Outlaw",     { 140.0f, 140.0f, 119.0f, 0.78f, 0.32f, true } },
    { L"Ghost",      { 105.0f,  30.0f,  25.0f, 0.65f, 0.45f, true } },
    { L"Classic",    {  78.0f,  26.0f,  22.0f, 0.50f, 0.60f, false } },
    { L"Shorty",     {  20.0f,  12.0f,  10.0f, 0.20f, 0.80f, false } },
    { L"Frenzy",     {  78.0f,  26.0f,  21.0f, 0.55f, 0.55f, false } },
    { L"Spectre",    {  78.0f,  26.0f,  22.0f, 0.60f, 0.50f, true } },
    { L"Stinger",    {  67.0f,  27.0f,  22.0f, 0.58f, 0.52f, true } },
    { L"Bucky",      {  40.0f,  20.0f,  17.0f, 0.30f, 0.70f, false } },
    { L"Judge",      {  34.0f,  17.0f,  14.0f, 0.35f, 0.65f, false } },
    { L"Bulldog",    { 115.0f,  35.0f,  29.0f, 0.68f, 0.38f, true } },
    { L"Ares",       {  72.0f,  30.0f,  25.0f, 0.62f, 0.48f, true } },
    { L"Odin",       {  95.0f,  38.0f,  32.0f, 0.72f, 0.36f, true } }
};
WeaponPenetrationData GetWeaponData(ashootercharacter* Player, const fstring& BoneName) {
    auto current_wep = Player->get_inventory()->get_current_equippable();
    fstring obj_name = helper::convert_weapon_name(system::get_object_name(current_wep));

    std::wstring weaponKey = obj_name.c_str();

    auto it = WeaponDatabase.find(weaponKey);
    if (it != WeaponDatabase.end()) {
        return it->second;
    }

    return { 100.0f, 35.0f, 25.0f, 0.60f, 0.40f, true };
}


class BoneHelper {
public:
    static int32_t GetBonePriorityByIndex(int32_t bone_index, int32_t bone_count) {
        switch (bone_count) {
        case 101:
            if (bone_index == 20) return 100;  // Head
            if (bone_index == 21) return 90;   // Neck
            if (bone_index >= 17 && bone_index <= 19) return 80;
            if (bone_index >= 15 && bone_index <= 16) return 70;
            if (bone_index >= 13 && bone_index <= 14) return 60;
            if (bone_index == 3) return 50;    // Pelvis
            if (bone_index >= 23 && bone_index <= 25) return 30;
            if (bone_index >= 49 && bone_index <= 51) return 30;
            if (bone_index >= 75 && bone_index <= 78) return 25;
            if (bone_index >= 82 && bone_index <= 85) return 25;
            return 10;

        case 103:
            if (bone_index == 8) return 100;   // Head
            if (bone_index == 9) return 90;    // Neck
            if (bone_index >= 5 && bone_index <= 7) return 80;
            if (bone_index == 3) return 50;
            if (bone_index >= 30 && bone_index <= 33) return 30;
            if (bone_index >= 55 && bone_index <= 58) return 30;
            if (bone_index >= 63 && bone_index <= 69) return 25;
            if (bone_index >= 77 && bone_index <= 83) return 25;
            return 10;

        case 104:
            if (bone_index == 20) return 100;
            if (bone_index == 21) return 90;
            if (bone_index >= 17 && bone_index <= 19) return 80;
            if (bone_index >= 15 && bone_index <= 16) return 70;
            if (bone_index >= 13 && bone_index <= 14) return 60;
            if (bone_index == 3) return 50;
            if (bone_index >= 23 && bone_index <= 25) return 30;
            if (bone_index >= 49 && bone_index <= 51) return 30;
            if (bone_index >= 77 && bone_index <= 80) return 25;
            if (bone_index >= 84 && bone_index <= 87) return 25;
            return 10;

        default:
            if (bone_index <= 10) return 80;
            if (bone_index <= 20) return 60;
            if (bone_index <= 30) return 40;
            return 20;
        }
    }

    static inline void GetCriticalBones(int32_t bone_count, int32_t* out_bones, int32_t& out_count) {
        if (bone_count == 101 || bone_count == 104) {
            static const int32_t bones[] = { 20, 21, 19, 18, 17, 3 };
            memcpy(out_bones, bones, sizeof(bones));
            out_count = 6;
        }
        else if (bone_count == 103) {
            static const int32_t bones[] = { 8, 9, 7, 6, 5, 3 };
            memcpy(out_bones, bones, sizeof(bones));
            out_count = 6;
        }
        else {
            out_count = 0;
        }
    }
};



auto get_target_bone_matrix35 = [](uskeletalmeshcomponent* mesh, int bone) -> FVector {
    switch (bone) {
    case 0: return mesh->get_bone_location35(8); break;
    case 1: return mesh->get_bone_location35(6); break;
    case 2: return mesh->get_bone_location35(4); break;
    default: return FVector();
    }
    };

auto get_target_bone_matrix = [](uskeletalmeshcomponent* mesh, int bone) -> fvector {
    if (!mesh) return fvector();
    // Map common bones or use the passed bone directly
    switch (bone) {
    case 0: return mesh->get_bone_location(8);  // head
    case 1: return mesh->get_bone_location(6);  // neck
    case 2: return mesh->get_bone_location(4);  // chest
    default: return mesh->get_bone_location(bone); // use bone index directly
    }
    };


auto BONEMATRIXGAY = [](uskeletalmeshcomponent* mesh) -> fvector {
    if (!mesh) return fvector();

    return mesh->get_bone_location(8);
    };


#define LOGA(fmt, ...)                      \
{                                           \
    char buf[512];                          \
    sprintf_s(buf, fmt, __VA_ARGS__);       \
    OutputDebugStringA(buf);                \
}
namespace SLIGHTSONTOP1
{
    namespace insta_lock_agents
    {
        uobject* astra = nullptr;
        uobject* breach = nullptr;
        uobject* brimstone = nullptr;
        uobject* chamber = nullptr;
        uobject* cypher = nullptr;
        uobject* fade = nullptr;
        uobject* jett = nullptr;
        uobject* kayo = nullptr;
        uobject* killjoy = nullptr;
        uobject* neon = nullptr;
        uobject* omen = nullptr;
        uobject* phoenix = nullptr;
        uobject* raze = nullptr;
        uobject* reyna = nullptr;
        uobject* sage = nullptr;
        uobject* skye = nullptr;
        uobject* sova = nullptr;
        uobject* viper = nullptr;
        uobject* yoru = nullptr;
        uobject* gekko = nullptr;

        void run()
        {
            auto enc_astra = Encrypt(L"Default__Rift_PrimaryAsset_C");
            astra = uobject::find_object13(enc_astra.decrypt(), reinterpret_cast<uobject*>(-1)), enc_astra.clear();

            auto enc_breach = Encrypt(L"Default__Breach_PrimaryAsset_C");
            breach = uobject::find_object13(enc_breach.decrypt(), reinterpret_cast<uobject*>(-1)), enc_breach.clear();

            auto enc_brimstone = Encrypt(L"Default__Sarge_PrimaryAsset_C");
            brimstone = uobject::find_object13(enc_brimstone.decrypt(), reinterpret_cast<uobject*>(-1)), enc_brimstone.clear();

            auto enc_chamber = Encrypt(L"Default__Deadeye_PrimaryAsset_C");
            chamber = uobject::find_object13(enc_chamber.decrypt(), reinterpret_cast<uobject*>(-1)), enc_chamber.clear();

            auto enc_cypher = Encrypt(L"Default__Gumshoe_PrimaryAsset_C");
            cypher = uobject::find_object13(enc_cypher.decrypt(), reinterpret_cast<uobject*>(-1)), enc_cypher.clear();

            auto enc_fade = Encrypt(L"Default__BountyHunter_PrimaryAsset_C");
            fade = uobject::find_object13(enc_fade.decrypt(), reinterpret_cast<uobject*>(-1)), enc_fade.clear();

            auto enc_jett = Encrypt(L"Default__Wushu_PrimaryAsset_C");
            jett = uobject::find_object13(enc_jett.decrypt(), reinterpret_cast<uobject*>(-1)), enc_jett.clear();

            auto enc_kayo = Encrypt(L"Default__Grenadier_PrimaryAsset_C");
            kayo = uobject::find_object13(enc_kayo.decrypt(), reinterpret_cast<uobject*>(-1)), enc_kayo.clear();

            auto enc_killjoy = Encrypt(L"Default__Killjoy_PrimaryAsset_C");
            killjoy = uobject::find_object13(enc_killjoy.decrypt(), reinterpret_cast<uobject*>(-1)), enc_killjoy.clear();

            auto enc_neon = Encrypt(L"Default__Sprinter_PrimaryAsset_C");
            neon = uobject::find_object13(enc_neon.decrypt(), reinterpret_cast<uobject*>(-1)), enc_neon.clear();

            auto enc_omen = Encrypt(L"Default__Wraith_PrimaryAsset_C");
            omen = uobject::find_object13(enc_omen.decrypt(), reinterpret_cast<uobject*>(-1)), enc_omen.clear();

            auto enc_phoenix = Encrypt(L"Default__Phoenix_PrimaryAsset_C");
            phoenix = uobject::find_object13(enc_phoenix.decrypt(), reinterpret_cast<uobject*>(-1)), enc_phoenix.clear();

            auto enc_raze = Encrypt(L"Default__Clay_PrimaryAsset_C");
            raze = uobject::find_object13(enc_raze.decrypt(), reinterpret_cast<uobject*>(-1)), enc_raze.clear();

            auto enc_reyna = Encrypt(L"Default__Vampire_PrimaryAsset_C");
            reyna = uobject::find_object13(enc_reyna.decrypt(), reinterpret_cast<uobject*>(-1)), enc_reyna.clear();

            auto enc_sage = Encrypt(L"Default__Thorne_PrimaryAsset_C");
            sage = uobject::find_object13(enc_sage.decrypt(), reinterpret_cast<uobject*>(-1)), enc_sage.clear();

            auto enc_skye = Encrypt(L"Default__guide_PrimaryAsset_C");
            skye = uobject::find_object13(enc_skye.decrypt(), reinterpret_cast<uobject*>(-1)), enc_skye.clear();

            auto enc_sova = Encrypt(L"Default__Hunter_PrimaryAsset_C");
            sova = uobject::find_object13(enc_sova.decrypt(), reinterpret_cast<uobject*>(-1)), enc_sova.clear();

            auto enc_viper = Encrypt(L"Default__Pandemic_PrimaryAsset_C");
            viper = uobject::find_object13(enc_viper.decrypt(), reinterpret_cast<uobject*>(-1)), enc_viper.clear();

            auto enc_yoru = Encrypt(L"Default__Stealth_PrimaryAsset_C");
            yoru = uobject::find_object13(enc_yoru.decrypt(), reinterpret_cast<uobject*>(-1)), enc_yoru.clear();

            auto enc_gekko = Encrypt(L"Default__AggroBot_PrimaryAsset_C");
            gekko = uobject::find_object13(enc_gekko.decrypt(), reinterpret_cast<uobject*>(-1)), enc_gekko.clear();
        }

        uobject* get_agent_object(int id)
        {
            if (id == 0) return astra;
            else if (id == 1) return breach;
            else if (id == 2) return brimstone;
            else if (id == 3) return chamber;
            else if (id == 4) return cypher;
            else if (id == 5) return fade;
            else if (id == 6) return jett;
            else if (id == 7) return kayo;
            else if (id == 8) return killjoy;
            else if (id == 9) return neon;
            else if (id == 10) return omen;
            else if (id == 11) return phoenix;
            else if (id == 12) return raze;
            else if (id == 13) return reyna;
            else if (id == 14) return sage;
            else if (id == 15) return skye;
            else if (id == 16) return sova;
            else if (id == 17) return viper;
            else if (id == 18) return yoru;
            else if (id == 19) return gekko;
            else return nullptr;
        }
    }

    namespace insta_lock
    {
        int old_time = NULL;
        int agent_counter = 0;

        static void agent_roulette(aplayercontroller* controller)
        {
            static uobject* _class = nullptr;
            if (!_class)
            {
                _class = uobject::find_object<uobject*>(crypt(L"ShooterGame.PregamePlayerController"));

            }

            if (math::ClassIsChildOf(controller->ClassPrivate, _class))
            {

                if (pregame_view_controller* pregame_view_controller = controller->get_pregame_view_controller())
                    if (pregame_view_model* pregame_view_model = pregame_view_controller->get_pregame_view_model())
                        if (!pregame_view_model->is_local_player_locked_in())
                        {
                            pregame_view_controller->select_character(
                                insta_lock_agents::get_agent_object(agent_counter)
                            );

                            agent_counter++;
                            if (agent_counter >= 20)
                                agent_counter = 0;
                        }
                        else
                        {

                            globals::il::random_agent = false;
                        }
            }
        }

        void run(aplayercontroller* controller)
        {
            if (globals::il::random_agent)
            {
                agent_roulette(controller);
            }


            if (globals::il::enable)
            {
                static uobject* _class = nullptr;
                _class = uobject::find_object<uobject*>(crypt(L"ShooterGame.PregamePlayerController"));
                if (auto WAH = math::ClassIsChildOf(controller->ClassPrivate, _class))
                {

                    if (pregame_view_controller* pregame_view_controller = controller->get_pregame_view_controller())
                    {
                        if (pregame_view_model* pregame_view_model2 = pregame_view_controller->get_pregame_view_model())
                        {
                            if (!pregame_view_model2->is_local_player_locked_in())
                            {
                                if (auto agent_object = insta_lock_agents::get_agent_object(globals::il::lock_agent))
                                {
                                    pregame_view_controller->lock_character(agent_object);

                                    globals::il::enable = false;

                                }
                            }
                        }
                    }
                }
            }

        }
    }
}
struct WeaponData_t {
    bool CanPenetrateWalls;
    float HeadDamage;
    float PenetrationPower;
    float DamageReductionPerWall;
};

class TraceHelper {
public:
    static inline bool IsValidActorPtr(uintptr_t ptr) {
        return ptr != 0 && ptr != 0xFFFFFFFF && ptr != 0xFFFFFFFFFFFFFFFF && ptr > 0x10000;
    }

    static bool CanShootThrough(aplayercontroller* controller, ashootercharacter* shooter_char,
        ashootercharacter* target_enemy, int aim_bone = 8)
    {
        if (!controller || !shooter_char || !target_enemy) return false;
        if (!memory::IsValidPointer((uintptr_t)controller) ||
            !memory::IsValidPointer((uintptr_t)shooter_char) ||
            !memory::IsValidPointer((uintptr_t)target_enemy)) return false;
        if (!UWorldSave || !memory::IsValidPointer((uintptr_t)UWorldSave)) return false;

        uskeletalmeshcomponent* enemy_mesh = target_enemy->get_mesh();
        if (!enemy_mesh || !memory::IsValidPointer((uintptr_t)enemy_mesh)) return false;

        fvector camera_loc = controller->get_camera_manager()->get_camera_location();
        fvector target_bone = GetBoneMatrix(enemy_mesh, aim_bone);

        tarray<AActor*> ignore_actors;
        ignore_actors.Add((AActor*)shooter_char);

        auto weapon_data = GetWeaponData(shooter_char, fstring(L"head"));
        if (!weapon_data.CanPenetrateWalls) return false;

        float remaining_damage = weapon_data.HeadDamage;
        float pen_power = weapon_data.PenetrationPower;
        float reduction_rate = weapon_data.DamageReductionPerWall;
        float max_thickness = pen_power * 180.0f;

        char raw_wall_spans[0x200];
        memset(raw_wall_spans, 0, sizeof(raw_wall_spans));

        ShooterGameBlueprints::GetWallPenetrationSpans(
            UWorldSave, camera_loc, target_bone,
            ignore_actors, ECollisionChannel::ECC_Visibility,
            0.0f, *(FWallSpanList*)raw_wall_spans
        );

        uintptr_t spans_ptr = *(uintptr_t*)&raw_wall_spans[0x00];
        int32_t spans_count = *(int32_t*)&raw_wall_spans[0x08];
        bool bLastPointInWall = *(bool*)&raw_wall_spans[0x10];

        if (bLastPointInWall) return false;
        if (!spans_ptr || spans_count <= 0) return true; 

        const int FHITRESULT_SIZE = 0xF0;
        const int SPANINFO_SIZE = 0x1E0;
        const int ENTRANCE_LOC_OFFSET = 0x10;
        const int EXIT_LOC_OFFSET = FHITRESULT_SIZE + 0x10;
        const int BLOCKING_HIT_OFFSET = 0xAD;

        int walls_penetrated = 0;
        uint8_t* span_base = (uint8_t*)spans_ptr;

        for (int i = 0; i < spans_count; i++) {
            uint8_t* span = span_base + (i * SPANINFO_SIZE);

            double entrance_x = *(double*)(span + ENTRANCE_LOC_OFFSET);
            double entrance_y = *(double*)(span + ENTRANCE_LOC_OFFSET + 0x08);
            double entrance_z = *(double*)(span + ENTRANCE_LOC_OFFSET + 0x10);

            double exit_x = *(double*)(span + EXIT_LOC_OFFSET);
            double exit_y = *(double*)(span + EXIT_LOC_OFFSET + 0x08);
            double exit_z = *(double*)(span + EXIT_LOC_OFFSET + 0x10);

            uint8_t blocking_byte = *(uint8_t*)(span + BLOCKING_HIT_OFFSET);
            bool bBlockingHit = (blocking_byte & 0x01) != 0;

            if (bBlockingHit) return false;
            double dx = exit_x - entrance_x;
            double dy = exit_y - entrance_y;
            double dz = exit_z - entrance_z;
            float thickness = sqrtf(dx * dx + dy * dy + dz * dz);

            if (thickness < 0.1f || thickness > 5000.0f) continue;
            if (thickness > max_thickness) return false;

            walls_penetrated++;
            remaining_damage *= (1.0f - reduction_rate);

            if (walls_penetrated >= 3) return false;
            if (remaining_damage <= 1.0f) return false;
        }

        return remaining_damage > 1.0f;
    }
};

void Custom_Skin(uworld* WorldObject, ashootercharacter* Character)
{
    if (!WorldObject || !Character)
        return;

    auto Inventory = Character->get_inventory();
    if (!Inventory)
        return;

    auto Equippable = Inventory->get_current_equippable();
    if (!Equippable)
        return;


    if (auto s = character->get_inventory()) {
        if (auto ss = s->get_current_equippable()) {
            auto* GunMesh1P = memory::read<uskeletalmeshcomponent*>((uintptr_t)ss + offsets::Mesh1pGun);

            USceneComponent* sceneComp =
                reinterpret_cast<USceneComponent*>(GunMesh1P);

            tarray<USceneComponent*> children;
            sceneComp->GetChildrenComponents(true, &children);


            fstring Path = L"C:/NIGGA.png";
            uobject* TextureParam = drawings::ImportFileAsTexture2D(WorldObject, Path);
            if (!TextureParam)
                return;

            uobject* BaseMat = uobject::StaticLoadObject(
                L"/Engine/EngineResources/DefaultTexture.DefaultTexture"
            );
            if (!BaseMat)
                return;


            auto MID = GunMesh1P->create_and_set_material_instance_dynamic_from_material(
                0,
                BaseMat
            );

            auto DynMat = MID->cast<UMaterialInstanceDynamic>();
            if (!DynMat)
                return;

            DynMat->set_texture_parameter_value2(
                string::string_to_name(L"Diffuse"),
                TextureParam
            );
        }
    }

}

flinearcolor Text_Shadow{ 0.0f, 0.0f, 0.0f, 0.0f };


namespace pos_decrpt {
    fvector2d pos = {
        (canvas->get_screen_size().x / 2.0f) - 500,
        (canvas->get_screen_size().y / 2.0f) - 475
    };
}


void DrawBoxOutline(ucanvas* canvas, const fvector2d& TopLeft, const fvector2d& BottomRight) {
    canvas->k2_drawline(TopLeft, fvector2d(BottomRight.x, TopLeft.y), 2, { 170, 170, 170, 0.0002f });
    canvas->k2_drawline(fvector2d(TopLeft.x, BottomRight.y), BottomRight, 2, { 170, 170, 170, 0.0002f });
    canvas->k2_drawline(TopLeft, fvector2d(TopLeft.x, BottomRight.y), 2, { 170, 170, 170, 0.0002f });
    canvas->k2_drawline(fvector2d(BottomRight.x, TopLeft.y), BottomRight, 2, { 170, 170, 170, 0.0002f });
}

void DrawProgressBarFill(ucanvas* canvas, const fvector2d& TopLeft, const fvector2d& BottomRight, float Percentage) {
    float X = TopLeft.x, Y = TopLeft.y;
    const flinearcolor ForegroundColor = { 0, 0, 1, 1 };

    for (int i = 0; i < 5; i++) {
        if (i > 0 && i < 5 - 1) {

            float ForegroundWidth = 70 * Percentage / 100;
            canvas->k2_drawline(fvector2d(X, Y + i), fvector2d(X + ForegroundWidth, Y + i), 2.9, ForegroundColor);
        }
    }
}
ftext MakeFText(const fstring& input)
{
    // Allocate FTextData on the heap
    ftextdata* data = new ftextdata();
    data->TextSource = input;

    // Construct FText
    ftext out;
    out.TextData = data;

    return out;
}


void DrawProgressBar(ucanvas* canvas, const fvector2d& Location, float Percentage) {
    fvector2d BoxTopLeft = fvector2d(Location.x - 35, Location.y + 15);
    fvector2d BoxBottomRight = fvector2d(BoxTopLeft.x + 70, BoxTopLeft.y + 5);

    DrawBoxOutline(canvas, BoxTopLeft, BoxBottomRight);
    DrawProgressBarFill(canvas, BoxTopLeft, BoxBottomRight, Percentage);
}

void DrawDroppedSpikeInfo(ucanvas* canvas, const fvector2d& ObjectLocation, uobject* font) {
    canvas->k2_drawtext(font, fstring{ L"Dropped Spike" }, ObjectLocation, fvector2d{ 1.06f, 1.06f }, { 1, 1, 1 ,2.5f }, false, Text_Shadow, fvector2d{ pos_decrpt::pos.x + 1, pos_decrpt::pos.y + 1 }, true, true, true, { 0,0,0.65f });
}
void DrawLineSimple_Spike(ucanvas* can, fvector2d first_bone_position, fvector2d second_bone_position, flinearcolor Color) {
    can->k2_drawline({ first_bone_position.x, first_bone_position.y }, { second_bone_position.x, second_bone_position.y }, 0.9f, Color);
}
// Smoke detection system using LineTraceSingle

// Smoke detection system using LineTraceSingle


//bool IsTargetVisible(uobject* World, aplayercontroller* MyController,
//    ashootercharacter* MyShooter, ashootercharacter* target,
//    bool considerSmoke = true) {
//    if (!World || !MyController || !MyShooter || !target) return false;
//
//    bool hasLOS = MyController->line_of_sight(target);
//    if (!hasLOS) return false;
//
//    if (!considerSmoke) return true;
//
//    fvector myPos = character->k2_get_actor_location();
//    fvector targetPos = target->k2_get_actor_location();
//
//    tarray<AActor*> actorsToIgnore;
//    actorsToIgnore.Add((AActor*)MyShooter);
//    actorsToIgnore.Add((AActor*)target);
//
//    return SmokeCheck::IsLineBlockedBySmokeAdvanced(World, myPos, targetPos, actorsToIgnore);
//}


void Draw3DDiamond(ucanvas* canvas, aplayercontroller* MYController, fvector ObjectLocation3D, float BaseLength, float Height, flinearcolor Color)
{

    fvector Pos0, Pos1, Pos2, Pos3, Pos4, Pos5;
    Pos0 = ObjectLocation3D;
    Pos0.z += 20;
    Pos1 = Pos0 + fvector(-BaseLength / 2, 0, 0);
    Pos2 = Pos0 + fvector(BaseLength / 2, 0, 0);
    Pos3 = Pos0 + fvector(0, -BaseLength / 2, 0);
    Pos4 = Pos0 + fvector(0, BaseLength / 2, 0);
    Pos5 = Pos0 + fvector(0, 0, Height);

    fvector2d ScreenPos0, ScreenPos1, ScreenPos2, ScreenPos3, ScreenPos4, ScreenPos5;
    if (MYController->project_world_location_to_screen(Pos0, ScreenPos0, 0) && ScreenPos0.is_valid() &&
        MYController->project_world_location_to_screen(Pos1, ScreenPos1, 0) && ScreenPos1.is_valid() &&
        MYController->project_world_location_to_screen(Pos2, ScreenPos2, 0) && ScreenPos2.is_valid() &&
        MYController->project_world_location_to_screen(Pos3, ScreenPos3, 0) && ScreenPos3.is_valid() &&
        MYController->project_world_location_to_screen(Pos4, ScreenPos4, 0) && ScreenPos4.is_valid() &&
        MYController->project_world_location_to_screen(Pos5, ScreenPos5, 0) && ScreenPos5.is_valid())
    {
        // Draw lines between points to create the 3D triangle
        DrawLineSimple_Spike(canvas, ScreenPos1, ScreenPos2, Color);
        DrawLineSimple_Spike(canvas, ScreenPos2, ScreenPos3, Color);
        DrawLineSimple_Spike(canvas, ScreenPos3, ScreenPos1, Color);
        DrawLineSimple_Spike(canvas, ScreenPos1, ScreenPos4, Color);
        DrawLineSimple_Spike(canvas, ScreenPos2, ScreenPos4, Color);
        DrawLineSimple_Spike(canvas, ScreenPos3, ScreenPos4, Color);
        DrawLineSimple_Spike(canvas, ScreenPos0, ScreenPos5, Color);
        DrawLineSimple_Spike(canvas, ScreenPos1, ScreenPos5, Color);
        DrawLineSimple_Spike(canvas, ScreenPos2, ScreenPos5, Color);
        DrawLineSimple_Spike(canvas, ScreenPos3, ScreenPos5, Color);
        DrawLineSimple_Spike(canvas, ScreenPos4, ScreenPos5, Color);
    }

}


void DrawBombInfo(ucanvas* canvas, const fvector2d& ObjectLocation, float DefusePercentage, float bomb_time_remaining, uobject* font) {
    std::string timeRemainingStr = std::to_string((int)bomb_time_remaining);
    std::wstring timeRemainingWStr(timeRemainingStr.begin(), timeRemainingStr.end());

    canvas->k2_drawtext(font, timeRemainingWStr.c_str(), ObjectLocation, fvector2d{ 1.15f, 1.15f }, { 1,1, 1 ,2.5f }, false, Text_Shadow, fvector2d{ pos_decrpt::pos.x + 1, pos_decrpt::pos.y + 1 }, true, true, true, { 0,0,0,0.60f });

    if (DefusePercentage > 0) {
        DrawProgressBar(canvas, ObjectLocation, DefusePercentage);
    }

}



namespace hooks
{
    // PI

    const float PI = 3.14159265359f;

    // important
    static acknowledgedpawn* LastPawn;

    ulocalplayer* LocalPlayers;
    ulocalplayer* LocalPlayer;
    fvector2d head_scren;
    aplayercontroller* MyControllers;



    // int unlocker
    int skinvandal = 0;
    int skinclassic = 0;
    int skinsheriff = 0;
    int skinphantom = 0;
    int skinspectre = 0;
    int skinknife = 0;
    int skinbulldog = 0;
    int skinguardian = 0;
    int skinshorty = 0;
    int skinghost = 0;
    int skinoperator = 0;

    int enemyID = 0; //enemy 
    int enemyIDvis = 0; //enemy 
    int CloseRangeDistanceID = 0; //enemy 

    static int TargetX = 0;
    static int TargetY = 0;

    int current_selection = 3;
    const int max_selection = 19;

    // float 
    float LocalCameraFOV;
    float CloseRangeDistance = 50.f;
    static float  Glow = 5.0f;
    static float  FOVChangorSprite = 5.0f;

    static float radius = 4.0f;
    float LineamountCross = 35.0f;
    float LineamountCircle = 25.0f;
    float LineamountFov = 35.0f;

    fvector2d Dinabumalik = canvas->get_screen_size();
    float screen_center_x = Dinabumalik.x / 2.0f;
    float screen_center_y = Dinabumalik.y / 2.0f;


    // bool
    bool Mesh3PModifed = false;
    bool enemiesarround = true;

    static bool open_canvas = true;

    static bool bLockedCameraRotation = false;
    static bool bFlickSilent = true;

    // stuff converter
    wchar_t* s2wc(const char* c)
    {
        const size_t cSize = strlen(c) + 1;
        wchar_t* wc = new wchar_t[cSize];
        mbstowcs(wc, c, cSize);

        return wc;
    }
    std::wstring to_wide_string(const std::string& str) {
        return std::wstring(str.begin(), str.end());
    }
    template <typename T>  T clamp(T value, T min_value, T max_value) {
        if (value < min_value) return min_value;
        if (value > max_value) return max_value;
        return value;
    }

    std::string VirtualKeyCodeToString(UCHAR virtualKey)
    {
        UINT scanCode = MapVirtualKey(virtualKey, MAPVK_VK_TO_VSC);
        if (virtualKey == VK_LBUTTON)
        {
            return ("MOUSE0");
        }
        if (virtualKey == VK_RBUTTON)
        {
            return ("MOUSE1");
        }
        if (virtualKey == VK_MBUTTON)
        {
            return ("MBUTTON");
        }
        if (virtualKey == VK_XBUTTON1)
        {
            return ("XBUTTON1");
        }
        if (virtualKey == VK_XBUTTON2)
        {
            return ("XBUTTON2");
        }


        CHAR szName[128];
        int result = 0;
        switch (virtualKey)
        {
        case VK_LEFT: case VK_UP: case VK_RIGHT: case VK_DOWN:
        case VK_RCONTROL: case VK_RMENU:
        case VK_LWIN: case VK_RWIN: case VK_APPS:
        case VK_PRIOR: case VK_NEXT:
        case VK_END: case VK_HOME:
        case VK_INSERT: case VK_DELETE:
        case VK_DIVIDE:
        case VK_NUMLOCK:
            scanCode |= KF_EXTENDED;
        default:
            result = GetKeyNameTextA(scanCode << 16, szName, 128);
        }

        return szName;
    }


    struct AnimationState {
        float progress;
        bool target_value;

        AnimationState() : progress(0.0f), target_value(false) {}
    };
    struct DropdownState {
        bool is_open;
        DropdownState() : is_open(false) {}
    };
    struct KeybindState {
        bool is_binding;
        KeybindState() : is_binding(false) {}
    };

    class UIAnimationManager {
    private:
        static constexpr size_t MAX_ELEMENTS = 128;
        AnimationState toggle_animations[MAX_ELEMENTS];
        DropdownState dropdown_states[MAX_ELEMENTS];
        KeybindState keybind_states[MAX_ELEMENTS];
        size_t toggle_count;
        size_t dropdown_count;
        size_t keybind_count;

    public:
        UIAnimationManager() : toggle_count(0), dropdown_count(0), keybind_count(0) {}

        size_t register_toggle() {
            if (toggle_count < MAX_ELEMENTS) {
                return toggle_count++;
            }
            return 0;
        }

        size_t register_dropdown() {
            if (dropdown_count < MAX_ELEMENTS) {
                return dropdown_count++;
            }
            return 0;
        }

        size_t register_keybind() {
            if (keybind_count < MAX_ELEMENTS) {
                return keybind_count++;
            }
            return 0;
        }

        AnimationState& get_toggle_animation(size_t index) {
            return toggle_animations[index % MAX_ELEMENTS];
        }

        DropdownState& get_dropdown_state(size_t index) {
            return dropdown_states[index % MAX_ELEMENTS];
        }

        KeybindState& get_keybind_state(size_t index) {
            return keybind_states[index % MAX_ELEMENTS];
        }
    };
    static UIAnimationManager g_animation_manager;
    static constexpr size_t MAX_ELEMENTSS = 128;

    //namespace
    namespace Input
    {
        bool mouseDown[5];
        bool mouseDownAlready[256];

        bool keysDown[256];
        bool keysDownAlready[256];

        bool IsAnyMouseDown()
        {
            if (mouseDown[0]) return true;
            if (mouseDown[1]) return true;
            if (mouseDown[2]) return true;
            if (mouseDown[3]) return true;
            if (mouseDown[4]) return true;

            return false;
        }

        bool IsMouseClicked(int button, int element_id, bool repeat)
        {
            if (mouseDown[button])
            {
                if (!mouseDownAlready[element_id])
                {
                    mouseDownAlready[element_id] = true;
                    return true;
                }
                if (repeat)
                    return true;
            }
            else
            {
                mouseDownAlready[element_id] = false;
            }
            return false;
        }
        bool IsKeyPressed(int key, bool repeat)
        {
            if (keysDown[key])
            {
                if (!keysDownAlready[key])
                {
                    keysDownAlready[key] = true;
                    return true;
                }
                if (repeat)
                    return true;
            }
            else
            {
                keysDownAlready[key] = false;
            }
            return false;
        }

        void Handle()
        {
            if (GetAsyncKeyState(0x01))
                mouseDown[0] = true;
            else
                mouseDown[0] = false;
        }
    }

    // colors and converter
    flinearcolor get_color(bool condition) {
        return condition ? flinearcolor{ 0.1f, 1.0f, 0.1f, 1 } : flinearcolor{ 1.0f, 0.0f, 0.0f, 1 };
    }
    flinearcolor HSVtoRGB(float h, float s, float v) {
        float r, g, b;

        int i = static_cast<int>(h * 6);
        float f = h * 6 - i;
        float p = v * (1 - s);
        float q = v * (1 - f * s);
        float t = v * (1 - (1 - f) * s);

        switch (i % 6) {
        case 0: r = v; g = t; b = p; break;
        case 1: r = q; g = v; b = p; break;
        case 2: r = p; g = v; b = t; break;
        case 3: r = p; g = q; b = v; break;
        case 4: r = t; g = p; b = v; break;
        case 5: r = v; g = p; b = q; break;
        default: r = g = b = 0.0f;
        }

        return flinearcolor{ r, g, b, 1.0f };

    }
    flinearcolor convert_to_flinearcolor(int r, int g, int b, int a) {
        return flinearcolor(
            (float)r / 255.0f,
            (float)g / 255.0f,
            (float)b / 255.0f,
            (float)a / 255.0f
        );
    }
    flinearcolor RGBtoFLC(float R, float G, float B)
    {
        return { R / 255, G / 255, B / 255, 1 };
    }
    flinearcolor GetRainbowColor(float time)
    {
        float red = (sin(time * 2.0f * 3.14159f / 3.0f) + 1.0f) / 2.0f;
        float green = (sin(time * 2.0f * 3.14159f / 3.0f + 2.0f * 3.14159f / 3.0f) + 1.0f) / 2.0f;
        float blue = (sin(time * 2.0f * 3.14159f / 3.0f + 4.0f * 3.14159f / 3.0f) + 1.0f) / 2.0f;
        return flinearcolor(red, green, blue, 1.0f);
    }

    float DegreeToRadian(float degrees) {
        return degrees * (PI / 180);
    }
    float deg_2_rad(float degrees)
    {
        float radians;
        radians = degrees * (M_PI / 180);
        return radians;
    }


    struct key_bind {
        const wchar_t* name;
        int key_code;
    };
    struct ui_state {
        bool dropdown_open = false;
        int active_dropdown = -1;
        float slider_drag_value = 0.0f;
        bool is_dragging = false;
        fvector2d last_mouse_pos = { 0, 0 };
    } g_ui_state;

    size_t generate_toggle_id(const wchar_t* str) {
        size_t hash = 5381;
        while (*str) {
            hash = ((hash << 5) + hash) + *str++;
        }
        return hash % MAX_ELEMENTSS;
    }

    boolean in_rect(float centerX, float centerY, float radius, float x, float y) {
        return x >= centerX - radius && x <= centerX + radius &&
            y >= centerY - radius && y <= centerY + radius;
    }

    void(*SetCameraCachePOVOriginal)(uintptr_t, FMinimalViewInfo*) = nullptr;
    fvector	LocalCameraLocation;
    fvector	LocalCameraRotation;
    fvector	LocalCameraRotationSpin;

    fname first_name;
    fname second_name;

    void meshp1_material(ashootercharacter* characterz)
    {
        
        UPrimitiveComponent* mesh = memory::read<UPrimitiveComponent*>(uintptr_t(characterz) + offsets::Mesh1P_Offset);
        UPrimitiveComponent* meshOverlay = memory::read<UPrimitiveComponent*>(uintptr_t(characterz) + offsets::MeshOverlay1P_Offset);

        uobject* Material = nullptr;


        switch (globals::misc::materials) {
        case 0:
            Material = uobject::StaticLoadObject(crypt(L"/Game/Equippables/_Core/Materials/3P_Weapon_Translucent_Mat").decrypt());
            break;
        case 1:
            Material = uobject::StaticLoadObject(crypt(L"/Game/Characters/Vampire/S0/VFX/Ability_X/1P_Vampire_Tattoo_X_S0_MI_VFX.1P_Vampire_Tattoo_X_S0_MI_VFX").decrypt());
            break;
        case 2:
            Material = uobject::StaticLoadObject(crypt(L"/Game/Equippables/_Core/Materials/SpecialMaterials/Gems/1P_Gem_MAT").decrypt());
            break;
        case 3:
            Material = uobject::StaticLoadObject(crypt(L"/Game/Equippables/_Core/Materials/1P_Weapon_Glass_Mat.1P_Weapon_Glass_Mat").decrypt());
            break;
        case 4:
            Material = uobject::StaticLoadObject(crypt(L"/Game/Equippables/_Core/Materials/SpecialMaterials/Sakura/Tritium_Sakura_3P_MI").decrypt());
            break;
        case 5:
            Material = uobject::StaticLoadObject(crypt(L"/Game/Equippables/_Core/Materials/SpecialMaterials/Arcade/Arcade_Emissive_Yellow_MI.Arcade_Emissive_Yellow_MI").decrypt());
            break;
        case 6:
            Material = uobject::StaticLoadObject(crypt(L"/Game/Equippables/_Core/Materials/SpecialMaterials/Arcade/Arcade_Emissive_Red_MI.Arcade_Emissive_Red_MI").decrypt());
            break;
        case 7:
            Material = uobject::StaticLoadObject(crypt(L"/Game/Equippables/_Core/Materials/SpecialMaterials/Arcade/Arcade_Emissive_Blue_MI.Arcade_Emissive_Blue_MI").decrypt());
            break;
        case 8:
            Material = uobject::StaticLoadObject(crypt(L"/Game/Equippables/_Core/Materials/SpecialMaterials/Afterglow3/BakedLight/Afterglow3_BakedLight_MI.Afterglow3_BakedLight_MI").decrypt());
            break;
        }

        if (Material)
        {
            if (mesh && mesh->get_material(0) != Material)
                mesh->set_material(0, Material);

            if (meshOverlay && meshOverlay->get_material(0) != Material)
                meshOverlay->set_material(0, Material);
        }
    }
    void galaxychams(ashootercharacter* actor) {
        
        auto is_visible = controller->line_of_sight(actor);
        float glowIntensity = globals::misc::FadeChamsGlow;
        flinearcolor centerEdgeColor, innerEdgeColor, outerEdgeColor;




        centerEdgeColor = flinearcolor(globals::misc::CenterEdgeR_Visible2galaxychams * globals::misc::FadeChamsGlow, globals::misc::CenterEdgeG_Visible2galaxychams * globals::misc::FadeChamsGlow, globals::misc::CenterEdgeB_Visible2galaxychams * globals::misc::FadeChamsGlow, 1.f);
        innerEdgeColor = flinearcolor(globals::misc::InnerEdgeR_Visible2galaxychams * globals::misc::FadeChamsGlow, globals::misc::InnerEdgeG_Visible2galaxychams * globals::misc::FadeChamsGlow, globals::misc::InnerEdgeB_Visible2galaxychams * globals::misc::FadeChamsGlow, 1.f);
        outerEdgeColor = flinearcolor(globals::misc::OuterEdgeR_Visible2galaxychams * globals::misc::FadeChamsGlow, globals::misc::OuterEdgeG_Visible2galaxychams * globals::misc::FadeChamsGlow, globals::misc::OuterEdgeB_Visible2galaxychams * globals::misc::FadeChamsGlow, 1.f);



        static fname silohuette_color_name, center_edge_color_name, inner_edge_color_name, outer_edge_color_name, glow_intensity_param;
        if (!silohuette_color_name.comparison_index) {
            silohuette_color_name = (string::string_to_name)(crypt(L"SilohuetteColor").decrypt());
            center_edge_color_name = (string::string_to_name)(crypt(L"CenterEdgeColor").decrypt());
            inner_edge_color_name = (string::string_to_name)(crypt(L"InnerEdgeColor").decrypt());
            outer_edge_color_name = (string::string_to_name)(crypt(L"OuterEdgeColor").decrypt());
            glow_intensity_param = (string::string_to_name)(crypt(L"GlowIntensity").decrypt());
        }

        uobject* visible_material = uobject::StaticLoadObject(crypt(L"/Game/Characters/BountyHunter/S0/VFX/Materials/BountyHunterReveal_MI.BountyHunterReveal_MI").decrypt());
        uobject* invisible_material = uobject::StaticLoadObject(crypt(L"/Game/VFX/Materials/HunterReveal_MI.HunterReveal_MI").decrypt());

        if (visible_material && invisible_material)
        {

            UPrimitiveComponent* mesh_cosmetic_3p = memory::read<UPrimitiveComponent*>(uintptr_t(character) + offsets::Mesh3P_Offset);
            if (mesh_cosmetic_3p) {
                auto num_materials = mesh_cosmetic_3p->get_num_materials();
                for (int i = 0; i < num_materials; i++) {
                    auto material_instance_dynamic = mesh_cosmetic_3p->create_and_set_material_instance_dynamic_from_material(i, is_visible ? visible_material : invisible_material);
                    auto dynCast = material_instance_dynamic->cast<UMaterialInstanceDynamic>();
                    if (!dynCast) continue;

                    dynCast->set_vector_parameter_value2(silohuette_color_name, outerEdgeColor);
                    dynCast->set_vector_parameter_value2(center_edge_color_name, centerEdgeColor);
                    dynCast->set_vector_parameter_value2(inner_edge_color_name, innerEdgeColor);
                    dynCast->set_vector_parameter_value2(outer_edge_color_name, outerEdgeColor);
                    dynCast->set_scalar_parameter_value2(glow_intensity_param, glowIntensity);

                }

            }

        }
    }

    void meshnigger1pcharacter(ashootercharacter* actor) {
        
        auto is_visible = controller->line_of_sight(actor);
        float glowIntensity = globals::misc::FadeChamsGlow;
        flinearcolor centerEdgeColor, innerEdgeColor, outerEdgeColor;

        if (globals::visuals::visiblepresetforself == 0) // Default Green
        {
            globals::misc::CenterEdgeR_Visible2 = 0.0f;
            globals::misc::CenterEdgeG_Visible2 = 0.01f;
            globals::misc::CenterEdgeB_Visible2 = 0.0f;

            globals::misc::InnerEdgeR_Visible2 = 0.0f;
            globals::misc::InnerEdgeG_Visible2 = 0.1f;
            globals::misc::InnerEdgeB_Visible2 = 0.0f;

            globals::misc::OuterEdgeR_Visible2 = 0.0f;
            globals::misc::OuterEdgeG_Visible2 = 1.0f;
            globals::misc::OuterEdgeB_Visible2 = 0.0f;
        }
        else if (globals::visuals::visiblepresetforself == 1) // Toxic Glow
        {
            globals::misc::CenterEdgeR_Visible2 = 0.0f;
            globals::misc::CenterEdgeG_Visible2 = 0.4f;
            globals::misc::CenterEdgeB_Visible2 = 0.2f;

            globals::misc::InnerEdgeR_Visible2 = 0.0f;
            globals::misc::InnerEdgeG_Visible2 = 0.7f;
            globals::misc::InnerEdgeB_Visible2 = 0.3f;

            globals::misc::OuterEdgeR_Visible2 = 0.1f;
            globals::misc::OuterEdgeG_Visible2 = 1.0f;
            globals::misc::OuterEdgeB_Visible2 = 0.4f;
        }
        else if (globals::visuals::visiblepresetforself == 2) // Neon Ice
        {
            globals::misc::CenterEdgeR_Visible2 = 0.0f;
            globals::misc::CenterEdgeG_Visible2 = 0.8f;
            globals::misc::CenterEdgeB_Visible2 = 1.0f;

            globals::misc::InnerEdgeR_Visible2 = 0.0f;
            globals::misc::InnerEdgeG_Visible2 = 0.6f;
            globals::misc::InnerEdgeB_Visible2 = 1.0f;

            globals::misc::OuterEdgeR_Visible2 = 0.1f;
            globals::misc::OuterEdgeG_Visible2 = 1.0f;
            globals::misc::OuterEdgeB_Visible2 = 1.0f;
        }
        else if (globals::visuals::visiblepresetforself == 3) // Solar Flare
        {
            globals::misc::CenterEdgeR_Visible2 = 0.6f;
            globals::misc::CenterEdgeG_Visible2 = 0.5f;
            globals::misc::CenterEdgeB_Visible2 = 0.0f;

            globals::misc::InnerEdgeR_Visible2 = 0.9f;
            globals::misc::InnerEdgeG_Visible2 = 0.8f;
            globals::misc::InnerEdgeB_Visible2 = 0.2f;

            globals::misc::OuterEdgeR_Visible2 = 1.0f;
            globals::misc::OuterEdgeG_Visible2 = 1.0f;
            globals::misc::OuterEdgeB_Visible2 = 0.4f;
        }
        else if (globals::visuals::visiblepresetforself == 4) // Void Spark
        {
            globals::misc::CenterEdgeR_Visible2 = 0.4f;
            globals::misc::CenterEdgeG_Visible2 = 0.0f;
            globals::misc::CenterEdgeB_Visible2 = 0.6f;

            globals::misc::InnerEdgeR_Visible2 = 0.6f;
            globals::misc::InnerEdgeG_Visible2 = 0.2f;
            globals::misc::InnerEdgeB_Visible2 = 1.0f;

            globals::misc::OuterEdgeR_Visible2 = 0.9f;
            globals::misc::OuterEdgeG_Visible2 = 0.3f;
            globals::misc::OuterEdgeB_Visible2 = 1.0f;
        }
        else if (globals::visuals::visiblepresetforself == 5) // Ghost White
        {
            globals::misc::CenterEdgeR_Visible2 = 0.7f;
            globals::misc::CenterEdgeG_Visible2 = 0.7f;
            globals::misc::CenterEdgeB_Visible2 = 0.7f;

            globals::misc::InnerEdgeR_Visible2 = 0.9f;
            globals::misc::InnerEdgeG_Visible2 = 0.9f;
            globals::misc::InnerEdgeB_Visible2 = 0.9f;

            globals::misc::OuterEdgeR_Visible2 = 1.0f;
            globals::misc::OuterEdgeG_Visible2 = 1.0f;
            globals::misc::OuterEdgeB_Visible2 = 1.0f;
        }
        else if (globals::visuals::visiblepresetforself == 6) // Aurora Dream
        {
            globals::misc::CenterEdgeR_Visible2 = 0.2f;
            globals::misc::CenterEdgeG_Visible2 = 0.4f;
            globals::misc::CenterEdgeB_Visible2 = 0.8f;

            globals::misc::InnerEdgeR_Visible2 = 0.4f;
            globals::misc::InnerEdgeG_Visible2 = 0.6f;
            globals::misc::InnerEdgeB_Visible2 = 0.9f;

            globals::misc::OuterEdgeR_Visible2 = 0.6f;
            globals::misc::OuterEdgeG_Visible2 = 0.8f;
            globals::misc::OuterEdgeB_Visible2 = 1.0f;
        }
        else if (globals::visuals::visiblepresetforself == 7) // Cyber Ember
        {
            globals::misc::CenterEdgeR_Visible2 = 1.0f;
            globals::misc::CenterEdgeG_Visible2 = 0.3f;
            globals::misc::CenterEdgeB_Visible2 = 0.0f;

            globals::misc::InnerEdgeR_Visible2 = 1.0f;
            globals::misc::InnerEdgeG_Visible2 = 0.5f;
            globals::misc::InnerEdgeB_Visible2 = 0.1f;

            globals::misc::OuterEdgeR_Visible2 = 1.0f;
            globals::misc::OuterEdgeG_Visible2 = 0.7f;
            globals::misc::OuterEdgeB_Visible2 = 0.2f;
        }
        else if (globals::visuals::visiblepresetforself == 8) // Lunar Fade
        {
            globals::misc::CenterEdgeR_Visible2 = 0.6f;
            globals::misc::CenterEdgeG_Visible2 = 0.6f;
            globals::misc::CenterEdgeB_Visible2 = 0.9f;

            globals::misc::InnerEdgeR_Visible2 = 0.7f;
            globals::misc::InnerEdgeG_Visible2 = 0.7f;
            globals::misc::InnerEdgeB_Visible2 = 1.0f;

            globals::misc::OuterEdgeR_Visible2 = 0.9f;
            globals::misc::OuterEdgeG_Visible2 = 0.9f;
            globals::misc::OuterEdgeB_Visible2 = 1.0f;
        }
        else if (globals::visuals::visiblepresetforself == 9) // Mystic Flame
        {
            globals::misc::CenterEdgeR_Visible2 = 0.6f;
            globals::misc::CenterEdgeG_Visible2 = 0.2f;
            globals::misc::CenterEdgeB_Visible2 = 0.6f;

            globals::misc::InnerEdgeR_Visible2 = 0.8f;
            globals::misc::InnerEdgeG_Visible2 = 0.4f;
            globals::misc::InnerEdgeB_Visible2 = 0.9f;

            globals::misc::OuterEdgeR_Visible2 = 1.0f;
            globals::misc::OuterEdgeG_Visible2 = 0.6f;
            globals::misc::OuterEdgeB_Visible2 = 1.0f;
        }
        else if (globals::visuals::visiblepresetforself == 10) // Arc Light
        {
            globals::misc::CenterEdgeR_Visible2 = 0.0f;
            globals::misc::CenterEdgeG_Visible2 = 0.9f;
            globals::misc::CenterEdgeB_Visible2 = 1.0f;

            globals::misc::InnerEdgeR_Visible2 = 0.2f;
            globals::misc::InnerEdgeG_Visible2 = 1.0f;
            globals::misc::InnerEdgeB_Visible2 = 1.0f;

            globals::misc::OuterEdgeR_Visible2 = 0.6f;
            globals::misc::OuterEdgeG_Visible2 = 1.0f;
            globals::misc::OuterEdgeB_Visible2 = 1.0f;
        }
        else if (globals::visuals::visiblepresetforself == 11) // Burning Core
        {
            globals::misc::CenterEdgeR_Visible2 = 1.0f;
            globals::misc::CenterEdgeG_Visible2 = 0.2f;
            globals::misc::CenterEdgeB_Visible2 = 0.0f;

            globals::misc::InnerEdgeR_Visible2 = 1.0f;
            globals::misc::InnerEdgeG_Visible2 = 0.4f;
            globals::misc::InnerEdgeB_Visible2 = 0.1f;

            globals::misc::OuterEdgeR_Visible2 = 1.0f;
            globals::misc::OuterEdgeG_Visible2 = 0.6f;
            globals::misc::OuterEdgeB_Visible2 = 0.2f;
        }
        else if (globals::visuals::visiblepresetforself == 12) // Deep Ocean
        {
            globals::misc::CenterEdgeR_Visible2 = 0.0f;
            globals::misc::CenterEdgeG_Visible2 = 0.3f;
            globals::misc::CenterEdgeB_Visible2 = 0.5f;

            globals::misc::InnerEdgeR_Visible2 = 0.0f;
            globals::misc::InnerEdgeG_Visible2 = 0.5f;
            globals::misc::InnerEdgeB_Visible2 = 0.7f;

            globals::misc::OuterEdgeR_Visible2 = 0.0f;
            globals::misc::OuterEdgeG_Visible2 = 0.8f;
            globals::misc::OuterEdgeB_Visible2 = 1.0f;
        }
        else if (globals::visuals::visiblepresetforself == 13) // Crystal Edge
        {
            globals::misc::CenterEdgeR_Visible2 = 0.5f;
            globals::misc::CenterEdgeG_Visible2 = 0.8f;
            globals::misc::CenterEdgeB_Visible2 = 1.0f;

            globals::misc::InnerEdgeR_Visible2 = 0.7f;
            globals::misc::InnerEdgeG_Visible2 = 0.9f;
            globals::misc::InnerEdgeB_Visible2 = 1.0f;

            globals::misc::OuterEdgeR_Visible2 = 1.0f;
            globals::misc::OuterEdgeG_Visible2 = 1.0f;
            globals::misc::OuterEdgeB_Visible2 = 1.0f;
        }
        else if (globals::visuals::visiblepresetforself == 14) // Magma Burn
        {
            globals::misc::CenterEdgeR_Visible2 = 1.0f;
            globals::misc::CenterEdgeG_Visible2 = 0.2f;
            globals::misc::CenterEdgeB_Visible2 = 0.0f;

            globals::misc::InnerEdgeR_Visible2 = 1.0f;
            globals::misc::InnerEdgeG_Visible2 = 0.5f;
            globals::misc::InnerEdgeB_Visible2 = 0.2f;

            globals::misc::OuterEdgeR_Visible2 = 1.0f;
            globals::misc::OuterEdgeG_Visible2 = 0.8f;
            globals::misc::OuterEdgeB_Visible2 = 0.4f;
        }

        centerEdgeColor = flinearcolor(globals::misc::CenterEdgeR_Visible2 * globals::misc::FadeChamsGlow, globals::misc::CenterEdgeG_Visible2 * globals::misc::FadeChamsGlow, globals::misc::CenterEdgeB_Visible2 * globals::misc::FadeChamsGlow, 1.f);
        innerEdgeColor = flinearcolor(globals::misc::InnerEdgeR_Visible2 * globals::misc::FadeChamsGlow, globals::misc::InnerEdgeG_Visible2 * globals::misc::FadeChamsGlow, globals::misc::InnerEdgeB_Visible2 * globals::misc::FadeChamsGlow, 1.f);
        outerEdgeColor = flinearcolor(globals::misc::OuterEdgeR_Visible2 * globals::misc::FadeChamsGlow, globals::misc::OuterEdgeG_Visible2 * globals::misc::FadeChamsGlow, globals::misc::OuterEdgeB_Visible2 * globals::misc::FadeChamsGlow, 1.f);



        static fname silohuette_color_name, center_edge_color_name, inner_edge_color_name, outer_edge_color_name, glow_intensity_param;
        if (!silohuette_color_name.comparison_index) {
            silohuette_color_name = (string::string_to_name)(crypt(L"SilohuetteColor").decrypt());
            center_edge_color_name = (string::string_to_name)(crypt(L"CenterEdgeColor").decrypt());
            inner_edge_color_name = (string::string_to_name)(crypt(L"InnerEdgeColor").decrypt());
            outer_edge_color_name = (string::string_to_name)(crypt(L"OuterEdgeColor").decrypt());
            glow_intensity_param = (string::string_to_name)(crypt(L"GlowIntensity").decrypt());
        }

        uobject* visible_material = uobject::StaticLoadObject(crypt(L"/Game/Characters/BountyHunter/S0/VFX/Materials/BountyHunterReveal_MI.BountyHunterReveal_MI").decrypt());
        uobject* invisible_material = uobject::StaticLoadObject(crypt(L"/Game/VFX/Materials/HunterReveal_MI.HunterReveal_MI").decrypt());

        if (visible_material && invisible_material)
        {

            UPrimitiveComponent* mesh_cosmetic_3p = memory::read<UPrimitiveComponent*>(uintptr_t(character) + offsets::Mesh3P_Offset);
            if (mesh_cosmetic_3p) {
                auto num_materials = mesh_cosmetic_3p->get_num_materials();
                for (int i = 0; i < num_materials; i++) {
                    auto material_instance_dynamic = mesh_cosmetic_3p->create_and_set_material_instance_dynamic_from_material(i, is_visible ? visible_material : invisible_material);
                    auto dynCast = material_instance_dynamic->cast<UMaterialInstanceDynamic>();
                    if (!dynCast) continue;

                    dynCast->set_vector_parameter_value2(silohuette_color_name, outerEdgeColor);
                    dynCast->set_vector_parameter_value2(center_edge_color_name, centerEdgeColor);
                    dynCast->set_vector_parameter_value2(inner_edge_color_name, innerEdgeColor);
                    dynCast->set_vector_parameter_value2(outer_edge_color_name, outerEdgeColor);
                    dynCast->set_scalar_parameter_value2(glow_intensity_param, glowIntensity);

                }

            }

        }
    }
    // its same




    void apply_crystal_chams_to_self(ashootercharacter* local_player)
    {
        if (!local_player) return;

        static int self_frame_counter = 0;
        static int last_preset = -1;

        self_frame_counter++;
        if (self_frame_counter % 6 != 0) return;

        // MenÃ¼deki Combobox (0, 1, 2) sÄ±rasÄ±na gÃ¶re presetleri gÃ¼ncelliyoruz
        if (last_preset != globals::visuals::crystal_chams_preset) {
            switch (globals::visuals::crystal_chams_preset) {
            case 0: // Crystal Option 1 (Senin Case 2 DeÄŸerlerin)
                globals::visuals::Self_CenterEdgeR = 0.00f;
                globals::visuals::Self_CenterEdgeG = 0.59f;
                globals::visuals::Self_CenterEdgeB = 0.58f;
                globals::visuals::Self_InnerEdgeR = 0.00f;
                globals::visuals::Self_InnerEdgeG = 12.74f;
                globals::visuals::Self_InnerEdgeB = 13.64f;
                globals::visuals::Self_OuterEdgeR = 3.36f;
                globals::visuals::Self_OuterEdgeG = 0.00f;
                globals::visuals::Self_OuterEdgeB = 0.00f;

                globals::visuals::GlowVisible = 1.6f;
                globals::visuals::AlphaBasePower = 2.5f;
                globals::visuals::AlphaColorMult = 0.9f;
                globals::visuals::DepthBias = 0.08f;
                globals::visuals::AlphaDissolveOpacity = 0.85f;
                globals::visuals::BoundingBox = 1.0f;
                globals::visuals::InnerEdgeThickness = 16.43f;
                globals::visuals::OuterEdgeThickness = 2.80f;
                globals::visuals::RimFresnel = 44.23f;
                globals::visuals::RimMultiply = 0.8f;
                globals::visuals::RimPower = 3.32f;
                globals::visuals::OcclusionDepth = 0.7f;
                globals::visuals::OcclusionBehindWall = 2.10f;
                globals::visuals::OcclusionState = 1.0f;
                globals::visuals::RefractionDepthBias = 0.04f;
                break;

            case 1: // Crystal Option 2 (Senin Case 3 DeÄŸerlerin)
                globals::visuals::Self_CenterEdgeR = 0.65f;
                globals::visuals::Self_CenterEdgeG = 0.63f;
                globals::visuals::Self_CenterEdgeB = 0.58f;
                globals::visuals::Self_InnerEdgeR = 0.00f;
                globals::visuals::Self_InnerEdgeG = 12.74f;
                globals::visuals::Self_InnerEdgeB = 13.64f;
                globals::visuals::Self_OuterEdgeR = 3.36f;
                globals::visuals::Self_OuterEdgeG = 0.00f;
                globals::visuals::Self_OuterEdgeB = 0.00f;

                globals::visuals::GlowVisible = 1.6f;
                globals::visuals::AlphaBasePower = 2.5f;
                globals::visuals::AlphaColorMult = 0.9f;
                globals::visuals::DepthBias = 0.08f;
                globals::visuals::AlphaDissolveOpacity = 0.85f;
                globals::visuals::BoundingBox = 1.0f;
                globals::visuals::InnerEdgeThickness = 16.43f;
                globals::visuals::OuterEdgeThickness = 2.80f;
                globals::visuals::RimFresnel = 44.23f;
                globals::visuals::RimMultiply = 0.8f;
                globals::visuals::RimPower = 3.32f;
                globals::visuals::OcclusionDepth = 0.7f;
                globals::visuals::OcclusionBehindWall = 2.10f;
                globals::visuals::OcclusionState = 1.0f;
                globals::visuals::RefractionDepthBias = 0.04f;
                break;

            case 2: // Crystal Option 3 (Senin Case 4 DeÄŸerlerin)
                globals::visuals::Self_CenterEdgeR = 0.68f;
                globals::visuals::Self_CenterEdgeG = 0.63f;
                globals::visuals::Self_CenterEdgeB = 0.58f;
                globals::visuals::Self_InnerEdgeR = 0.00f;
                globals::visuals::Self_InnerEdgeG = 12.74f;
                globals::visuals::Self_InnerEdgeB = 13.64f;
                globals::visuals::Self_OuterEdgeR = 3.36f;
                globals::visuals::Self_OuterEdgeG = 0.00f;
                globals::visuals::Self_OuterEdgeB = 0.00f;

                globals::visuals::GlowVisible = 1.6f;
                globals::visuals::AlphaBasePower = 2.5f;
                globals::visuals::AlphaColorMult = 0.9f;
                globals::visuals::DepthBias = 0.08f;
                globals::visuals::AlphaDissolveOpacity = 0.85f;
                globals::visuals::BoundingBox = 1.0f;
                globals::visuals::InnerEdgeThickness = 16.43f;
                globals::visuals::OuterEdgeThickness = 2.80f;
                globals::visuals::RimFresnel = 44.23f;
                globals::visuals::RimMultiply = 0.8f;
                globals::visuals::RimPower = 3.32f;
                globals::visuals::OcclusionDepth = 0.7f;
                globals::visuals::OcclusionBehindWall = 2.10f;
                globals::visuals::OcclusionState = 1.0f;
                globals::visuals::RefractionDepthBias = 0.04f;
                break;
            }
            last_preset = globals::visuals::crystal_chams_preset;
        }


        uobject* crystal_material = uobject::StaticLoadObject(L"/Game/Characters/BountyHunter/S0/VFX/Materials/BountyHunterReveal_MI.BountyHunterReveal_MI");
        if (!crystal_material) return;

        // FNames (Birebir senin kodun)
        fname silohuette_color_name = string::string_to_name(L"SilohuetteColor");
        fname center_edge_color_name = string::string_to_name(L"CenterEdgeColor");
        fname inner_edge_color_name = string::string_to_name(L"InnerEdgeColor");
        fname outer_edge_color_name = string::string_to_name(L"OuterEdgeColor");
        fname glow_intensity_param = string::string_to_name(L"GlowIntensity");
        fname alpha_base_power_name = string::string_to_name(L"Alpha_Base_Power");
        fname depth_bias_name = string::string_to_name(L"DepthBias");
        fname alpha_dissolve_opacity_name = string::string_to_name(L"Alpha_Dissolve_Opacity");
        fname bounding_box_name = string::string_to_name(L"BoundingBox");
        fname inner_edge_thickness_name = string::string_to_name(L"InnerEdgeThickness");
        fname outer_edge_thickness_name = string::string_to_name(L"OuterEdgeThickness");
        fname rim_fresnel_name = string::string_to_name(L"Rim_Fresnel");
        fname rim_multiply_name = string::string_to_name(L"Rim_Multiply");
        fname rim_power_name = string::string_to_name(L"Rim_Power");
        fname occlusion_behind_wall_name = string::string_to_name(L"OcclusionDepth_BehindWall");
        fname occlusion_state_name = string::string_to_name(L"OcclusionState");
        fname refraction_depth_bias_name = string::string_to_name(L"RefractionDepthBias");

        // TanÄ±mlamalar (Birebir senin kodun)
        float self_glowIntensity = globals::visuals::GlowVisible;
        float alpha_base_power = globals::visuals::AlphaBasePower;
        float depth_bias = globals::visuals::DepthBias;
        float alpha_dissolve_opacity = globals::visuals::AlphaDissolveOpacity;
        float bounding_box = globals::visuals::BoundingBox;
        float inner_edge_thickness = globals::visuals::InnerEdgeThickness;
        float outer_edge_thickness = globals::visuals::OuterEdgeThickness;
        float rim_fresnel = globals::visuals::RimFresnel;
        float rim_multiply = globals::visuals::RimMultiply;
        float rim_power = globals::visuals::RimPower;
        float occlusion_behind_wall = globals::visuals::OcclusionBehindWall;
        float occlusion_state = globals::visuals::OcclusionState;
        float refraction_depth_bias = globals::visuals::RefractionDepthBias;

        flinearcolor self_centerEdgeColor = flinearcolor(globals::visuals::Self_CenterEdgeR, globals::visuals::Self_CenterEdgeG, globals::visuals::Self_CenterEdgeB, globals::visuals::intensityvisibleoutline);
        flinearcolor self_innerEdgeColor = flinearcolor(globals::visuals::Self_InnerEdgeR, globals::visuals::Self_InnerEdgeG, globals::visuals::Self_InnerEdgeB, globals::visuals::intensityvisibleoutline);
        flinearcolor self_outerEdgeColor = flinearcolor(globals::visuals::Self_OuterEdgeR, globals::visuals::Self_OuterEdgeG, globals::visuals::Self_OuterEdgeB, globals::visuals::intensityvisibleoutline);

        auto apply_material = [&](uskeletalmeshcomponent* mesh) {
            if (!mesh) return;
            int num_materials = mesh->get_num_materials();
            for (int i = 0; i < num_materials; i++) {
                auto material_instance_dynamic = mesh->create_and_set_material_instance_dynamic_from_material(i, crystal_material);
                auto dynCast = material_instance_dynamic->cast<UMaterialInstanceDynamic>();
                if (!dynCast) continue;

                dynCast->set_vector_parameter_value2(silohuette_color_name, self_outerEdgeColor);
                dynCast->set_vector_parameter_value2(center_edge_color_name, self_centerEdgeColor);
                dynCast->set_vector_parameter_value2(inner_edge_color_name, self_innerEdgeColor);
                dynCast->set_vector_parameter_value2(outer_edge_color_name, self_outerEdgeColor);
                dynCast->set_scalar_parameter_value2(glow_intensity_param, self_glowIntensity);
                dynCast->set_scalar_parameter_value2(alpha_base_power_name, alpha_base_power);
                dynCast->set_scalar_parameter_value2(depth_bias_name, depth_bias);
                dynCast->set_scalar_parameter_value2(alpha_dissolve_opacity_name, alpha_dissolve_opacity);
                dynCast->set_scalar_parameter_value2(bounding_box_name, bounding_box);
                dynCast->set_scalar_parameter_value2(inner_edge_thickness_name, inner_edge_thickness);
                dynCast->set_scalar_parameter_value2(outer_edge_thickness_name, outer_edge_thickness);
                dynCast->set_scalar_parameter_value2(rim_fresnel_name, rim_fresnel);
                dynCast->set_scalar_parameter_value2(rim_multiply_name, rim_multiply);
                dynCast->set_scalar_parameter_value2(rim_power_name, rim_power);
                dynCast->set_scalar_parameter_value2(occlusion_behind_wall_name, occlusion_behind_wall);
                dynCast->set_scalar_parameter_value2(occlusion_state_name, occlusion_state);
                dynCast->set_scalar_parameter_value2(refraction_depth_bias_name, refraction_depth_bias);
            }
            };

        apply_material(local_player->GetMesh1P());
        apply_material(local_player->GetOverlayMesh1P());
    }

    void apply_crystal_chams_to_self3p(ashootercharacter* local_player)
    {
        if (!local_player) return;

        static int self_frame_counter = 0;
        static int last_preset = -1;

        self_frame_counter++;
        if (self_frame_counter % 6 != 0) return;

        // MenÃ¼deki Combobox (0, 1, 2) sÄ±rasÄ±na gÃ¶re presetleri gÃ¼ncelliyoruz
        if (last_preset != globals::visuals::crystal_enemy_preset) {
            switch (globals::visuals::crystal_enemy_preset) {
            case 0: // Crystal Option 1 (Senin Case 2 DeÄŸerlerin)
                globals::enemyshit::Enemy_CenterEdgeR = 0.00f;
                globals::enemyshit::Enemy_CenterEdgeG = 0.59f;
                globals::enemyshit::Enemy_CenterEdgeB = 0.58f;
                globals::enemyshit::Enemy_InnerEdgeR = 0.00f;
                globals::enemyshit::Enemy_InnerEdgeG = 12.74f;
                globals::enemyshit::Enemy_InnerEdgeB = 13.64f;
                globals::enemyshit::Enemy_OuterEdgeR = 3.36f;
                globals::enemyshit::Enemy_OuterEdgeG = 0.00f;
                globals::enemyshit::Enemy_OuterEdgeB = 0.00f;

                globals::enemyshit::GlowVisible = 1.6f;
                globals::enemyshit::AlphaBasePower = 2.5f;
                globals::enemyshit::AlphaColorMult = 0.9f;
                globals::enemyshit::DepthBias = 0.08f;
                globals::enemyshit::AlphaDissolveOpacity = 0.85f;
                globals::enemyshit::BoundingBox = 1.0f;
                globals::enemyshit::InnerEdgeThickness = 16.43f;
                globals::enemyshit::OuterEdgeThickness = 2.80f;
                globals::enemyshit::RimFresnel = 44.23f;
                globals::enemyshit::RimMultiply = 0.8f;
                globals::enemyshit::RimPower = 3.32f;
                globals::enemyshit::OcclusionDepth = 0.7f;
                globals::enemyshit::OcclusionBehindWall = 2.10f;
                globals::enemyshit::OcclusionState = 1.0f;
                globals::enemyshit::RefractionDepthBias = 0.04f;
                break;

            case 1: // Crystal Option 2 (Senin Case 3 DeÄŸerlerin)
                globals::enemyshit::Enemy_CenterEdgeR = 0.65f;
                globals::enemyshit::Enemy_CenterEdgeG = 0.63f;
                globals::enemyshit::Enemy_CenterEdgeB = 0.58f;
                globals::enemyshit::Enemy_InnerEdgeR = 0.00f;
                globals::enemyshit::Enemy_InnerEdgeG = 12.74f;
                globals::enemyshit::Enemy_InnerEdgeB = 13.64f;
                globals::enemyshit::Enemy_OuterEdgeR = 3.36f;
                globals::enemyshit::Enemy_OuterEdgeG = 0.00f;
                globals::enemyshit::Enemy_OuterEdgeB = 0.00f;

                globals::enemyshit::GlowVisible = 1.6f;
                globals::enemyshit::AlphaBasePower = 2.5f;
                globals::enemyshit::AlphaColorMult = 0.9f;
                globals::enemyshit::DepthBias = 0.08f;
                globals::enemyshit::AlphaDissolveOpacity = 0.85f;
                globals::enemyshit::BoundingBox = 1.0f;
                globals::enemyshit::InnerEdgeThickness = 16.43f;
                globals::enemyshit::OuterEdgeThickness = 2.80f;
                globals::enemyshit::RimFresnel = 44.23f;
                globals::enemyshit::RimMultiply = 0.8f;
                globals::enemyshit::RimPower = 3.32f;
                globals::enemyshit::OcclusionDepth = 0.7f;
                globals::enemyshit::OcclusionBehindWall = 2.10f;
                globals::enemyshit::OcclusionState = 1.0f;
                globals::enemyshit::RefractionDepthBias = 0.04f;
                break;

            case 2: // Crystal Option 3 (Senin Case 4 DeÄŸerlerin)
                globals::enemyshit::Enemy_CenterEdgeR = 0.68f;
                globals::enemyshit::Enemy_CenterEdgeG = 0.63f;
                globals::enemyshit::Enemy_CenterEdgeB = 0.58f;
                globals::enemyshit::Enemy_InnerEdgeR = 0.00f;
                globals::enemyshit::Enemy_InnerEdgeG = 12.74f;
                globals::enemyshit::Enemy_InnerEdgeB = 13.64f;
                globals::enemyshit::Enemy_OuterEdgeR = 3.36f;
                globals::enemyshit::Enemy_OuterEdgeG = 0.00f;
                globals::enemyshit::Enemy_OuterEdgeB = 0.00f;

                globals::enemyshit::GlowVisible = 1.6f;
                globals::enemyshit::AlphaBasePower = 2.5f;
                globals::enemyshit::AlphaColorMult = 0.9f;
                globals::enemyshit::DepthBias = 0.08f;
                globals::enemyshit::AlphaDissolveOpacity = 0.85f;
                globals::enemyshit::BoundingBox = 1.0f;
                globals::enemyshit::InnerEdgeThickness = 16.43f;
                globals::enemyshit::OuterEdgeThickness = 2.80f;
                globals::enemyshit::RimFresnel = 44.23f;
                globals::enemyshit::RimMultiply = 0.8f;
                globals::enemyshit::RimPower = 3.32f;
                globals::enemyshit::OcclusionDepth = 0.7f;
                globals::enemyshit::OcclusionBehindWall = 2.10f;
                globals::enemyshit::OcclusionState = 1.0f;
                globals::enemyshit::RefractionDepthBias = 0.04f;
                break;
            }
            last_preset = globals::visuals::crystal_enemy_preset;
        }

        uobject* crystal_material = uobject::StaticLoadObject(L"/Game/Characters/BountyHunter/S0/VFX/Materials/BountyHunterReveal_MI.BountyHunterReveal_MI");
        if (!crystal_material) return;

        // FNames (Birebir senin kodun)
        fname silohuette_color_name = string::string_to_name(L"SilohuetteColor");
        fname center_edge_color_name = string::string_to_name(L"CenterEdgeColor");
        fname inner_edge_color_name = string::string_to_name(L"InnerEdgeColor");
        fname outer_edge_color_name = string::string_to_name(L"OuterEdgeColor");
        fname glow_intensity_param = string::string_to_name(L"GlowIntensity");
        fname alpha_base_power_name = string::string_to_name(L"Alpha_Base_Power");
        fname depth_bias_name = string::string_to_name(L"DepthBias");
        fname alpha_dissolve_opacity_name = string::string_to_name(L"Alpha_Dissolve_Opacity");
        fname bounding_box_name = string::string_to_name(L"BoundingBox");
        fname inner_edge_thickness_name = string::string_to_name(L"InnerEdgeThickness");
        fname outer_edge_thickness_name = string::string_to_name(L"OuterEdgeThickness");
        fname rim_fresnel_name = string::string_to_name(L"Rim_Fresnel");
        fname rim_multiply_name = string::string_to_name(L"Rim_Multiply");
        fname rim_power_name = string::string_to_name(L"Rim_Power");
        fname occlusion_behind_wall_name = string::string_to_name(L"OcclusionDepth_BehindWall");
        fname occlusion_state_name = string::string_to_name(L"OcclusionState");
        fname refraction_depth_bias_name = string::string_to_name(L"RefractionDepthBias");

        // TanÄ±mlamalar (Birebir senin kodun)
        float self_glowIntensity = globals::enemyshit::GlowVisible;
        float alpha_base_power = globals::enemyshit::AlphaBasePower;
        float depth_bias = globals::enemyshit::DepthBias;
        float alpha_dissolve_opacity = globals::enemyshit::AlphaDissolveOpacity;
        float bounding_box = globals::enemyshit::BoundingBox;
        float inner_edge_thickness = globals::enemyshit::InnerEdgeThickness;
        float outer_edge_thickness = globals::enemyshit::OuterEdgeThickness;
        float rim_fresnel = globals::enemyshit::RimFresnel;
        float rim_multiply = globals::enemyshit::RimMultiply;
        float rim_power = globals::enemyshit::RimPower;
        float occlusion_behind_wall = globals::enemyshit::OcclusionBehindWall;
        float occlusion_state = globals::enemyshit::OcclusionState;
        float refraction_depth_bias = globals::enemyshit::RefractionDepthBias;

        flinearcolor self_centerEdgeColor = flinearcolor(globals::enemyshit::Enemy_CenterEdgeR, globals::enemyshit::Enemy_CenterEdgeG, globals::enemyshit::Enemy_CenterEdgeB, globals::visuals::intensityvisibleoutline);
        flinearcolor self_innerEdgeColor = flinearcolor(globals::enemyshit::Enemy_InnerEdgeR, globals::enemyshit::Enemy_InnerEdgeG, globals::enemyshit::Enemy_InnerEdgeB, globals::visuals::intensityvisibleoutline);
        flinearcolor self_outerEdgeColor = flinearcolor(globals::enemyshit::Enemy_OuterEdgeR, globals::enemyshit::Enemy_OuterEdgeG, globals::enemyshit::Enemy_OuterEdgeB, globals::visuals::intensityvisibleoutline);

        auto apply_material = [&](uskeletalmeshcomponent* mesh) {
            if (!mesh) return;
            int num_materials = mesh->get_num_materials();
            for (int i = 0; i < num_materials; i++) {
                auto material_instance_dynamic = mesh->create_and_set_material_instance_dynamic_from_material(i, crystal_material);
                auto dynCast = material_instance_dynamic->cast<UMaterialInstanceDynamic>();
                if (!dynCast) continue;

                dynCast->set_vector_parameter_value2(silohuette_color_name, self_outerEdgeColor);
                dynCast->set_vector_parameter_value2(center_edge_color_name, self_centerEdgeColor);
                dynCast->set_vector_parameter_value2(inner_edge_color_name, self_innerEdgeColor);
                dynCast->set_vector_parameter_value2(outer_edge_color_name, self_outerEdgeColor);
                dynCast->set_scalar_parameter_value2(glow_intensity_param, self_glowIntensity);
                dynCast->set_scalar_parameter_value2(alpha_base_power_name, alpha_base_power);
                dynCast->set_scalar_parameter_value2(depth_bias_name, depth_bias);
                dynCast->set_scalar_parameter_value2(alpha_dissolve_opacity_name, alpha_dissolve_opacity);
                dynCast->set_scalar_parameter_value2(bounding_box_name, bounding_box);
                dynCast->set_scalar_parameter_value2(inner_edge_thickness_name, inner_edge_thickness);
                dynCast->set_scalar_parameter_value2(outer_edge_thickness_name, outer_edge_thickness);
                dynCast->set_scalar_parameter_value2(rim_fresnel_name, rim_fresnel);
                dynCast->set_scalar_parameter_value2(rim_multiply_name, rim_multiply);
                dynCast->set_scalar_parameter_value2(rim_power_name, rim_power);
                dynCast->set_scalar_parameter_value2(occlusion_behind_wall_name, occlusion_behind_wall);
                dynCast->set_scalar_parameter_value2(occlusion_state_name, occlusion_state);
                dynCast->set_scalar_parameter_value2(refraction_depth_bias_name, refraction_depth_bias);
            }
            };

        apply_material(local_player->GetCosmesticMesh3P());
    }

    void galaxychamsHand(ashootercharacter* actor)
    {
        static fname center_edge_color_name, inner_edge_color_name, outer_edge_color_name, rim_power, Rim_Multiply, OuterEdgeThickness, boundingBoxParam;
        if (!center_edge_color_name.comparison_index) {
            center_edge_color_name = (string::string_to_name)(crypt(L"CenterEdgeColor").decrypt());
            inner_edge_color_name = (string::string_to_name)(crypt(L"InnerEdgeColor").decrypt());
            outer_edge_color_name = (string::string_to_name)(crypt(L"OuterEdgeColor").decrypt());
            rim_power = (string::string_to_name)(crypt(L"Rim_Power").decrypt());
            Rim_Multiply = (string::string_to_name)(crypt(L"Rim_Multiply").decrypt());
            OuterEdgeThickness = (string::string_to_name)(crypt(L"OuterEdgeThickness").decrypt());
            boundingBoxParam = string::string_to_name(L"BoundingBox");

        }

        uobject* visible_material = uobject::StaticLoadObject(crypt(L"/Game/Characters/BountyHunter/S0/VFX/Materials/BountyHunterReveal_MI.BountyHunterReveal_MI").decrypt());
        uobject* invisible_material = uobject::StaticLoadObject(crypt(L"/Game/VFX/Materials/HunterReveal_MI.HunterReveal_MI").decrypt());
        if (visible_material && invisible_material) {

            UPrimitiveComponent* chamMesh = memory::read<UPrimitiveComponent*>(uintptr_t(actor) + offsets::Mesh1P_Offset);
            UPrimitiveComponent* mesh_cosmetic_3p = memory::read<UPrimitiveComponent*>(uintptr_t(actor) + offsets::MeshOverlay1P_Offset);
            if (chamMesh) {
                int count = chamMesh->get_num_materials();
                for (int i = 0; i < count; i++)
                {
                    auto dynMat = chamMesh->create_and_set_material_instance_dynamic_from_material(i, visible_material);
                    if (!dynMat)
                        continue;

                    auto matInst = dynMat->cast<UMaterialInstanceDynamic>();
                    if (!matInst || !memory::IsValidPointer((uintptr_t)matInst))
                        continue;

                    matInst->set_vector_parameter_value2(center_edge_color_name,
                        flinearcolor(0.0f, 0.0f, 0.29f, 10.0f));

                    matInst->set_vector_parameter_value2(inner_edge_color_name,
                        flinearcolor(0.69f, 0.63f, 0.60f, 10.0f));

                    matInst->set_vector_parameter_value2(outer_edge_color_name,
                        flinearcolor(0.0f, 0.62f, 0.59f, 10.0f));

                    matInst->set_scalar_parameter_value2(rim_power, 3.0f);
                    matInst->set_scalar_parameter_value2(Rim_Multiply, 2.0f);
                    matInst->set_scalar_parameter_value2(OuterEdgeThickness, 0.4f);

                    matInst->set_scalar_parameter_value2(boundingBoxParam, 4097);

                }
            }

            if (mesh_cosmetic_3p) {
                int count = mesh_cosmetic_3p->get_num_materials();

                for (int i = 0; i < count; i++)
                {
                    auto dynMat = mesh_cosmetic_3p->create_and_set_material_instance_dynamic_from_material(i, visible_material);
                    if (!dynMat)
                        continue;

                    auto matInst = dynMat->cast<UMaterialInstanceDynamic>();
                    if (!matInst || !memory::IsValidPointer((uintptr_t)matInst))
                        continue;

                    matInst->set_vector_parameter_value2(center_edge_color_name,
                        flinearcolor(0.0f, 0.0f, 0.29f, 10.0f));

                    matInst->set_vector_parameter_value2(inner_edge_color_name,
                        flinearcolor(0.69f, 0.63f, 0.60f, 10.0f));

                    matInst->set_vector_parameter_value2(outer_edge_color_name,
                        flinearcolor(0.0f, 0.62f, 0.59f, 10.0f));

                    matInst->set_scalar_parameter_value2(rim_power, 3.0f);
                    matInst->set_scalar_parameter_value2(Rim_Multiply, 2.0f);
                    matInst->set_scalar_parameter_value2(OuterEdgeThickness, 0.4f);
                    matInst->set_scalar_parameter_value2(boundingBoxParam, 4097);

                }
            }
        }
    }

   

    void moscawireframe(ashootercharacter* local_player)
    {
        
        if (!local_player) return;
        
        uobject* crystal_material = uobject::StaticLoadObject(
            crypt(L"/Game/Equippables/_Core/Materials/Weapon_Holo_Translucent_Mi").decrypt());
        if (!crystal_material) return;

        fname metallic_add_name = string::string_to_name(crypt(L"Metallic Add").decrypt());
        fname roughness_add_name = string::string_to_name(crypt(L"Roughness Add").decrypt());
        fname emissive_boost_name = string::string_to_name(crypt(L"Emissive Boost").decrypt());
        fname spec_tile_name = string::string_to_name(crypt(L"SpecTile").decrypt());
        fname fresnel_exponent_name = string::string_to_name(crypt(L"Fresnel Exponent").decrypt());
        fname ao_clamp_name = string::string_to_name(crypt(L"AO Clamp").decrypt());
        fname opacity_name = string::string_to_name(crypt(L"Opacity").decrypt());
        fname fresnel_power_name = string::string_to_name(crypt(L"FresnelPower").decrypt());
        fname basecolor_name = string::string_to_name(crypt(L"BaseColor").decrypt());
        fname diffuse_name = string::string_to_name(crypt(L"Diffuse").decrypt());
        fname spec_color_name = string::string_to_name(crypt(L"Spec Color").decrypt());
        fname spec_name = string::string_to_name(crypt(L"Spec").decrypt());
        fname use_normal_map_name = string::string_to_name(crypt(L"Use Normal Map").decrypt());
        fname use_diffuse_color_name = string::string_to_name(crypt(L"Use Diffuse Color").decrypt());

        float metallic_add = 0.0f;
        float roughness_add = 0.5f;
        float emissive_boost = globals::misc::HandChamsGlow / 10.0f;
        float spec_tile = 1.0f;
        float fresnel_exponent = 3.0f;
        float ao_clamp = 0.0f;
        float opacity = 1.0f;
        float fresnel_power = globals::misc::AlphaBasePower;

        float R = globals::misc::Red;
        float G = globals::misc::Green;
        float B = globals::misc::Blue;
        flinearcolor inner_color(
            R * 0.0001f,  
            G * 0.0001f,
            B * 0.0001f,
            0.05f 
        );

        flinearcolor basecolor(R / 255.0f, G / 255.0f, B / 255.0f, 1.0f);
        flinearcolor spec_color(R / 255.0f, G / 255.0f, B / 255.0f, 1.0f);

        auto Brighten = [](float v, float factor) -> float {
            v *= factor;
            return (v > 1.0f) ? 1.0f : v;
            };
        float factor = 3.0f; 
        flinearcolor fresnel_color(
            Brighten(R / 255.0f, factor),
            Brighten(G / 255.0f, factor),
            Brighten(B / 255.0f, factor),
            1.0f
        );

        auto apply_material = [&](uskeletalmeshcomponent* mesh) {
            if (!mesh) return;

            int num_materials = mesh->get_num_materials();
            for (int i = 0; i < num_materials; i++) {
                uobject* mat_instance = mesh->create_and_set_material_instance_dynamic_from_material(i, crystal_material);
                if (!mat_instance) continue;

                UMaterialInstanceDynamic* mid = mat_instance->cast<UMaterialInstanceDynamic>();
                if (!mid) continue;

                mid->set_vector_parameter_value2(basecolor_name, inner_color);
                mid->set_vector_parameter_value2(diffuse_name, inner_color);

                mid->set_vector_parameter_value2(spec_name, fresnel_color);
                mid->set_vector_parameter_value2(spec_color_name, fresnel_color);

                mid->set_scalar_parameter_value2(metallic_add_name, metallic_add);
                mid->set_scalar_parameter_value2(roughness_add_name, roughness_add);
                mid->set_scalar_parameter_value2(emissive_boost_name, emissive_boost);
                mid->set_scalar_parameter_value2(spec_tile_name, spec_tile);
                mid->set_scalar_parameter_value2(fresnel_exponent_name, fresnel_exponent);
                mid->set_scalar_parameter_value2(ao_clamp_name, ao_clamp);
                mid->set_scalar_parameter_value2(opacity_name, opacity);
                mid->set_scalar_parameter_value2(fresnel_power_name, fresnel_power);
                mid->set_scalar_parameter_value2(use_diffuse_color_name, 1.0f);
                mid->set_scalar_parameter_value2(use_normal_map_name, 1.0f);
            }
            };

            apply_material(local_player->GetMesh1P());
            apply_material(local_player->GetOverlayMesh1P());
    }

    void moscawireframe3P(ashootercharacter* local_player)
    {
        
        if (!local_player) return;

        uobject* crystal_material = uobject::StaticLoadObject(
            crypt(L"/Game/Equippables/_Core/Materials/Weapon_Holo_Translucent_Mi").decrypt());
        if (!crystal_material) return;

        fname metallic_add_name = string::string_to_name(crypt(L"Metallic Add").decrypt());
        fname roughness_add_name = string::string_to_name(crypt(L"Roughness Add").decrypt());
        fname emissive_boost_name = string::string_to_name(crypt(L"Emissive Boost").decrypt());
        fname spec_tile_name = string::string_to_name(crypt(L"SpecTile").decrypt());
        fname fresnel_exponent_name = string::string_to_name(crypt(L"Fresnel Exponent").decrypt());
        fname ao_clamp_name = string::string_to_name(crypt(L"AO Clamp").decrypt());
        fname opacity_name = string::string_to_name(crypt(L"Opacity").decrypt());
        fname fresnel_power_name = string::string_to_name(crypt(L"FresnelPower").decrypt());
        fname basecolor_name = string::string_to_name(crypt(L"BaseColor").decrypt());
        fname diffuse_name = string::string_to_name(crypt(L"Diffuse").decrypt());
        fname spec_color_name = string::string_to_name(crypt(L"Spec Color").decrypt());
        fname spec_name = string::string_to_name(crypt(L"Spec").decrypt());
        fname use_normal_map_name = string::string_to_name(crypt(L"Use Normal Map").decrypt());
        fname use_diffuse_color_name = string::string_to_name(crypt(L"Use Diffuse Color").decrypt());

        float metallic_add = 0.0f;
        float roughness_add = 0.5f;
        float emissive_boost = globals::misc::HandChamsGlow / 10.0f;
        float spec_tile = 1.0f;
        float fresnel_exponent = 3.0f;
        float ao_clamp = 0.0f;
        float opacity = 1.0f;
        float fresnel_power = globals::misc::AlphaBasePower;

        float R = globals::misc::Red;
        float G = globals::misc::Green;
        float B = globals::misc::Blue;
        flinearcolor inner_color(
            R * 0.0001f,
            G * 0.0001f,
            B * 0.0001f,
            0.05f
        );

        flinearcolor basecolor(R / 255.0f, G / 255.0f, B / 255.0f, 1.0f);
        flinearcolor spec_color(R / 255.0f, G / 255.0f, B / 255.0f, 1.0f);

        auto Brighten = [](float v, float factor) -> float {
            v *= factor;
            return (v > 1.0f) ? 1.0f : v;
            };
        float factor = 3.0f;
        flinearcolor fresnel_color(
            Brighten(R / 255.0f, factor),
            Brighten(G / 255.0f, factor),
            Brighten(B / 255.0f, factor),
            1.0f
        );

        auto apply_material = [&](uskeletalmeshcomponent* mesh) {
            if (!mesh) return;

            int num_materials = mesh->get_num_materials();
            for (int i = 0; i < num_materials; i++) {
                uobject* mat_instance = mesh->create_and_set_material_instance_dynamic_from_material(i, crystal_material);
                if (!mat_instance) continue;

                UMaterialInstanceDynamic* mid = mat_instance->cast<UMaterialInstanceDynamic>();
                if (!mid) continue;

                mid->set_vector_parameter_value2(basecolor_name, inner_color);
                mid->set_vector_parameter_value2(diffuse_name, inner_color);

                mid->set_vector_parameter_value2(spec_name, fresnel_color);
                mid->set_vector_parameter_value2(spec_color_name, fresnel_color);

                mid->set_scalar_parameter_value2(metallic_add_name, metallic_add);
                mid->set_scalar_parameter_value2(roughness_add_name, roughness_add);
                mid->set_scalar_parameter_value2(emissive_boost_name, emissive_boost);
                mid->set_scalar_parameter_value2(spec_tile_name, spec_tile);
                mid->set_scalar_parameter_value2(fresnel_exponent_name, fresnel_exponent);
                mid->set_scalar_parameter_value2(ao_clamp_name, ao_clamp);
                mid->set_scalar_parameter_value2(opacity_name, opacity);
                mid->set_scalar_parameter_value2(fresnel_power_name, fresnel_power);
                mid->set_scalar_parameter_value2(use_diffuse_color_name, 1.0f);
                mid->set_scalar_parameter_value2(use_normal_map_name, 1.0f);
            }
            };

        if (local_player->GetCosmesticMesh3P() || local_player->get_mesh()){
            apply_material(local_player->GetCosmesticMesh3P());
            apply_material(local_player->get_mesh());
        }
     
    }


    void galaxychamsSelf3p(ashootercharacter* actor)
    {
        static fname center_edge_color_name, inner_edge_color_name, outer_edge_color_name, rim_power, Rim_Multiply, OuterEdgeThickness;
        if (!center_edge_color_name.comparison_index) {
            center_edge_color_name = (string::string_to_name)(crypt(L"CenterEdgeColor").decrypt());
            inner_edge_color_name = (string::string_to_name)(crypt(L"InnerEdgeColor").decrypt());
            outer_edge_color_name = (string::string_to_name)(crypt(L"OuterEdgeColor").decrypt());
            rim_power = (string::string_to_name)(crypt(L"Rim_Power").decrypt());
            Rim_Multiply = (string::string_to_name)(crypt(L"Rim_Multiply").decrypt());
            OuterEdgeThickness = (string::string_to_name)(crypt(L"OuterEdgeThickness").decrypt());
        }

        uobject* visible_material = uobject::StaticLoadObject(crypt(L"/Game/Characters/BountyHunter/S0/VFX/Materials/BountyHunterReveal_MI.BountyHunterReveal_MI").decrypt());
        uobject* invisible_material = uobject::StaticLoadObject(crypt(L"/Game/VFX/Materials/HunterReveal_MI.HunterReveal_MI").decrypt());
        if (visible_material && invisible_material) {

            UPrimitiveComponent* chamMesh = memory::read<UPrimitiveComponent*>(uintptr_t(actor) + 0x4F0);
            UPrimitiveComponent* mesh_cosmetic_3p = memory::read<UPrimitiveComponent*>(uintptr_t(actor) + offsets::Mesh3P_Offset);
            if (chamMesh) {
                int count = chamMesh->get_num_materials();
                for (int i = 0; i < count; i++)
                {
                    auto dynMat = chamMesh->create_and_set_material_instance_dynamic_from_material(i, visible_material);
                    if (!dynMat)
                        continue;

                    auto matInst = dynMat->cast<UMaterialInstanceDynamic>();
                    if (!matInst || !memory::IsValidPointer((uintptr_t)matInst))
                        continue;

                    matInst->set_vector_parameter_value2(center_edge_color_name,
                        flinearcolor(0.0f, 0.0f, 0.29f, 10.0f));

                    matInst->set_vector_parameter_value2(inner_edge_color_name,
                        flinearcolor(0.69f, 0.63f, 0.60f, 10.0f));

                    matInst->set_vector_parameter_value2(outer_edge_color_name,
                        flinearcolor(0.0f, 0.62f, 0.59f, 10.0f));

                    matInst->set_scalar_parameter_value2(rim_power, 3.0f);
                    matInst->set_scalar_parameter_value2(Rim_Multiply, 2.0f);
                    matInst->set_scalar_parameter_value2(OuterEdgeThickness, 0.4f);
                }
            }

            if (mesh_cosmetic_3p) {
                int count = mesh_cosmetic_3p->get_num_materials();

                for (int i = 0; i < count; i++)
                {
                    auto dynMat = mesh_cosmetic_3p->create_and_set_material_instance_dynamic_from_material(i, visible_material);
                    if (!dynMat)
                        continue;

                    auto matInst = dynMat->cast<UMaterialInstanceDynamic>();
                    if (!matInst || !memory::IsValidPointer((uintptr_t)matInst))
                        continue;

                    matInst->set_vector_parameter_value2(center_edge_color_name,
                        flinearcolor(0.0f, 0.0f, 0.29f, 10.0f));

                    matInst->set_vector_parameter_value2(inner_edge_color_name,
                        flinearcolor(0.69f, 0.63f, 0.60f, 10.0f));

                    matInst->set_vector_parameter_value2(outer_edge_color_name,
                        flinearcolor(0.0f, 0.62f, 0.59f, 10.0f));

                    matInst->set_scalar_parameter_value2(rim_power, 3.0f);
                    matInst->set_scalar_parameter_value2(Rim_Multiply, 2.0f);
                    matInst->set_scalar_parameter_value2(OuterEdgeThickness, 0.4f);
                }
            }
        }
    }

    void galaxychamEnemy(ashootercharacter* actor)
    {
        static fname center_edge_color_name, inner_edge_color_name, outer_edge_color_name, rim_power, Rim_Multiply, OuterEdgeThickness;
        if (!center_edge_color_name.comparison_index) {
            center_edge_color_name = (string::string_to_name)(crypt(L"CenterEdgeColor").decrypt());
            inner_edge_color_name = (string::string_to_name)(crypt(L"InnerEdgeColor").decrypt());
            outer_edge_color_name = (string::string_to_name)(crypt(L"OuterEdgeColor").decrypt());
            rim_power = (string::string_to_name)(crypt(L"Rim_Power").decrypt());
            Rim_Multiply = (string::string_to_name)(crypt(L"Rim_Multiply").decrypt());
            OuterEdgeThickness = (string::string_to_name)(crypt(L"OuterEdgeThickness").decrypt());
        }

        uobject* visible_material = uobject::StaticLoadObject(crypt(L"/Game/Characters/BountyHunter/S0/VFX/Materials/BountyHunterReveal_MI.BountyHunterReveal_MI").decrypt());
        uobject* invisible_material = uobject::StaticLoadObject(crypt(L"/Game/VFX/Materials/HunterReveal_MI.HunterReveal_MI").decrypt());
        if (visible_material && invisible_material) {

            UPrimitiveComponent* chamMesh = memory::read<UPrimitiveComponent*>(uintptr_t(actor) + 0x4F0);
            UPrimitiveComponent* mesh_cosmetic_3p = memory::read<UPrimitiveComponent*>(uintptr_t(actor) + offsets::Mesh3P_Offset);
            if (chamMesh) {
                int count = chamMesh->get_num_materials();
                for (int i = 0; i < count; i++)
                {
                    auto dynMat = chamMesh->create_and_set_material_instance_dynamic_from_material(i, visible_material);
                    if (!dynMat)
                        continue;

                    auto matInst = dynMat->cast<UMaterialInstanceDynamic>();
                    if (!matInst || !memory::IsValidPointer((uintptr_t)matInst))
                        continue;

                    matInst->set_vector_parameter_value2(center_edge_color_name,
                        flinearcolor(0.0f, 0.0f, 0.29f, 10.0f));

                    matInst->set_vector_parameter_value2(inner_edge_color_name,
                        flinearcolor(0.69f, 0.63f, 0.60f, 10.0f));

                    matInst->set_vector_parameter_value2(outer_edge_color_name,
                        flinearcolor(0.0f, 0.62f, 0.59f, 10.0f));

                    matInst->set_scalar_parameter_value2(rim_power, 3.0f);
                    matInst->set_scalar_parameter_value2(Rim_Multiply, 2.0f);
                    matInst->set_scalar_parameter_value2(OuterEdgeThickness, 0.4f);
                }
            }

            if (mesh_cosmetic_3p) {
                int count = mesh_cosmetic_3p->get_num_materials();

                for (int i = 0; i < count; i++)
                {
                    auto dynMat = mesh_cosmetic_3p->create_and_set_material_instance_dynamic_from_material(i, visible_material);
                    if (!dynMat)
                        continue;

                    auto matInst = dynMat->cast<UMaterialInstanceDynamic>();
                    if (!matInst || !memory::IsValidPointer((uintptr_t)matInst))
                        continue;

                    matInst->set_vector_parameter_value2(center_edge_color_name,
                        flinearcolor(0.0f, 0.0f, 0.29f, 10.0f));

                    matInst->set_vector_parameter_value2(inner_edge_color_name,
                        flinearcolor(0.69f, 0.63f, 0.60f, 10.0f));

                    matInst->set_vector_parameter_value2(outer_edge_color_name,
                        flinearcolor(0.0f, 0.62f, 0.59f, 10.0f));

                    matInst->set_scalar_parameter_value2(rim_power, 3.0f);
                    matInst->set_scalar_parameter_value2(Rim_Multiply, 2.0f);
                    matInst->set_scalar_parameter_value2(OuterEdgeThickness, 0.4f);
                }
            }
        }
    }


    void meshnigger1p(ashootercharacter* actor) {
        auto is_visible = controller->line_of_sight(actor);
        float glowIntensity = globals::misc::FadeChamsGlow;
        flinearcolor centerEdgeColor, innerEdgeColor, outerEdgeColor;

        if (globals::visuals::visiblepreset == 0) // Default Green
        {
            globals::misc::CenterEdgeR_Visible = 0.0f;
            globals::misc::CenterEdgeG_Visible = 0.01f;
            globals::misc::CenterEdgeB_Visible = 0.0f;

            globals::misc::InnerEdgeR_Visible = 0.0f;
            globals::misc::InnerEdgeG_Visible = 0.1f;
            globals::misc::InnerEdgeB_Visible = 0.0f;

            globals::misc::OuterEdgeR_Visible = 0.0f;
            globals::misc::OuterEdgeG_Visible = 1.0f;
            globals::misc::OuterEdgeB_Visible = 0.0f;
        }
        else if (globals::visuals::visiblepreset == 1) // Toxic Glow
        {
            globals::misc::CenterEdgeR_Visible = 0.0f;
            globals::misc::CenterEdgeG_Visible = 0.4f;
            globals::misc::CenterEdgeB_Visible = 0.2f;

            globals::misc::InnerEdgeR_Visible = 0.0f;
            globals::misc::InnerEdgeG_Visible = 0.7f;
            globals::misc::InnerEdgeB_Visible = 0.3f;

            globals::misc::OuterEdgeR_Visible = 0.1f;
            globals::misc::OuterEdgeG_Visible = 1.0f;
            globals::misc::OuterEdgeB_Visible = 0.4f;
        }
        else if (globals::visuals::visiblepreset == 2) // Neon Ice
        {
            globals::misc::CenterEdgeR_Visible = 0.0f;
            globals::misc::CenterEdgeG_Visible = 0.8f;
            globals::misc::CenterEdgeB_Visible = 1.0f;

            globals::misc::InnerEdgeR_Visible = 0.0f;
            globals::misc::InnerEdgeG_Visible = 0.6f;
            globals::misc::InnerEdgeB_Visible = 1.0f;

            globals::misc::OuterEdgeR_Visible = 0.1f;
            globals::misc::OuterEdgeG_Visible = 1.0f;
            globals::misc::OuterEdgeB_Visible = 1.0f;
        }
        else if (globals::visuals::visiblepreset == 3) // Solar Flare
        {
            globals::misc::CenterEdgeR_Visible = 0.6f;
            globals::misc::CenterEdgeG_Visible = 0.5f;
            globals::misc::CenterEdgeB_Visible = 0.0f;

            globals::misc::InnerEdgeR_Visible = 0.9f;
            globals::misc::InnerEdgeG_Visible = 0.8f;
            globals::misc::InnerEdgeB_Visible = 0.2f;

            globals::misc::OuterEdgeR_Visible = 1.0f;
            globals::misc::OuterEdgeG_Visible = 1.0f;
            globals::misc::OuterEdgeB_Visible = 0.4f;
        }
        else if (globals::visuals::visiblepreset == 4) // Void Spark
        {
            globals::misc::CenterEdgeR_Visible = 0.4f;
            globals::misc::CenterEdgeG_Visible = 0.0f;
            globals::misc::CenterEdgeB_Visible = 0.6f;

            globals::misc::InnerEdgeR_Visible = 0.6f;
            globals::misc::InnerEdgeG_Visible = 0.2f;
            globals::misc::InnerEdgeB_Visible = 1.0f;

            globals::misc::OuterEdgeR_Visible = 0.9f;
            globals::misc::OuterEdgeG_Visible = 0.3f;
            globals::misc::OuterEdgeB_Visible = 1.0f;
        }
        else if (globals::visuals::visiblepreset == 5) // Ghost White
        {
            globals::misc::CenterEdgeR_Visible = 0.7f;
            globals::misc::CenterEdgeG_Visible = 0.7f;
            globals::misc::CenterEdgeB_Visible = 0.7f;

            globals::misc::InnerEdgeR_Visible = 0.9f;
            globals::misc::InnerEdgeG_Visible = 0.9f;
            globals::misc::InnerEdgeB_Visible = 0.9f;

            globals::misc::OuterEdgeR_Visible = 1.0f;
            globals::misc::OuterEdgeG_Visible = 1.0f;
            globals::misc::OuterEdgeB_Visible = 1.0f;
        }
        else if (globals::visuals::visiblepreset == 6) // Aurora Dream
        {
            globals::misc::CenterEdgeR_Visible = 0.2f;
            globals::misc::CenterEdgeG_Visible = 0.4f;
            globals::misc::CenterEdgeB_Visible = 0.8f;

            globals::misc::InnerEdgeR_Visible = 0.4f;
            globals::misc::InnerEdgeG_Visible = 0.6f;
            globals::misc::InnerEdgeB_Visible = 0.9f;

            globals::misc::OuterEdgeR_Visible = 0.6f;
            globals::misc::OuterEdgeG_Visible = 0.8f;
            globals::misc::OuterEdgeB_Visible = 1.0f;
        }
        else if (globals::visuals::visiblepreset == 7) // Cyber Ember
        {
            globals::misc::CenterEdgeR_Visible = 1.0f;
            globals::misc::CenterEdgeG_Visible = 0.3f;
            globals::misc::CenterEdgeB_Visible = 0.0f;

            globals::misc::InnerEdgeR_Visible = 1.0f;
            globals::misc::InnerEdgeG_Visible = 0.5f;
            globals::misc::InnerEdgeB_Visible = 0.1f;

            globals::misc::OuterEdgeR_Visible = 1.0f;
            globals::misc::OuterEdgeG_Visible = 0.7f;
            globals::misc::OuterEdgeB_Visible = 0.2f;
        }
        else if (globals::visuals::visiblepreset == 8) // Lunar Fade
        {
            globals::misc::CenterEdgeR_Visible = 0.6f;
            globals::misc::CenterEdgeG_Visible = 0.6f;
            globals::misc::CenterEdgeB_Visible = 0.9f;

            globals::misc::InnerEdgeR_Visible = 0.7f;
            globals::misc::InnerEdgeG_Visible = 0.7f;
            globals::misc::InnerEdgeB_Visible = 1.0f;

            globals::misc::OuterEdgeR_Visible = 0.9f;
            globals::misc::OuterEdgeG_Visible = 0.9f;
            globals::misc::OuterEdgeB_Visible = 1.0f;
        }
        else if (globals::visuals::visiblepreset == 9) // Mystic Flame
        {
            globals::misc::CenterEdgeR_Visible = 0.6f;
            globals::misc::CenterEdgeG_Visible = 0.2f;
            globals::misc::CenterEdgeB_Visible = 0.6f;

            globals::misc::InnerEdgeR_Visible = 0.8f;
            globals::misc::InnerEdgeG_Visible = 0.4f;
            globals::misc::InnerEdgeB_Visible = 0.9f;

            globals::misc::OuterEdgeR_Visible = 1.0f;
            globals::misc::OuterEdgeG_Visible = 0.6f;
            globals::misc::OuterEdgeB_Visible = 1.0f;
        }
        else if (globals::visuals::visiblepreset == 10) // Arc Light
        {
            globals::misc::CenterEdgeR_Visible = 0.0f;
            globals::misc::CenterEdgeG_Visible = 0.9f;
            globals::misc::CenterEdgeB_Visible = 1.0f;

            globals::misc::InnerEdgeR_Visible = 0.2f;
            globals::misc::InnerEdgeG_Visible = 1.0f;
            globals::misc::InnerEdgeB_Visible = 1.0f;

            globals::misc::OuterEdgeR_Visible = 0.6f;
            globals::misc::OuterEdgeG_Visible = 1.0f;
            globals::misc::OuterEdgeB_Visible = 1.0f;
        }
        else if (globals::visuals::visiblepreset == 11) // Burning Core
        {
            globals::misc::CenterEdgeR_Visible = 1.0f;
            globals::misc::CenterEdgeG_Visible = 0.2f;
            globals::misc::CenterEdgeB_Visible = 0.0f;

            globals::misc::InnerEdgeR_Visible = 1.0f;
            globals::misc::InnerEdgeG_Visible = 0.4f;
            globals::misc::InnerEdgeB_Visible = 0.1f;

            globals::misc::OuterEdgeR_Visible = 1.0f;
            globals::misc::OuterEdgeG_Visible = 0.6f;
            globals::misc::OuterEdgeB_Visible = 0.2f;
        }
        else if (globals::visuals::visiblepreset == 12) // Deep Ocean
        {
            globals::misc::CenterEdgeR_Visible = 0.0f;
            globals::misc::CenterEdgeG_Visible = 0.3f;
            globals::misc::CenterEdgeB_Visible = 0.5f;

            globals::misc::InnerEdgeR_Visible = 0.0f;
            globals::misc::InnerEdgeG_Visible = 0.5f;
            globals::misc::InnerEdgeB_Visible = 0.7f;

            globals::misc::OuterEdgeR_Visible = 0.0f;
            globals::misc::OuterEdgeG_Visible = 0.8f;
            globals::misc::OuterEdgeB_Visible = 1.0f;
        }
        else if (globals::visuals::visiblepreset == 13) // Crystal Edge
        {
            globals::misc::CenterEdgeR_Visible = 0.5f;
            globals::misc::CenterEdgeG_Visible = 0.8f;
            globals::misc::CenterEdgeB_Visible = 1.0f;

            globals::misc::InnerEdgeR_Visible = 0.7f;
            globals::misc::InnerEdgeG_Visible = 0.9f;
            globals::misc::InnerEdgeB_Visible = 1.0f;

            globals::misc::OuterEdgeR_Visible = 1.0f;
            globals::misc::OuterEdgeG_Visible = 1.0f;
            globals::misc::OuterEdgeB_Visible = 1.0f;
        }
        else if (globals::visuals::visiblepreset == 14) // Magma Burn
        {
            globals::misc::CenterEdgeR_Visible = 1.0f;
            globals::misc::CenterEdgeG_Visible = 0.2f;
            globals::misc::CenterEdgeB_Visible = 0.0f;

            globals::misc::InnerEdgeR_Visible = 1.0f;
            globals::misc::InnerEdgeG_Visible = 0.5f;
            globals::misc::InnerEdgeB_Visible = 0.2f;

            globals::misc::OuterEdgeR_Visible = 1.0f;
            globals::misc::OuterEdgeG_Visible = 0.8f;
            globals::misc::OuterEdgeB_Visible = 0.4f;
        }

        if (globals::visuals::invisiblepreset == 0) // Default Red
        {
            globals::misc::CenterEdgeR_Invisible = 0.01f;
            globals::misc::CenterEdgeG_Invisible = 0.0f;
            globals::misc::CenterEdgeB_Invisible = 0.0f;

            globals::misc::InnerEdgeR_Invisible = 0.1f;
            globals::misc::InnerEdgeG_Invisible = 0.0f;
            globals::misc::InnerEdgeB_Invisible = 0.0f;

            globals::misc::OuterEdgeR_Invisible = 1.0f;
            globals::misc::OuterEdgeG_Invisible = 0.0f;
            globals::misc::OuterEdgeB_Invisible = 0.0f;
        }
        else if (globals::visuals::invisiblepreset == 1) // Inferno
        {
            globals::misc::CenterEdgeR_Invisible = 0.6f;
            globals::misc::CenterEdgeG_Invisible = 0.1f;
            globals::misc::CenterEdgeB_Invisible = 0.0f;

            globals::misc::InnerEdgeR_Invisible = 0.8f;
            globals::misc::InnerEdgeG_Invisible = 0.2f;
            globals::misc::InnerEdgeB_Invisible = 0.0f;

            globals::misc::OuterEdgeR_Invisible = 1.0f;
            globals::misc::OuterEdgeG_Invisible = 0.3f;
            globals::misc::OuterEdgeB_Invisible = 0.0f;
        }
        else if (globals::visuals::invisiblepreset == 2) // Phantom Pulse
        {
            globals::misc::CenterEdgeR_Invisible = 0.4f;
            globals::misc::CenterEdgeG_Invisible = 0.0f;
            globals::misc::CenterEdgeB_Invisible = 0.4f;

            globals::misc::InnerEdgeR_Invisible = 0.6f;
            globals::misc::InnerEdgeG_Invisible = 0.0f;
            globals::misc::InnerEdgeB_Invisible = 0.7f;

            globals::misc::OuterEdgeR_Invisible = 1.0f;
            globals::misc::OuterEdgeG_Invisible = 0.0f;
            globals::misc::OuterEdgeB_Invisible = 1.0f;
        }
        else if (globals::visuals::invisiblepreset == 3) // Voltage Spike
        {
            globals::misc::CenterEdgeR_Invisible = 0.2f;
            globals::misc::CenterEdgeG_Invisible = 0.0f;
            globals::misc::CenterEdgeB_Invisible = 0.5f;

            globals::misc::InnerEdgeR_Invisible = 0.3f;
            globals::misc::InnerEdgeG_Invisible = 0.0f;
            globals::misc::InnerEdgeB_Invisible = 0.9f;

            globals::misc::OuterEdgeR_Invisible = 0.6f;
            globals::misc::OuterEdgeG_Invisible = 0.0f;
            globals::misc::OuterEdgeB_Invisible = 1.0f;
        }
        else if (globals::visuals::invisiblepreset == 4) // Frostbite
        {
            globals::misc::CenterEdgeR_Invisible = 0.0f;
            globals::misc::CenterEdgeG_Invisible = 0.3f;
            globals::misc::CenterEdgeB_Invisible = 0.6f;

            globals::misc::InnerEdgeR_Invisible = 0.0f;
            globals::misc::InnerEdgeG_Invisible = 0.6f;
            globals::misc::InnerEdgeB_Invisible = 1.0f;

            globals::misc::OuterEdgeR_Invisible = 0.3f;
            globals::misc::OuterEdgeG_Invisible = 1.0f;
            globals::misc::OuterEdgeB_Invisible = 1.0f;
        }
        else if (globals::visuals::invisiblepreset == 5) // Undead Mist
        {
            globals::misc::CenterEdgeR_Invisible = 0.2f;
            globals::misc::CenterEdgeG_Invisible = 0.6f;
            globals::misc::CenterEdgeB_Invisible = 0.2f;

            globals::misc::InnerEdgeR_Invisible = 0.4f;
            globals::misc::InnerEdgeG_Invisible = 0.3f;
            globals::misc::InnerEdgeB_Invisible = 0.3f;

            globals::misc::OuterEdgeR_Invisible = 0.8f;
            globals::misc::OuterEdgeG_Invisible = 0.2f;
            globals::misc::OuterEdgeB_Invisible = 0.4f;
        }
        else if (globals::visuals::invisiblepreset == 6) // Blood Moon
        {
            globals::misc::CenterEdgeR_Invisible = 0.3f;
            globals::misc::CenterEdgeG_Invisible = 0.0f;
            globals::misc::CenterEdgeB_Invisible = 0.0f;

            globals::misc::InnerEdgeR_Invisible = 0.6f;
            globals::misc::InnerEdgeG_Invisible = 0.0f;
            globals::misc::InnerEdgeB_Invisible = 0.0f;

            globals::misc::OuterEdgeR_Invisible = 1.0f;
            globals::misc::OuterEdgeG_Invisible = 0.0f;
            globals::misc::OuterEdgeB_Invisible = 0.1f;
        }
        else if (globals::visuals::invisiblepreset == 7) // Spectral Veil
        {
            globals::misc::CenterEdgeR_Invisible = 0.2f;
            globals::misc::CenterEdgeG_Invisible = 0.2f;
            globals::misc::CenterEdgeB_Invisible = 0.5f;

            globals::misc::InnerEdgeR_Invisible = 0.3f;
            globals::misc::InnerEdgeG_Invisible = 0.3f;
            globals::misc::InnerEdgeB_Invisible = 0.7f;

            globals::misc::OuterEdgeR_Invisible = 0.5f;
            globals::misc::OuterEdgeG_Invisible = 0.5f;
            globals::misc::OuterEdgeB_Invisible = 1.0f;
        }
        else if (globals::visuals::invisiblepreset == 8) // Grave Ember
        {
            globals::misc::CenterEdgeR_Invisible = 0.5f;
            globals::misc::CenterEdgeG_Invisible = 0.2f;
            globals::misc::CenterEdgeB_Invisible = 0.0f;

            globals::misc::InnerEdgeR_Invisible = 0.7f;
            globals::misc::InnerEdgeG_Invisible = 0.3f;
            globals::misc::InnerEdgeB_Invisible = 0.0f;

            globals::misc::OuterEdgeR_Invisible = 1.0f;
            globals::misc::OuterEdgeG_Invisible = 0.5f;
            globals::misc::OuterEdgeB_Invisible = 0.2f;
        }
        else if (globals::visuals::invisiblepreset == 9) // Arc Phantom
        {
            globals::misc::CenterEdgeR_Invisible = 0.0f;
            globals::misc::CenterEdgeG_Invisible = 0.3f;
            globals::misc::CenterEdgeB_Invisible = 0.5f;

            globals::misc::InnerEdgeR_Invisible = 0.0f;
            globals::misc::InnerEdgeG_Invisible = 0.6f;
            globals::misc::InnerEdgeB_Invisible = 0.9f;

            globals::misc::OuterEdgeR_Invisible = 0.0f;
            globals::misc::OuterEdgeG_Invisible = 0.9f;
            globals::misc::OuterEdgeB_Invisible = 1.0f;
        }
        else if (globals::visuals::invisiblepreset == 10) // Wraithfire
        {
            globals::misc::CenterEdgeR_Invisible = 0.4f;
            globals::misc::CenterEdgeG_Invisible = 0.1f;
            globals::misc::CenterEdgeB_Invisible = 0.5f;

            globals::misc::InnerEdgeR_Invisible = 0.6f;
            globals::misc::InnerEdgeG_Invisible = 0.2f;
            globals::misc::InnerEdgeB_Invisible = 0.8f;

            globals::misc::OuterEdgeR_Invisible = 0.9f;
            globals::misc::OuterEdgeG_Invisible = 0.4f;
            globals::misc::OuterEdgeB_Invisible = 1.0f;
        }
        else if (globals::visuals::invisiblepreset == 11) // Pale Storm
        {
            globals::misc::CenterEdgeR_Invisible = 0.5f;
            globals::misc::CenterEdgeG_Invisible = 0.5f;
            globals::misc::CenterEdgeB_Invisible = 0.6f;

            globals::misc::InnerEdgeR_Invisible = 0.7f;
            globals::misc::InnerEdgeG_Invisible = 0.7f;
            globals::misc::InnerEdgeB_Invisible = 0.9f;

            globals::misc::OuterEdgeR_Invisible = 0.9f;
            globals::misc::OuterEdgeG_Invisible = 0.9f;
            globals::misc::OuterEdgeB_Invisible = 1.0f;
        }
        else if (globals::visuals::invisiblepreset == 12) // Dark Volt
        {
            globals::misc::CenterEdgeR_Invisible = 0.2f;
            globals::misc::CenterEdgeG_Invisible = 0.0f;
            globals::misc::CenterEdgeB_Invisible = 0.4f;

            globals::misc::InnerEdgeR_Invisible = 0.3f;
            globals::misc::InnerEdgeG_Invisible = 0.0f;
            globals::misc::InnerEdgeB_Invisible = 0.7f;

            globals::misc::OuterEdgeR_Invisible = 0.5f;
            globals::misc::OuterEdgeG_Invisible = 0.0f;
            globals::misc::OuterEdgeB_Invisible = 1.0f;
        }
        else if (globals::visuals::invisiblepreset == 13) // Ether Smoke
        {
            globals::misc::CenterEdgeR_Invisible = 0.3f;
            globals::misc::CenterEdgeG_Invisible = 0.3f;
            globals::misc::CenterEdgeB_Invisible = 0.3f;

            globals::misc::InnerEdgeR_Invisible = 0.6f;
            globals::misc::InnerEdgeG_Invisible = 0.6f;
            globals::misc::InnerEdgeB_Invisible = 0.6f;

            globals::misc::OuterEdgeR_Invisible = 0.9f;
            globals::misc::OuterEdgeG_Invisible = 0.9f;
            globals::misc::OuterEdgeB_Invisible = 0.9f;
        }
        else if (globals::visuals::invisiblepreset == 14)
        {
            globals::misc::CenterEdgeR_Invisible = 0.1f;
            globals::misc::CenterEdgeG_Invisible = 0.6f;
            globals::misc::CenterEdgeB_Invisible = 0.3f;

            globals::misc::InnerEdgeR_Invisible = 0.3f;
            globals::misc::InnerEdgeG_Invisible = 0.8f;
            globals::misc::InnerEdgeB_Invisible = 0.5f;

            globals::misc::OuterEdgeR_Invisible = 0.5f;
            globals::misc::OuterEdgeG_Invisible = 1.0f;
            globals::misc::OuterEdgeB_Invisible = 0.7f;
        }




        if (is_visible) {
            centerEdgeColor = flinearcolor(globals::misc::CenterEdgeR_Visible * globals::misc::FadeChamsGlow, globals::misc::CenterEdgeG_Visible * globals::misc::FadeChamsGlow, globals::misc::CenterEdgeB_Visible * globals::misc::FadeChamsGlow, 1.f);
            innerEdgeColor = flinearcolor(globals::misc::InnerEdgeR_Visible * globals::misc::FadeChamsGlow, globals::misc::InnerEdgeG_Visible * globals::misc::FadeChamsGlow, globals::misc::InnerEdgeB_Visible * globals::misc::FadeChamsGlow, 1.f);
            outerEdgeColor = flinearcolor(globals::misc::OuterEdgeR_Visible * globals::misc::FadeChamsGlow, globals::misc::OuterEdgeG_Visible * globals::misc::FadeChamsGlow, globals::misc::OuterEdgeB_Visible * globals::misc::FadeChamsGlow, 1.f);

        }
        else {
            centerEdgeColor = flinearcolor(globals::misc::CenterEdgeR_Invisible * globals::misc::FadeChamsGlow, globals::misc::CenterEdgeG_Invisible * globals::misc::FadeChamsGlow, globals::misc::CenterEdgeB_Invisible * globals::misc::FadeChamsGlow, 1.f);
            innerEdgeColor = flinearcolor(globals::misc::InnerEdgeR_Invisible * globals::misc::FadeChamsGlow, globals::misc::InnerEdgeG_Invisible * globals::misc::FadeChamsGlow, globals::misc::InnerEdgeB_Invisible * globals::misc::FadeChamsGlow, 1.f);
            outerEdgeColor = flinearcolor(globals::misc::OuterEdgeR_Invisible * globals::misc::FadeChamsGlow, globals::misc::OuterEdgeG_Invisible * globals::misc::FadeChamsGlow, globals::misc::OuterEdgeB_Invisible * globals::misc::FadeChamsGlow, 1.f);

        }


        static fname silohuette_color_name, center_edge_color_name, inner_edge_color_name, outer_edge_color_name, glow_intensity_param;
        if (!silohuette_color_name.comparison_index) {
            silohuette_color_name = (string::string_to_name)(crypt(L"SilohuetteColor").decrypt());
            center_edge_color_name = (string::string_to_name)(crypt(L"CenterEdgeColor").decrypt());
            inner_edge_color_name = (string::string_to_name)(crypt(L"InnerEdgeColor").decrypt());
            outer_edge_color_name = (string::string_to_name)(crypt(L"OuterEdgeColor").decrypt());
            glow_intensity_param = (string::string_to_name)(crypt(L"GlowIntensity").decrypt());
        }

        uobject* visible_material = uobject::StaticLoadObject(crypt(L"/Game/Characters/BountyHunter/S0/VFX/Materials/BountyHunterReveal_MI.BountyHunterReveal_MI").decrypt());
        uobject* invisible_material = uobject::StaticLoadObject(crypt(L"/Game/VFX/Materials/HunterReveal_MI.HunterReveal_MI").decrypt());

        if (visible_material && invisible_material)
        {
            if (globals::misc::Outlines == 1 || !is_visible)
            {
                UPrimitiveComponent* chamMesh = memory::read<UPrimitiveComponent*>(uintptr_t(actor) + 0x4F0);

                if (chamMesh) {
                    auto num_materials = chamMesh->get_num_materials();
                    for (int i = 0; i < num_materials; i++) {
                        auto material_instance_dynamic = chamMesh->create_and_set_material_instance_dynamic_from_material(i, is_visible ? visible_material : invisible_material);
                        auto dynCast = material_instance_dynamic->cast<UMaterialInstanceDynamic>();
                        if (!dynCast) continue;

                        dynCast->set_vector_parameter_value2(silohuette_color_name, outerEdgeColor);
                        dynCast->set_vector_parameter_value2(center_edge_color_name, centerEdgeColor);
                        dynCast->set_vector_parameter_value2(inner_edge_color_name, innerEdgeColor);
                        dynCast->set_vector_parameter_value2(outer_edge_color_name, outerEdgeColor);
                        dynCast->set_scalar_parameter_value2(glow_intensity_param, glowIntensity);

                    }
                }

                UPrimitiveComponent* mesh_cosmetic_3p = memory::read<UPrimitiveComponent*>(uintptr_t(actor) + offsets::Mesh3P_Offset);
                if (mesh_cosmetic_3p) {
                    auto num_materials = mesh_cosmetic_3p->get_num_materials();
                    for (int i = 0; i < num_materials; i++) {
                        auto material_instance_dynamic = mesh_cosmetic_3p->create_and_set_material_instance_dynamic_from_material(i, is_visible ? visible_material : invisible_material);
                        auto dynCast = material_instance_dynamic->cast<UMaterialInstanceDynamic>();
                        if (!dynCast) continue;

                        dynCast->set_vector_parameter_value2(silohuette_color_name, outerEdgeColor);
                        dynCast->set_vector_parameter_value2(center_edge_color_name, centerEdgeColor);
                        dynCast->set_vector_parameter_value2(inner_edge_color_name, innerEdgeColor);
                        dynCast->set_vector_parameter_value2(outer_edge_color_name, outerEdgeColor);
                        dynCast->set_scalar_parameter_value2(glow_intensity_param, glowIntensity);

                    }
                }
            }
            else if (globals::misc::Outlines == 2 && is_visible)
            {
                auto mesh = actor->get_mesh();
                if (mesh) {
                    actor->ResetCharacterMaterials_Internal(mesh);
                }

                uskeletalmeshcomponent* mesh_cosmetic_3p = memory::read<uskeletalmeshcomponent*>(uintptr_t(actor) + offsets::Mesh3P_Offset);
                if (mesh_cosmetic_3p) {
                    actor->ResetCharacterMaterials_Internal(mesh_cosmetic_3p);
                }
            }
        }
    }



    void meshp1_material1(ashootercharacter* shooter_character)
    {

        uobject* material = uobject::StaticLoadObject(
            crypt(L"/Game/Equippables/_Core/Materials/SpecialMaterials/Arcade/Arcade_Emissive_Blue_MI.Arcade_Emissive_Blue_MI").decrypt()
        );

        fname first_name = (string::string_to_name)(crypt(L"Base Color").decrypt());
        fname second_name = (string::string_to_name)(crypt(L"Emissive Color").decrypt());

        UPrimitiveComponent* mesh1p = memory::read<UPrimitiveComponent*>(uintptr_t(shooter_character) + offsets::Mesh1P_Offset);

        UPrimitiveComponent* meshOverlay = memory::read<UPrimitiveComponent*>(uintptr_t(shooter_character) + offsets::MeshOverlay1P_Offset);
        UPrimitiveComponent* myselfchams = memory::read<UPrimitiveComponent*>(uintptr_t(shooter_character) + offsets::ThirdpersonCosmestic3p);
        rainbowTimeZHandChams += 0.004f;
        flinearcolor rainbow = BOSSRAINBOMAW(rainbowTimeZHandChams);


        if (globals::visuals::HandChamsRGB) {
            if (mesh1p) {
                auto num_materials = mesh1p->get_num_materials();
                for (int i = 0; i < num_materials; i++) {
                    uobject* material_instance_dynamic = mesh1p->create_and_set_material_instance_dynamic_from_material(i, material);
                    if (material_instance_dynamic) {

                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(first_name, { rainbow.r * 10, rainbow.g * 10, rainbow.b * 10 });
                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(second_name, { rainbow.r * 10, rainbow.g * 10, rainbow.b * 10 });
                    }
                }
            }

            if (meshOverlay) {
                auto num_materials = meshOverlay->get_num_materials();
                for (int i = 0; i < num_materials; i++) {
                    auto material_instance_dynamic = meshOverlay->create_and_set_material_instance_dynamic_from_material(i, material);
                    if (material_instance_dynamic) {
                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(first_name, { rainbow.r * 10, rainbow.g * 10, rainbow.b * 10 });
                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(second_name, { rainbow.r * 10, rainbow.g * 10, rainbow.b * 10 });
                    }
                }
            }

        }
        else {
            if (mesh1p) {
                auto num_materials = mesh1p->get_num_materials();
                for (int i = 0; i < num_materials; i++) {
                    uobject* material_instance_dynamic = mesh1p->create_and_set_material_instance_dynamic_from_material(i, material);
                    if (material_instance_dynamic) {

                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(first_name, { globals::misc::Red * globals::misc::HandChamsGlow, globals::misc::Green * globals::misc::HandChamsGlow, globals::misc::Blue * globals::misc::HandChamsGlow });
                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(second_name, { globals::misc::Red * globals::misc::HandChamsGlow, globals::misc::Green * globals::misc::HandChamsGlow, globals::misc::Blue * globals::misc::HandChamsGlow });
                    }
                } 
            }

            if (meshOverlay) {
                auto num_materials = meshOverlay->get_num_materials();
                for (int i = 0; i < num_materials; i++) {
                    auto material_instance_dynamic = meshOverlay->create_and_set_material_instance_dynamic_from_material(i, material);
                    if (material_instance_dynamic) {
                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(first_name, { globals::misc::Red * globals::misc::HandChamsGlow, globals::misc::Green * globals::misc::HandChamsGlow, globals::misc::Blue * globals::misc::HandChamsGlow });
                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(second_name, { globals::misc::Red * globals::misc::HandChamsGlow, globals::misc::Green * globals::misc::HandChamsGlow, globals::misc::Blue * globals::misc::HandChamsGlow });
                    }
                }
            }
        }
    }

    void meshp1_materialgun(ashootercharacter* shooter_character)
    {

        uobject* material = uobject::StaticLoadObject(
            crypt(L"/Game/Equippables/_Core/Materials/SpecialMaterials/Arcade/Arcade_Emissive_Blue_MI.Arcade_Emissive_Blue_MI").decrypt()
        );

        fname first_name = (string::string_to_name)(crypt(L"Base Color").decrypt());
        fname second_name = (string::string_to_name)(crypt(L"Emissive Color").decrypt());

        uintptr_t inventory = memory::read<uintptr_t>((uintptr_t)shooter_character + offsets::Inventory);
        uintptr_t equipable = memory::read<uintptr_t>((uintptr_t)inventory + offsets::Equippable);
        UPrimitiveComponent* mesh1p = memory::read<UPrimitiveComponent*>(uintptr_t(equipable) + offsets::Mesh1pGun);

        rainbowTimeZHandChams += 0.004f;
        flinearcolor rainbow = BOSSRAINBOMAW(rainbowTimeZHandChams);


        if (globals::visuals::HandChamsRGB) {
            if (mesh1p) {
                auto num_materials = mesh1p->get_num_materials();
                for (int i = 0; i < num_materials; i++) {
                    uobject* material_instance_dynamic = mesh1p->create_and_set_material_instance_dynamic_from_material(i, material);
                    if (material_instance_dynamic) {

                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(first_name, { rainbow.r * 10, rainbow.g * 10, rainbow.b * 10 });
                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(second_name, { rainbow.r * 10, rainbow.g * 10, rainbow.b * 10 });
                    }
                }
            }


        }
        else {
            if (mesh1p) {
                auto num_materials = mesh1p->get_num_materials();
                for (int i = 0; i < num_materials; i++) {
                    uobject* material_instance_dynamic = mesh1p->create_and_set_material_instance_dynamic_from_material(i, material);
                    if (material_instance_dynamic) {

                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(first_name, { globals::misc::Red * globals::misc::HandChamsGlow, globals::misc::Green * globals::misc::HandChamsGlow, globals::misc::Blue * globals::misc::HandChamsGlow });
                        material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(second_name, { globals::misc::Red * globals::misc::HandChamsGlow, globals::misc::Green * globals::misc::HandChamsGlow, globals::misc::Blue * globals::misc::HandChamsGlow });
                    }
                }
            }


        }
    }


    void meshp1_materialgun3p(ashootercharacter* shooter_character)
    {

        uobject* material = uobject::StaticLoadObject(
            crypt(L"/Game/Equippables/_Core/Materials/SpecialMaterials/Arcade/Arcade_Emissive_Blue_MI.Arcade_Emissive_Blue_MI").decrypt()
        );

        fname first_name = (string::string_to_name)(crypt(L"Base Color").decrypt());
        fname second_name = (string::string_to_name)(crypt(L"Emissive Color").decrypt());

        uintptr_t inventory = memory::read<uintptr_t>((uintptr_t)shooter_character + offsets::Inventory);
        uintptr_t equipable = memory::read<uintptr_t>((uintptr_t)inventory + offsets::Equippable);
        UPrimitiveComponent* mesh1p = memory::read<UPrimitiveComponent*>(uintptr_t(equipable) + offsets::Mesh3pGun);

        rainbowTimeZHandChams += 0.004f;
        flinearcolor rainbow = BOSSRAINBOMAW(rainbowTimeZHandChams);

        if (mesh1p) {
            auto num_materials = mesh1p->get_num_materials();
            for (int i = 0; i < num_materials; i++) {
                uobject* material_instance_dynamic = mesh1p->create_and_set_material_instance_dynamic_from_material(i, material);
                if (material_instance_dynamic) {
                    material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(first_name, { rainbow.r * 10, rainbow.g * 10, rainbow.b * 10 });
                    material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(second_name, { rainbow.r * 10, rainbow.g * 10, rainbow.b * 10 });
                }
            }
        }
    }

    void SkyBoxMesh()
    {


        UPrimitiveComponent* mesh = memory::read<UPrimitiveComponent*>((uintptr_t)SkyDome + offsets::SkyMeshcomponent);

        if (SkyDome && memory::IsValidPointer((uintptr_t)SkyDome)) {
            if (!mesh || !memory::is_valid((uintptr_t)mesh))
                return;

            if (mesh && memory::is_valid((uintptr_t)mesh)) {

                fname first_name = string::string_to_name(L"Horizon color");
                fname second_name = string::string_to_name(L"Zenith Color");
                fname third_name = string::string_to_name(L"Overall Color");
                fname cloud_color = string::string_to_name(L"Cloud Color");
                fname cloud_speed = string::string_to_name(L"Cloud Speed");
                fname Stars_Brightness = string::string_to_name(L"Stars Brightness");
                fname cloud_op = string::string_to_name(L"Cloud Opacity");
                fname noise_power2 = string::string_to_name(L"NoisePower2");
                fname noise_power1 = string::string_to_name(L"NoisePower1");
                fname sun_radius = string::string_to_name(L"Sun Radius");
                fname horizon_falloff = string::string_to_name(L"Horizon Falloff");
                fname sun_brightness = string::string_to_name(L"Sun Brightness");
                fname sun_height = string::string_to_name(L"Sun Height");
                fname light_direction = string::string_to_name(L"Light Direction");
                fname sun_color = string::string_to_name(L"Sun Color");

                auto matPath = crypt(L"/Engine/EngineSky/M_Sky_Panning_Clouds2.M_Sky_Panning_Clouds2").decrypt();

                uobject* material = uobject::find_object<uobject*>(matPath);
                if (!material)
                    uobject::StaticLoadObject(matPath);
                material = uobject::find_object<uobject*>(matPath);

                if (!material || !memory::is_valid((uintptr_t)material))
                    return;

                static uobject* dynMat = nullptr;

                if (!dynMat)
                {
                    mesh->set_material(0, material);
                    dynMat = mesh->create_and_set_material_instance_dynamic_from_material(0, material);
                }

                if (dynMat && memory::IsValidPointer((uintptr_t)dynMat))
                {
                    auto num_materials = mesh->get_num_materials();
                    for (int i = 0; i < num_materials; i++) {
                        uobject* material_instance_dynamic = mesh->create_and_set_material_instance_dynamic_from_material(i, material);
                        if (material_instance_dynamic) {

                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(first_name, { globals::misc::Overall.r * 1,  globals::misc::Overall.g * 1,  globals::misc::Overall.b * 1 });
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(second_name, { globals::misc::Zenith.r * 1,  globals::misc::Zenith.g * 1,  globals::misc::Zenith.b * 1 });
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(third_name, { globals::misc::Horizon.r * 1,  globals::misc::Horizon.g * 1,  globals::misc::Horizon.b * 1 });
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(cloud_color, { globals::misc::Cloud.r * 1,  globals::misc::Cloud.g * 1,  globals::misc::Cloud.b * 1 });
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(sun_color, { globals::misc::SkySunColor.r * 1, globals::misc::SkySunColor.g * 1, globals::misc::SkySunColor.b * 1 });
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_scalar_parameter_value2(cloud_speed, globals::misc::CloudSpeed);
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_scalar_parameter_value2(Stars_Brightness, globals::misc::StarsBrightness);
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_scalar_parameter_value2(cloud_op, globals::misc::CloudOpacity);
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_scalar_parameter_value2(noise_power2, globals::misc::SkyNoisePower2);
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_scalar_parameter_value2(noise_power1, globals::misc::SkyNoisePower1);
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_scalar_parameter_value2(sun_radius, globals::misc::SkySunRadius);
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_scalar_parameter_value2(horizon_falloff, globals::misc::SkyHorizonFalloff);
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_scalar_parameter_value2(sun_brightness, globals::misc::SkySunBrightness);
                            material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_scalar_parameter_value2(sun_height, globals::misc::SkySunHeight);

                        }
                    }
                }


                if (globals::visuals::skyboxrgb) {
                    rainbowTimeZHandChams += 0.004f;
                    flinearcolor rainbow = BOSSRAINBOMAW(rainbowTimeZHandChams);

                    if (mesh) {
                        auto num_materials = mesh->get_num_materials();
                        for (int i = 0; i < num_materials; i++) {
                            uobject* material_instance_dynamic = mesh->create_and_set_material_instance_dynamic_from_material(i, material);
                            if (material_instance_dynamic) {


                                material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(first_name, { rainbow.r * 1, rainbow.g * 1, rainbow.b * 1 });
                                material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(second_name, { rainbow.r * 1, rainbow.g * 1, rainbow.b * 1 });
                                material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(third_name, { rainbow.r * 1, rainbow.g * 1, rainbow.b * 1 });
                                material_instance_dynamic->cast<UMaterialInstanceDynamic>()->set_vector_parameter_value2(cloud_color, { rainbow.r * 1, rainbow.g * 1, rainbow.b * 1 });
                            }
                        }
                    }
                }

            }
        }

    }

    struct FPeekState
    {
        bool  bActive = false;
        DWORD StartTime = 0;
    };

    static FPeekState GPeek;
    static DWORD GLastFireTime = 0;


    FORCEINLINE float NormalizeAngle67(float Angle)
    {
        while (Angle > 180.f) Angle -= 360.f;
        while (Angle < -180.f) Angle += 360.f;
        return Angle;
    }

    FORCEINLINE bool IsPeeking(const fvector& Velocity)
    {
        return fmath::Abs(Velocity.y) > 150.f && fmath::Abs(Velocity.x) < 60.f;
    }



    static float offsetX = 0.0f;

    bool isAntiAimEnabled = false;
    static float offsetY = 0.0f;
    static FMinimalViewInfo* g_viewinfo = nullptr; 
   
    auto hooks::SetCameraCachePOVHook(uintptr_t PlayerCameraManager, FMinimalViewInfo* ViewInfo)
    {
        
      
        static bool happybirthday1 = false;

        static bool happybirthday = false;

        if (!PlayerCameraManager || !ViewInfo)
            return hooks::SetCameraCachePOVOriginal(PlayerCameraManager, ViewInfo);

        if (!controller || !character)
            return hooks::SetCameraCachePOVOriginal(PlayerCameraManager, ViewInfo);


        fvector controlrotation = controller->get_control_rotation();

        if (globals::misc::Spinbotserversided) {
            float deltaX, deltaY;
            controller->GetInputMouseDelta(deltaX, deltaY);
            float sensitivity = controller->GetMouseSensitivity();
            LocalCameraRotation.x += deltaY * sensitivity;
            LocalCameraRotation.y += deltaX * sensitivity;

            character->relative_rotation(fvector{ 0, LocalCameraRotation.y, 0 }, false, false);

            ViewInfo->Rotation = LocalCameraRotation;
        }


        if (globals::misc::enabled) {
            float deltaX, deltaY;
            controller->GetInputMouseDelta(deltaX, deltaY);
            float sensitivity = controller->GetMouseSensitivity();
            LocalCameraRotation.x += deltaY * sensitivity;
            LocalCameraRotation.y += deltaX * sensitivity;

            character->relative_rotation(fvector{ 0, LocalCameraRotation.y, 0 }, false, false);

            ViewInfo->Rotation = LocalCameraRotation;
        }



        if (globals::misc::nightmode)
        {
            ViewInfo->OffCenterProjectionOffset = fvector2d(offsetX, offsetY);
            ViewInfo->PostProcessBlendWeight = 1.0f;
            FPostProcessSettings& PPS = ViewInfo->PostProcessSettings;
            PPS.bOverride_SceneColorTint = true;
            PPS.SceneColorTint = flinearcolor(0.08f, 0.08f, 0.15f, 1.0f);
            PPS.bOverride_AutoExposureMinBrightness = true;
            PPS.AutoExposureMinBrightness = 0.01f;
            PPS.bOverride_AutoExposureMaxBrightness = true;
            PPS.AutoExposureMaxBrightness = 0.05f;
            PPS.bOverride_BloomIntensity = true;
            PPS.BloomIntensity = 0.0f;
            PPS.bOverride_VignetteIntensity = true;
            PPS.VignetteIntensity = 0.4f;
            PPS.bOverride_FilmSaturation = true;
            PPS.FilmSaturation = 0.3f;
        }



        if (globals::aimbot::silentmaw) {
            
            float deltaX, deltaY;

            controller->GetInputMouseDelta(deltaX, deltaY);

            float sensitivity = controller->GetMouseSensitivity();

            LocalCameraRotation.x += deltaY * sensitivity;
            LocalCameraRotation.y += deltaX * sensitivity;

            character->K2_SetActorRelativeRotationnigger(FRotator{ 0, LocalCameraRotation.y, 0 }, false, true);

            if (!GetAsyncKeyState(globals::aimbot::aim_key))
            {
                if (!GetAsyncKeyState(VK_LBUTTON))
                {

                    LocalCameraLocation = ViewInfo->Location, LocalCameraRotation = ViewInfo->Rotation;
                    LocalCameraFOV = ViewInfo->FOV;

                    bLockedCameraRotation = false;
                }

            }
            else
            {
                if (GetAsyncKeyState(VK_LBUTTON) && in_rect(screen_center_x, screen_center_y, globals::aimbot::aim_fov, head_scren.x, head_scren.y))
                    bLockedCameraRotation = true;

                if (bFlickSilent && LocalCameraRotation != fvector())
                    ViewInfo->Rotation = LocalCameraRotation;

            }
        }

        static fvector storedCameraRotation;
        fvector CameraPos = ViewInfo->Location;
        fvector CameraRot = ViewInfo->Rotation;

        if (globals::misc::third_person && GetAsyncKeyState(globals::misc::niggamawee)) {
            float TPDistance = globals::misc::third_person_float;
            float radPitch = ViewInfo->Rotation.x * (M_PI / 180.0f);
            float radYaw = ViewInfo->Rotation.y * (M_PI / 180.0f);

            fvector forward;
            forward.x = cosf(radPitch) * cosf(radYaw);
            forward.y = cosf(radPitch) * sinf(radYaw);
            forward.z = sinf(radPitch);

            ViewInfo->Location.x -= forward.x * TPDistance;
            ViewInfo->Location.y -= forward.y * TPDistance;
            ViewInfo->Location.z -= forward.z * TPDistance;




            auto t = true;
            static int i = 0;
            if (globals::misc::spinbot) {

                if (t)
                {
                    LocalCameraRotation = fvector();
                    if (LocalCameraRotation == fvector())
                    {
                        LocalCameraRotation = controlrotation;

                        if (LocalCameraRotation == fvector())
                            return hooks::SetCameraCachePOVOriginal(PlayerCameraManager, ViewInfo);
                    }
                    t = false;
                }

                float Pitch = 0;
                float Roll = 0;
                if (!GetAsyncKeyState(VK_LBUTTON)) {
                    i += globals::misc::spinbot_speed_nigger;
                    if (i > 359) i = 0;
                    if (uskeletalmeshcomponent* Mesh = character->get_mesh()) {

                        Mesh->set_world_rotation(fvector(1, i, 1), 0, 0);

                    }

                }

                if (GetAsyncKeyState(VK_LBUTTON))
                {
                    if (LocalCameraRotation != fvector())
                    {
                        controller->set_control_rotation(LocalCameraRotation);
                        LocalCameraRotation = fvector();
                        i != 0;

                        t = true;
                    }
                }


            }
        }

        if (globals::misc::Holdthird1) {

            float TPDistance = globals::misc::third_person_float;
            float radPitch = ViewInfo->Rotation.x * (M_PI / 180.0f);
            float radYaw = ViewInfo->Rotation.y * (M_PI / 180.0f);

            fvector forward;
            forward.x = cosf(radPitch) * cosf(radYaw);
            forward.y = cosf(radPitch) * sinf(radYaw);
            forward.z = sinf(radPitch);

            ViewInfo->Location.x -= forward.x * TPDistance;
            ViewInfo->Location.y -= forward.y * TPDistance;
            ViewInfo->Location.z -= forward.z * TPDistance;

        }

        float spin_value = globals::misc::spinbot_speed_nigger;


        if (globals::misc::AspectRatio) {


            ViewInfo->bConstrainAspectRatio = true;
            ViewInfo->AspectRatio = globals::misc::aspectvalue;
        }


        if (globals::misc::Spinbotserversided)
        {
            auto Mesh = character->get_mesh();

            if (!happybirthday)
            {
                happybirthday = true;
                LocalCameraRotation = controlrotation;
            }

            if (LocalCameraRotation == fvector())
            {
                LocalCameraRotation = controlrotation;
                if (LocalCameraRotation == fvector())
                    return;
            }

            if (GetAsyncKeyState(VK_LBUTTON))
            {
                if (happybirthday)
                {
                    controller->set_control_rotation(LocalCameraRotation);
                    happybirthday = false;
                }
            }
            else
            {
                if (!happybirthday)
                {
                    LocalCameraRotation = controlrotation;
                    globals::misc::cacheoffset = 0.f;
                    happybirthday = true;
                }

                if (happybirthday)
                {
                    if (globals::misc::pitchmode == 0)
                        globals::misc::cachepitch = 89.5f;
                    else if (globals::misc::pitchmode == 1)
                        globals::misc::cachepitch = -89.5f;
                    else if (globals::misc::pitchmode == 2)
                        globals::misc::cachepitch = math::random_float(-89.f, 89.f);

                    static DWORD last_spin_update = GetTickCount();
                    DWORD now = GetTickCount();

                    if (globals::misc::waiting_for_kill)
                    {
                        if (target_actor->is_alive()) {
                            globals::misc::spin_paused = true;
                            globals::misc::resume_spin_time = now + 10;
                            globals::misc::waiting_for_kill = false;
                        }
                       
                    }

                    if (globals::misc::spin_paused)
                    {
                        if (now >= globals::misc::resume_spin_time)
                            globals::misc::spin_paused = false;
                        else
                        {
                            globals::misc::cachebaseyaw = LocalCameraRotation.y;
                            last_spin_update = now;
                            goto SKIP_SPIN_UPDATE2;
                        }
                    }


                SKIP_SPIN_UPDATE2:


                    if (globals::misc::spin_paused)
                    {

                        if (LocalCameraRotation == fvector())
                        {
                            LocalCameraRotation = controlrotation;
                            if (LocalCameraRotation == fvector())
                                return;
                        }

                        controller->set_control_rotation(LocalCameraRotation);

                        Mesh->set_world_rotation(
                            fvector(1, LocalCameraRotation.y, 1.f), 0, 0);
                    }
                    else
                    {
                        float Pitch = 0;
                        float Roll = 0;
                    
                        fvector nigga = controlrotation.y - spin_value;

                        controller->set_control_rotation(fvector(271, controlrotation.y - spin_value - spin_value, 0));
                       
                        spin_value += 3.5f;

                        Mesh->set_world_rotation(
                            fvector(1,
                                LocalCameraRotation.y + controlrotation.y,
                                1.f),
                            0, 0);



                    }
                }
            }
        }
        else
        {
            happybirthday = false;
        }

        if (globals::misc::enabled)
        {
            auto Mesh = character->get_mesh();
            if (!happybirthday1)
            {
                happybirthday1 = true;
                LocalCameraRotation = controlrotation;
            }

            if (LocalCameraRotation == fvector())
            {
                LocalCameraRotation = controlrotation;
                if (LocalCameraRotation == fvector())
                    return;
            }

            if (GetAsyncKeyState(VK_LBUTTON))
            {
                if (happybirthday1)
                {
                    controller->set_control_rotation(LocalCameraRotation);

                    happybirthday1 = false;
                }
            }
            else
            {
                if (globals::misc::spin_paused)
                {
                    globals::misc::spin_paused = false;
                    globals::misc::resume_spin_time = 0;
                }
                if (happybirthday1)
                {
                    const float PITCH_MAX = 89.5f;
                    const float PITCH_MIN = -89.5f;

                    if (globals::misc::pitchmode == 1)
                        globals::misc::cachepitch = PITCH_MAX;
                    else if (globals::misc::pitchmode == 0)
                        globals::misc::cachepitch = PITCH_MIN;
                    else if (globals::misc::pitchmode == 2)
                        globals::misc::cachepitch = math::random_float(PITCH_MIN, PITCH_MAX);

                    static DWORD last_spin_update = GetTickCount64();
                    DWORD now = GetTickCount64();

                    static bool spin_state_initialized = false;
                    if (!spin_state_initialized) {
                        globals::aimbot::ShoTFired = false;
                        globals::misc::spin_paused = false;
                        globals::misc::waiting_for_kill = false;
                        spin_state_initialized = true;
                    }

                    if (globals::misc::waiting_for_kill)
                    {
                        if (target_actor->is_alive()) {
                            if (globals::aimbot::ShoTFired) {
                                if (!target_actor->is_alive()) {
                                    globals::misc::spin_paused = true;
                                    globals::misc::resume_spin_time = now;
                                    globals::misc::waiting_for_kill = false;
                                }
                            }
                        }
                        else {
                            globals::aimbot::ShoTFired = false;
                        }
                    }

                    if (globals::misc::spin_paused)
                    {
                        globals::misc::cachebaseyaw = LocalCameraRotation.y;
                        last_spin_update = now;
                        goto SKIP_SPIN_UPDATE;
                    }


                    switch (globals::misc::baseyaw) {
                    case 5: {
                        static float character_based_yaw = 180.f;

                        if (controller->is_input_key_down(keys::w))
                        {
                            static float back_spin = 180.f;
                            character_based_yaw = back_spin;
                        }
                        else if (controller->is_input_key_down(keys::a))
                        {
                            static float right_spin = 90.f;
                            character_based_yaw = right_spin;
                        }
                        else if (controller->is_input_key_down(keys::d))
                        {
                            static float left_spin = -90.f;
                            character_based_yaw = left_spin;
                        }

                        globals::misc::cachebaseyaw = character_based_yaw;
                        break;
                    }
                    case 0:
                        globals::misc::cachebaseyaw = LocalCameraRotation.y;
                        break;
                    case 1: {
                        static float back_spin = 180.f;
                        back_spin -= 6.f;
                        if (back_spin < 120.f)
                            back_spin = 180.f;
                        globals::misc::cachebaseyaw = back_spin;
                        break;
                    }
                    case 2: {
                        static float left_spin = -90.f;
                        left_spin += 6.f;
                        if (left_spin > -30.f)
                            left_spin = -90.f;
                        globals::misc::cachebaseyaw = left_spin;
                        break;
                    }
                    case 3: {
                        static float right_spin = 90.f;
                        right_spin -= 6.f;
                        if (right_spin < 30.f)
                            right_spin = 90.f;
                        globals::misc::cachebaseyaw = right_spin;
                        break;
                    }
                    case 4: {
                        static float spin_spin = math::random_int(-180, 180);
                        spin_spin -= math::random_float(5.f, 15.f);
                        if (spin_spin < math::random_int(-120, 120))
                            spin_spin = math::random_int(-180, 180);
                        globals::misc::cachebaseyaw = spin_spin;
                        break;
                    }
                    }

                    if (globals::misc::prediction_breaker) {
                        static float breaker_timer = 0.0f;
                        breaker_timer += 0.01f * globals::misc::breaker_intensity;

                        float breaker_yaw =
                            sinf(breaker_timer * 3.0f) * 90.0f +
                            cosf(breaker_timer * 7.0f) * 45.0f +
                            sinf(breaker_timer * 13.0f) * 30.0f;

                        globals::misc::cachebaseyaw += breaker_yaw;

                        static float flick_timer = 0.0f;
                        flick_timer += 0.01f;
                        if (flick_timer > 2.0f) {
                            flick_timer = 0.0f;
                            globals::misc::cachebaseyaw += 180.0f;
                        }
                    }

                SKIP_SPIN_UPDATE:;
                    static bool flip = false;

                    if (globals::misc::yawmodifier == 0)
                    {
                        flip = !flip;
                        globals::misc::cacheoffset = flip ? -globals::misc::offset : globals::misc::offset;
                    }
                    else if (globals::misc::yawmodifier == 1)
                    {
                        int jitter = rand() % 3;
                        if (jitter == 0)
                            globals::misc::cacheoffset = -globals::misc::modifieroffset;
                        else if (jitter == 1)
                            globals::misc::cacheoffset = globals::misc::offset;
                        else
                            globals::misc::cacheoffset = globals::misc::modifieroffset;
                    }

                    float new_yaw = LocalCameraRotation.y + globals::misc::cachebaseyaw;

                    if (globals::misc::spin_paused)
                    {
                        if (happybirthday1)
                        {
                            controller->set_control_rotation(LocalCameraRotation);
                            happybirthday1 = false;
                        }
                    }
                    else
                    {
                        float anti_pitch = 89.5f;
                        if (globals::misc::cachepitch > 0)
                            anti_pitch = -89.5f;

                        fvector new_rotation = fvector(anti_pitch, new_yaw - globals::misc::cacheoffset, 0);

                        controller->set_control_rotation(new_rotation);
                        Mesh->set_world_rotation(
                            fvector(0, new_yaw - globals::misc::cacheoffset, 0),
                            0, 0);
                    }
                }
            }
        }
        else
        {
            happybirthday1 = false;
        }           

        if (target_actor && globals::aimbot::nospread) {

            if (!target_actor || target_actor == character) { target_actor = 0; return SetCameraCachePOVOriginal(PlayerCameraManager, ViewInfo); }

            if (target_actor->is_alive()) {
                uskeletalmeshcomponent* mesh = target_actor->get_mesh();

                fvector spread_angle;
                fvector target = mesh->get_bone_location(8);
                static const fkey lmb_key{ fname{ string::string_to_name(crypt(L"LeftMouseButton").decrypt()) } };

                bool visible_check;

                bVisible_cached = (globals::aimbot::vish_check && controller->line_of_sight(target_actor)) || !globals::aimbot::vish_check;
                CanAutoWall_cached = false;
                if (globals::aimbot::wallbang && !bVisible_cached)
                {
                    CanAutoWall_cached = TraceHelper::CanShootThrough(controller, character, target_actor);
                }

                visible_check = bVisible_cached || CanAutoWall_cached;
                auto current_inv = character->get_inventory();
                if (!current_inv) { return SetCameraCachePOVOriginal(PlayerCameraManager, ViewInfo); }
                auto current_equip = current_inv->get_current_equippable();
                if (!current_equip) { return SetCameraCachePOVOriginal(PlayerCameraManager, ViewInfo); }
                auto firing_state = current_equip->get_firing_state();
                if (!firing_state) { return SetCameraCachePOVOriginal(PlayerCameraManager, ViewInfo); }
                bool aim_key_pressed = globals::aimbot::AutoFire || GetAsyncKeyState(globals::aimbot::aim_key);
                bool is_anti_aim_active = globals::misc::enabled && GetAsyncKeyState(VK_LBUTTON);

                if (visible_check && aim_key_pressed && !is_anti_aim_active) {
                    static std::unordered_map<std::wstring, float> weapon_speeds = {
                        {L"Vandal", 27000.f}, {L"Phantom", 26000.f}, {L"Ghost", 23500.f},
                        {L"Sheriff", 24000.f}, {L"Operator", 45000.f}, {L"Bulldog", 26000.f},
                        {L"Stinger", 18000.f}, {L"Classic", 23500.f}, {L"Guardian", 30000.f},
                        {L"Marshal", 40000.f}, {L"Bucky", 18000.f}, {L"Judge", 18000.f},
                        {L"Ares", 21000.f}, {L"Odin", 21000.f}, {L"Shorty", 18000.f},
                        {L"Frenzy", 23500.f}, {L"Headhunter", 23500.f}, {L"Blade storm", 23500.f},
                        {L"Overdrive", 21000.f}, {L"Outlaw", 40000.f}, {L"Tour de force", 45000.f}
                    };

                    static std::unordered_set<std::wstring> valid_weapons = {
                        L"Bulldog", L"Phantom", L"Vandal", L"Operator", L"Marshal", L"Sheriff",
                        L"Spectre", L"Outlaw", L"Classic", L"Shorty", L"Frenzy", L"Ghost",
                        L"Stinger", L"Bucky", L"Judge", L"Guardian", L"Ares", L"Odin"
                    };

                    fstring obj_name = helper::convert_weapon_name(system::get_object_name(current_equip));
                    std::wstring wname = obj_name.wide();

                    bool is_valid_weapon = valid_weapons.find(wname) != valid_weapons.end();
                    bool is_sniper = wname == L"Marshal" || wname == L"Operator" || wname == L"Outlaw";

                    if (globals::aimbot::Prediction)
                    {
                        fvector target_velocity = target_actor->get_velocity();
                        float bullet_speed = 27000.f;

                        auto it = weapon_speeds.find(wname);
                        if (it != weapon_speeds.end()) {
                            bullet_speed = it->second;
                        }

                        fvector CameraPosPred = camera->get_camera_location();
                        fvector to_target = target - CameraPosPred;
                        float distance = to_target.size();

                        if (distance > 1.f)
                        {
                            float travel_time = distance / bullet_speed;
                            target = target + (target_velocity * travel_time);
                        }
                    }

                    fvector CameraPos(0, 0, 0);
                    fvector firing_direction(0, 0, 0);
                    character->get_firing_location_and_direction(&CameraPos, &firing_direction);

                    fvector controlrotation = controller->get_control_rotation();
                    fvector original_target = target;
                    fvector resolved_target = target;

                    static std::unordered_map<uintptr_t, std::unique_ptr<UltimateValorantResolver>> resolver_instances;
                    static DWORD last_resolver_cleanup = 0;
                    DWORD now = GetTickCount64();

                    if (now - last_resolver_cleanup > 10000) {
                        resolver_instances.clear();
                        last_resolver_cleanup = now;
                    }

                    if (globals::aimbot::resolver) {
                        uintptr_t target_key = (uintptr_t)target_actor;

                        if (resolver_instances.find(target_key) == resolver_instances.end()) {
                            resolver_instances[target_key] = std::make_unique<UltimateValorantResolver>(target_actor, character);
                        }

                        UltimateValorantResolver& resolver = *resolver_instances[target_key];

                        fvector target_velocity = target_actor->get_velocity();
                        fvector head_bone = target_actor->get_mesh()->get_bone_location(8);

                        resolved_target = resolver.ResolveHeadPosition(head_bone, target_velocity);
                        target = resolved_target;
                        resolver.UpdateVisualizationData(original_target, resolved_target);

                        static bool was_shooting = false;
                        if (globals::aimbot::AutoShoot && !was_shooting) {
                            resolver.RegisterShotFired();
                            was_shooting = true;
                        }
                        else if (!globals::aimbot::AutoShoot) {
                            was_shooting = false;
                        }
                    }

                    fvector vector_pos = target - CameraPos;
                    float distance = vector_pos.size();

                    // FIXED: Cooldown check with proper validation for non-weapons
                    if (globals::aimbot::nodelay) {
                        float cooldown = 0;
                        // Only do cooldown check for valid weapons, skip for knives/abilities
                        if (is_valid_weapon) {
                            if (current_equip->get_type().is_valid() && current_equip->get_type().index != 18) {
                                // Re-get firing_state to ensure it's still valid
                                auto fresh_firing_state = current_equip->get_firing_state();
                                if (fresh_firing_state) {
                                    cooldown = fresh_firing_state->cooldown();
                                    if (cooldown > globals::aimbot::CooldownChecks) {
                                        return SetCameraCachePOVOriginal(PlayerCameraManager, ViewInfo);
                                    }
                                }
                            }
                        }
                    }

                    float normalized_z = vector_pos.z / distance;
                    normalized_z = std::clamp(normalized_z, -1.f, 1.f);

                    float x = -(acosf(normalized_z) * RAD_TO_DEG - 90.f);
                    float y = atan2f(vector_pos.y, vector_pos.x) * RAD_TO_DEG;

                    fvector target_rotation(x, y, 0.f);
                    fvector new_rotation = target_rotation;

                    if (target_actor->is_alive() && is_valid_weapon) {
                        if (firing_state && firing_state->GetStabilityComponent()) {
                            spread_angle = NoSpread::calc_spread(character, firing_state);

                            if (!spread_angle.is_null() && !spread_angle.is_zero()) {
                                if (current_equip->HasMuzzle()) {
                                    new_rotation = target_rotation - spread_angle;
                                }
                            }
                        }

                        controller->set_control_rotation(new_rotation);

                        static DWORD spread_comp_ready_time = 0;
                        static DWORD shoot_delay_time = 0;
                        static bool delay_pending = false;
                        static bool spread_locked = false;

                        // FIXED: Only apply nospread logic for valid weapons
                        if (globals::aimbot::nospread && !spread_locked) {
                            if (is_sniper) {
                                spread_comp_ready_time = now + 5;
                            }
                            else {
                                spread_comp_ready_time = now + 100;
                            }

                            spread_locked = true;
                            delay_pending = false;
                        }

                        if (spread_locked && now >= spread_comp_ready_time && target_actor->is_alive()) {
                            if (visible_check && !delay_pending) {
                                shoot_delay_time = now + (DWORD)globals::aimbot::AutoshootFloat;
                                delay_pending = true;
                            }

                            if (delay_pending && globals::aimbot::AutoShoot && now >= shoot_delay_time && target_actor->is_alive()) {

                                static fvector2d screen_center = fvector2d(0, 0);
                                static DWORD last_screen_update = 0;

                                if (now - last_screen_update > 1000) {
                                    fvector2d screen_size = canvas->get_screen_size();
                                    screen_center.x = screen_size.x * 0.5f;
                                    screen_center.y = screen_size.y * 0.5f;
                                    last_screen_update = now;
                                }

                                if (target_actor->is_alive()) {
                                    globals::misc::spin_paused = true;
                                    controller->simulate_input_key(keys::left_mouse, true);
                                    controller->simulate_input_key(keys::left_mouse, false);
                                    globals::aimbot::ShoTFired = true;
                                }
                                else {
                                    globals::aimbot::ShoTFired = false;
                                    globals::misc::spin_paused = false;
                                }

                                if (globals::aimbot::resolver) {
                                    uintptr_t target_key = (uintptr_t)target_actor;
                                    if (resolver_instances.find(target_key) != resolver_instances.end()) {
                                        resolver_instances[target_key]->RegisterShotHit();
                                        ResolverVisualizer::RegisterHit();
                                    }
                                }

                                delay_pending = false;
                                spread_locked = false;
                                spread_comp_ready_time = 0;
                                shoot_delay_time = 0;
                            }

                            if (!globals::aimbot::nospread)
                            {
                                spread_locked = false;
                                delay_pending = false;

                                shoot_delay_time = 0;
                                spread_comp_ready_time = 0;
                            }

                            if (globals::aimbot::resolver) {
                                uintptr_t target_key = (uintptr_t)target_actor;
                                if (resolver_instances.find(target_key) != resolver_instances.end()) {
                                    UltimateResolverData* resolver_data = resolver_instances[target_key]->GetResolverData();

                                    static bool font_set = false;
                                    if (!font_set && menu::font) {
                                        ResolverVisualizer::SetFont(menu::font);
                                        font_set = true;
                                    }

                                    ResolverVisualizer::DrawModernResolverInfo(
                                        canvas,
                                        controller,
                                        target_actor,
                                        resolver_data
                                    );
                                }
                            }
                        }
                    }
                    else if (target_actor->is_alive() && !is_valid_weapon) {
                        controller->set_control_rotation(new_rotation);

                        static DWORD spread_comp_ready_time = 0;
                        static DWORD shoot_delay_time = 0;
                        static bool delay_pending = false;
                        static bool spread_locked = false;

                        spread_locked = false;
                        delay_pending = false;
                        spread_comp_ready_time = 0;
                        shoot_delay_time = 0;

                        if (globals::aimbot::AutoShoot) {
                            controller->simulate_input_key(keys::left_mouse, true);
                            controller->simulate_input_key(keys::left_mouse, false);
                            globals::aimbot::ShoTFired = true;
                            globals::misc::spin_paused = true;
                        }
                    }
                }
            }
            else {
                target_actor = 0;
            }
        }
        return hooks::SetCameraCachePOVOriginal(PlayerCameraManager, ViewInfo);
    }
    void call_SetCameraCachePOVHook(uintptr_t PlayerCameraManager, FMinimalViewInfo* ViewInfo) {
        return reinterpret_cast<void(*)(uintptr_t PlayerCameraManager, FMinimalViewInfo * ViewInfo, uintptr_t, void*)>(spoofcall_stub)(PlayerCameraManager, ViewInfo, offsets::MagicOffsets, (void*)SetCameraCachePOVHook);
    }

    const flinearcolor dark_outline = { 0.075f, 0.075f, 0.075f, 1.0f };
    const flinearcolor outline = { 0.122f, 0.122f, 0.122f, 1.0f };
    const flinearcolor accent_color = { 0.5f, 0.0f, 0.5f, 1.0f };
    const flinearcolor background_color = { 0.0160f, 0.0160f, 0.0160f, 1.0f };
    const flinearcolor background = { 0.010f, 0.010f, 0.010f, 1.0f };
    const flinearcolor panel_color = { 0.0180f, 0.0180f, 0.0180f, 1.0f };
    const flinearcolor border_color = { 0.0580f, 0.0580f, 0.0580f, 1.0f };
    const flinearcolor check_color = { 0.0f, 0.0f, 0.5f, 1.0f };
    const flinearcolor text_color = { 0.9f, 0.9f, 0.9f, 1.0f };
    const flinearcolor hover_color = { 0.2f, 0.2f, 0.2f, 1.0f };
    const flinearcolor disabled_color = { 0.5f, 0.5f, 0.5f, 1.0f };
    const flinearcolor handle_color = { 1.0f, 1.0f, 1.0f, 1.0f };

    const flinearcolor secondary_color = { 0.12f, 0.12f, 0.15f, 1.0f };
    const flinearcolor header_color = { 0.0f, 0.4f, 0.8f, 1.0f };

    static flinearcolor maincolor{ 1.0f,1.0f,1.0f,1.0f };
    float bowv4l = 1;

    static void draw_fov(fvector2d pos, float radius, int numSegments, ucanvas* canvas)
    {
        

        if (!globals::aimbot::draw_fov) return;

        static float timeOffset = 0.0f;
        timeOffset += 0.01f; // controls speed of rainbow spin

        const float PI = 3.1415927f;
        float Step = PI * 2.0f / numSegments;
        fvector2d V[128];

        for (int i = 0; i < numSegments; i++) {
            float Angle = i * Step;
            V[i].x = radius * cos(Angle) + pos.x;
            V[i].y = radius * sin(Angle) + pos.y;
        }

        for (int i = 0; i < numSegments - 1; i++) {
            flinearcolor segColor;

            if (globals::aimbot::draw_fovrainbow) {
                float t = static_cast<float>(i) / static_cast<float>(numSegments);
                segColor = GetRainbowColor(t + timeOffset); // Add time offset here for spin
            }
            else {
                segColor = flinearcolor(1.0f, 1.0f, 1.0f, 1.0f);;
            }

            canvas->k2_drawline(V[i], V[i + 1], 1.0f, segColor);
        }

        // Connect last point to first
        flinearcolor lastColor = globals::aimbot::draw_fovrainbow
            ? GetRainbowColor(timeOffset)
            : flinearcolor(1.0f, 1.0f, 1.0f, 1.0f);;

        canvas->k2_drawline(V[numSegments - 1], V[0], 1.0f, lastColor);
    }



    void draw_text(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor color, fvector2d pos) {
        
        canvas->k2_drawtext(font, text, pos, { 1.00f, 1.00f }, color, 0.f, { 0, 0, 0, 0.30f }, { 0, 0 }, true, true, true, { 0, 0, 0, 0.45 });
    }
    void draw_text_2(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor color, fvector2d pos, float text_scale) {
        
        canvas->k2_drawtext(font, text, pos, { text_scale, text_scale }, color, 0.f, { 0, 0, 0, 0.30f }, { 0, 0 }, false, true, true, { 0, 0, 0, 0.45f });
    }
    void draw_text_3(ucanvas* canvas, uobject* font, fstring nade, flinearcolor color, fvector2d pos) {
        
        canvas->k2_drawtext(font, nade, pos, { 1.00f, 1.00f }, color, 0.f, { 0, 0, 0, 0.30f }, { 0, 0 }, true, true, true, { 0, 0, 0, 0.45 });
    }
    void draw_text_3(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor color, fvector2d pos, float text_scale) {
        
        canvas->k2_drawtext(font, text, pos, { text_scale, text_scale }, color, 0.f, { 0, 0, 0, 0.30f }, { 0, 0 }, true, true, true, { 0, 0, 0, 0.45f });
    }
    void draw_text_custom(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor text_color, fvector2d position, float width_scale, float height_scale, float thickness, float scale_factor) {
        
        float text_scale_x = width_scale * scale_factor;
        float text_scale_y = height_scale * scale_factor;

        canvas->k2_drawtext(
            font,
            text,
            position,
            { text_scale_x, text_scale_y },
            text_color,
            0.f,
            { 0, 0, 0, 0.30f },
            { 0, 0 },
            false,
            true,
            true,
            { 0, 0, 0, 0.45f }
        );
    }

    void draw_notext(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor text_color, fvector2d position, float width_scale, float height_scale, float thickness, float scale_factor) {
        
        float text_scale_x = width_scale * scale_factor;
        float text_scale_y = height_scale * scale_factor;

        canvas->k2_drawtext(
            font,
            text,
            position,
            { text_scale_x, text_scale_y },
            text_color,
            0.f,
            { 0, 0, 0, 0 },
            { 0, 0 },
            false,
            true,
            true,
            { 0, 0, 0, 0 }
        );
    }

    void draw_text_custom_2(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor text_color, fvector2d position, float width_scale, float height_scale, float thickness, float scale_factor) {

        
        float text_scale_x = width_scale * scale_factor;
        float text_scale_y = height_scale * scale_factor;
        canvas->k2_drawtext(
            font,
            text,
            position,
            { text_scale_x, text_scale_y },
            text_color,
            0.f,
            { 0, 0, 0, 0.30f },
            { 0, 0 },
            true,
            true,
            true,
            { 0, 0, 0, 0.45f }
        );
    }

    void draw_text_centered(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor color, fvector2d pos) {
        
        float text_width = wcslen(text) * 8.0f;
        float text_height = 16.0f;

        hooks::draw_text(canvas, font, text, color,
            { pos.x - text_width / 2, pos.y - text_height / 2 });
    }
    void draw_logo(ucanvas* canvas, float x, float y, float size, flinearcolor color) {

        const float half_size = size / 2;
        const float quarter_size = size / 4;

        canvas->k2_drawline(
            { x - half_size, y + half_size },
            { x, y - half_size },
            2.0f, color
        );
        canvas->k2_drawline(
            { x, y - half_size },
            { x + half_size, y + half_size },
            2.0f, color
        );
        canvas->k2_drawline(
            { x - quarter_size, y },
            { x + quarter_size, y },
            2.0f, color
        );
    }

    void draw_head(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor color, fvector2d pos) {

        canvas->k2_drawtext(font, text, pos, { 1.50f, 1.50f }, color, 0.f, { 0, 0, 0, 0.30f }, { 0, 0 }, true, true, true, { 0, 0, 0, 0.90 });
    }
    void draw_head2(ucanvas* canvas, uobject* font, const wchar_t* text, flinearcolor color, fvector2d pos) {


        flinearcolor purple_color = flinearcolor(1.0f, 0.0f, 1.0f, 1.0f);
        flinearcolor shadow_color = flinearcolor(1.0f, 0.0f, 1.0f, 0.5f);

        fvector2d shadow_offset = fvector2d{ 2.0f, 2.0f };
        canvas->k2_drawtext(font, text, pos + shadow_offset, { 1.0f, 1.0f }, shadow_color, 0.f, { 0, 0, 0, 0.30f }, { 0, 0 }, true, true, true, { 0, 0, 0, 0.90 });

        canvas->k2_drawtext(font, text, pos, { 1.0f, 1.0f }, purple_color, 0.f, { 0, 0, 0, 0.30f }, { 0, 0 }, true, true, true, { 0, 0, 0, 0.90 });
    }
    void draw_filled_rect(ucanvas* canvas, float x, float y, float width, float height, flinearcolor color) {

        for (float i = 0; i < height; i++) {
            canvas->k2_drawline(
                { x, y + i },
                { x + width, y + i },
                1.0f,
                color
            );
        }
    }
    float ESPThickness = 1.1f;
    void DrawLineSimple(ucanvas* can, fvector2d first_bone_position, fvector2d second_bone_position, flinearcolor Color)
    {
        
        can->k2_drawline({ first_bone_position.x, first_bone_position.y }, { second_bone_position.x, second_bone_position.y }, ESPThickness, Color);
    }

    void Draw_Line(ucanvas* canvas, fvector2d from, fvector2d to, int thickness, flinearcolor color)
    {
        canvas->k2_drawline(fvector2d{ from.x, from.y }, fvector2d{ to.x, to.y }, thickness, color);
    }


    void Draw3DWeapon(ucanvas* Canvas, aplayercontroller* MYController, fvector ObjectLocation3D, flinearcolor Color)
    {
        
        int xz = 70;
        int uzunluk = 20;
        fvector Pos0, Pos1, Pos2, Pos3, Pos4, Pos5, Pos6, Pos7, Pos8;
        Pos0 = ObjectLocation3D;
        Pos0.z += 10;
        Pos1 = Pos0 + fvector(-xz, -xz, uzunluk);
        Pos2 = Pos0 + fvector(-xz, -xz, -uzunluk);
        Pos3 = Pos0 + fvector(xz, -xz, -uzunluk);
        Pos4 = Pos0 + fvector(xz, -xz, uzunluk);
        Pos5 = Pos0 + fvector(-xz, xz, uzunluk);
        Pos6 = Pos0 + fvector(-xz, xz, -uzunluk);
        Pos7 = Pos0 + fvector(xz, xz, -uzunluk);
        Pos8 = Pos0 + fvector(xz, xz, uzunluk);

        fvector2d ScreenPos0, ScreenPos1, ScreenPos2, ScreenPos3, ScreenPos4, ScreenPos5, ScreenPos6, ScreenPos7, ScreenPos8;
        if (MYController->project_world_location_to_screen(Pos0, ScreenPos0, 0) && ScreenPos0.is_valid())
        {
            if (MYController->project_world_location_to_screen(Pos1, ScreenPos1, 0) && ScreenPos1.is_valid())
            {
                if (MYController->project_world_location_to_screen(Pos2, ScreenPos2, 0) && ScreenPos2.is_valid())
                {
                    if (MYController->project_world_location_to_screen(Pos3, ScreenPos3, 0) && ScreenPos3.is_valid())
                    {
                        if (MYController->project_world_location_to_screen(Pos4, ScreenPos4, 0) && ScreenPos4.is_valid())
                        {
                            if (MYController->project_world_location_to_screen(Pos5, ScreenPos5, 0) && ScreenPos5.is_valid())
                            {
                                if (MYController->project_world_location_to_screen(Pos6, ScreenPos6, 0) && ScreenPos6.is_valid())
                                {
                                    if (MYController->project_world_location_to_screen(Pos7, ScreenPos7, 0) && ScreenPos7.is_valid())
                                    {
                                        if (MYController->project_world_location_to_screen(Pos8, ScreenPos8, 0) && ScreenPos8.is_valid())
                                        {
                                            DrawLineSimple(Canvas, ScreenPos1, ScreenPos2, Color);
                                            DrawLineSimple(Canvas, ScreenPos2, ScreenPos3, Color);
                                            DrawLineSimple(Canvas, ScreenPos3, ScreenPos4, Color);
                                            DrawLineSimple(Canvas, ScreenPos4, ScreenPos1, Color);

                                            DrawLineSimple(Canvas, ScreenPos5, ScreenPos6, Color);
                                            DrawLineSimple(Canvas, ScreenPos6, ScreenPos7, Color);
                                            DrawLineSimple(Canvas, ScreenPos7, ScreenPos8, Color);
                                            DrawLineSimple(Canvas, ScreenPos8, ScreenPos5, Color);

                                            DrawLineSimple(Canvas, ScreenPos1, ScreenPos5, Color);
                                            DrawLineSimple(Canvas, ScreenPos2, ScreenPos6, Color);
                                            DrawLineSimple(Canvas, ScreenPos3, ScreenPos7, Color);
                                            DrawLineSimple(Canvas, ScreenPos4, ScreenPos8, Color);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }


    }

    void draw_rect(ucanvas* canvas, float x, float y, float width, float height, flinearcolor color) {
        
        canvas->k2_drawline({ x, y }, { x + width, y }, 1.0f, color);
        canvas->k2_drawline({ x + width, y }, { x + width, y + height }, 1.0f, color);
        canvas->k2_drawline({ x + width, y + height }, { x, y + height }, 1.0f, color);
        canvas->k2_drawline({ x, y + height }, { x, y }, 1.0f, color);
    }

    inline auto DrawBorder(ucanvas* nigga, float x, float y, float w, float h, float px, flinearcolor BorderColor) -> void
    {
        
        draw_rect(nigga, x, (y + h - px), w, px, BorderColor);
        draw_rect(nigga, x, y, px, h, BorderColor);
        draw_rect(nigga, x, y, w, px, BorderColor);
        draw_rect(nigga, (x + w - px), y, px, h, BorderColor);
    }


    void draw_rect_2(ucanvas* canvas, float x, float y, float width, float height, flinearcolor color, float tickness) {
        
        canvas->k2_drawline({ x, y }, { x + width, y }, 1.0f, color);
        canvas->k2_drawline({ x + width, y }, { x + width, y + height }, 1.0f, color);
        canvas->k2_drawline({ x + width, y + height }, { x, y + height }, 1.0f, color);
        canvas->k2_drawline({ x, y + height }, { x, y }, 1.0f, color);
    }
    void draw_rounded_rect(ucanvas* canvas, float x, float y, float width, float height, float radius, flinearcolor color) {
        
        const int segments = 16;
        const float angle_step = PI / 2 / segments;

        for (int i = 0; i < segments; i++) {
            float angle1 = PI + i * angle_step;
            float angle2 = angle1 + angle_step;
            canvas->k2_drawline(
                { x + radius + radius * cos(angle1), y + radius + radius * sin(angle1) },
                { x + radius + radius * cos(angle2), y + radius + radius * sin(angle2) },
                2.0f, color
            );
        }

        for (int i = 0; i < segments; i++) {
            float angle1 = 3 * PI / 2 + i * angle_step;
            float angle2 = angle1 + angle_step;
            canvas->k2_drawline(
                { x + width - radius + radius * cos(angle1), y + radius + radius * sin(angle1) },
                { x + width - radius + radius * cos(angle2), y + radius + radius * sin(angle2) },
                2.0f, color
            );
        }

        for (int i = 0; i < segments; i++) {
            float angle1 = i * angle_step;
            float angle2 = angle1 + angle_step;
            canvas->k2_drawline(
                { x + width - radius + radius * cos(angle1), y + height - radius + radius * sin(angle1) },
                { x + width - radius + radius * cos(angle2), y + height - radius + radius * sin(angle2) },
                2.0f, color
            );
        }

        for (int i = 0; i < segments; i++) {
            float angle1 = PI / 2 + i * angle_step;
            float angle2 = angle1 + angle_step;
            canvas->k2_drawline(
                { x + radius + radius * cos(angle1), y + height - radius + radius * sin(angle1) },
                { x + radius + radius * cos(angle2), y + height - radius + radius * sin(angle2) },
                2.0f, color
            );
        }

        canvas->k2_drawline({ x + radius, y }, { x + width - radius, y }, 2.0f, color);
        canvas->k2_drawline({ x + width, y + radius }, { x + width, y + height - radius }, 2.0f, color);
        canvas->k2_drawline({ x + radius, y + height }, { x + width - radius, y + height }, 2.0f, color);
        canvas->k2_drawline({ x, y + radius }, { x, y + height - radius }, 2.0f, color);
    }
    void draw_modern_rect(ucanvas* canvas, float x, float y, float width, float height, flinearcolor color, float border_thickness = 1.0f) {

        for (float i = 0; i < height; i++) {
            canvas->k2_drawline(
                { x, y + i },
                { x + width, y + i },
                1.0f,
                color
            );
        }

        canvas->k2_drawline({ x, y }, { x + width, y }, border_thickness, border_color);
        canvas->k2_drawline({ x + width, y }, { x + width, y + height }, border_thickness, border_color);
        canvas->k2_drawline({ x, y + height }, { x + width, y + height }, border_thickness, border_color);
        canvas->k2_drawline({ x, y }, { x, y + height }, border_thickness, border_color);
    }

    inline bool IsScoped(EAresEquippableState state)
    {
        return state == EAresEquippableState::ADS_Idle ||
            state == EAresEquippableState::ADS_Firing;
    }


    void draw_gradient_rect(ucanvas* canvas, float x, float y, float width, float height, flinearcolor start_color, flinearcolor end_color, bool vertical = false) {

        

        const int steps = 20;
        float step_size = vertical ? height / steps : width / steps;

        for (int i = 0; i < steps; i++) {
            float t = (float)i / (steps - 1);
            flinearcolor current_color = {
                start_color.r + (end_color.r - start_color.r) * t,
                start_color.g + (end_color.g - start_color.g) * t,
                start_color.b + (end_color.b - start_color.b) * t,
                start_color.a + (end_color.a - start_color.a) * t
            };

            if (vertical) {
                canvas->k2_drawline(
                    { x, y + i * step_size },
                    { x + width, y + i * step_size },
                    step_size,
                    current_color
                );
            }
            else {
                canvas->k2_drawline(
                    { x + i * step_size, y },
                    { x + i * step_size, y + height },
                    step_size,
                    current_color
                );
            }
        }
    }
    bool draw_toggle_button(ucanvas* canvas, uobject* font, const wchar_t* label, bool state, fvector2d pos, fvector2d mouse_pos, bool mouse_clicked, bool selected) {
        
        const float button_width = 260.0f;
        const float button_height = 32.0f;
        const float toggle_width = 40.0f;
        const float toggle_height = 20.0f;
        const float text_padding = 35.0f;

        bool is_hovered = (mouse_pos.x >= pos.x && mouse_pos.x <= pos.x + button_width &&
            mouse_pos.y >= pos.y && mouse_pos.y <= pos.y + button_height);

        draw_gradient_rect(canvas, pos.x, pos.y, button_width, button_height,
            is_hovered ? hover_color : panel_color,
            secondary_color);

        hooks::draw_text(canvas, font, label, disabled_color, { pos.x + text_padding + 1, pos.y + 8.0f + 1 });
        hooks::draw_text(canvas, font, label, text_color, { pos.x + text_padding, pos.y + 8.0f });

        float toggle_x = pos.x + button_width - toggle_width - 12.0f;
        float toggle_y = pos.y + (button_height - toggle_height) / 2;

        draw_rounded_rect(canvas, toggle_x, toggle_y, toggle_width, toggle_height, toggle_height / 2,
            state ? accent_color : disabled_color);

        float knob_size = toggle_height - 4.0f;
        float knob_x = toggle_x + 2.0f + (state ? toggle_width - knob_size - 4.0f : 0.0f);
        draw_rounded_rect(canvas, knob_x, toggle_y + 2.0f, knob_size, knob_size, knob_size / 2,
            text_color);

        return is_hovered && mouse_clicked;
    }
    void draw_triangle(ucanvas* canvas, float x, float y, float size, flinearcolor color) {
        
        const float half_size = size / 2;
        canvas->k2_drawline({ x - half_size, y - half_size }, { x + half_size, y - half_size }, 2.0f, color);
        canvas->k2_drawline({ x + half_size, y - half_size }, { x, y + half_size }, 2.0f, color);
        canvas->k2_drawline({ x, y + half_size }, { x - half_size, y - half_size }, 2.0f, color);
    }
    void draw_section_header(ucanvas* canvas, uobject* font, const wchar_t* label, flinearcolor color, fvector2d pos) {
        
        const float header_width = 260.0f;
        const float header_height = 25.0f;

        canvas->k2_drawline(pos, { pos.x + header_width, pos.y }, 2.0f, color);
        hooks::draw_text(canvas, font, label, color, { pos.x, pos.y - header_height });
    }

    bool draw_color_picker(ucanvas* canvas, uobject* font, const wchar_t* label, flinearcolor& color, fvector2d pos, fvector2d mouse_pos, bool mouse_clicked) {
        
        const float hue_slider_width = 100.0f;
        const float hue_slider_height = 7.0f;
        const float sb_picker_size = 75.0f;
        const float alpha_slider_width = hue_slider_width;
        const float alpha_slider_height = 7.0f;
        const float preview_box_size = 15.0f;
        const float spacing = 5.0f;

        static bool hue_dragging = false;
        static bool sb_dragging = false;
        static bool alpha_dragging = false;

        static float hue = 0.0f;
        static float saturation = 1.0f;
        static float brightness = 1.0f;

        float thickness = 2.0f;
        float width_scale = 1.0f;
        float height_scale = 0.8f;
        float text_scale = 1.1f;

        bool value_changed = false;

        for (int i = 0; i < hue_slider_width; i++) {
            float h = (float)i / hue_slider_width;
            flinearcolor color_at_hue = HSVtoRGB(h, 1.0f, 1.0f);
            draw_filled_rect(canvas, pos.x + i, pos.y, 1.0f, hue_slider_height, color_at_hue);
        }
        draw_rect(canvas, pos.x, pos.y, hue_slider_width, hue_slider_height, border_color);

        if (mouse_clicked && mouse_pos.x >= pos.x && mouse_pos.x <= pos.x + hue_slider_width &&
            mouse_pos.y >= pos.y && mouse_pos.y <= pos.y + hue_slider_height) {
            hue_dragging = true;
        }
        if (hue_dragging) {
            if (mouse_clicked) {
                hue = (mouse_pos.x - pos.x) / hue_slider_width;
                hue = clamp(hue, 0.0f, 1.0f);
                value_changed = true;
            }
            else {
                hue_dragging = false;
            }
        }

        fvector2d sb_pos = { pos.x, pos.y + hue_slider_height + spacing };

        for (int y = 0; y < sb_picker_size; y++) {
            for (int x = 0; x < sb_picker_size; x++) {
                float s = (float)x / sb_picker_size;
                float b = 1.0f - (float)y / sb_picker_size;
                flinearcolor sb_color = HSVtoRGB(hue, s, b);
                draw_filled_rect(canvas, sb_pos.x + x, sb_pos.y + y, 1.0f, 1.0f, sb_color);
            }
        }
        draw_rect(canvas, sb_pos.x, sb_pos.y, sb_picker_size, sb_picker_size, border_color);

        if (mouse_clicked && mouse_pos.x >= sb_pos.x && mouse_pos.x <= sb_pos.x + sb_picker_size &&
            mouse_pos.y >= sb_pos.y && mouse_pos.y <= sb_pos.y + sb_picker_size) {
            sb_dragging = true;
        }
        if (sb_dragging) {
            if (mouse_clicked) {
                saturation = (mouse_pos.x - sb_pos.x) / sb_picker_size;
                brightness = 1.0f - (mouse_pos.y - sb_pos.y) / sb_picker_size;
                saturation = clamp(saturation, 0.0f, 1.0f);
                brightness = clamp(brightness, 0.0f, 1.0f);
                value_changed = true;
            }
            else {
                sb_dragging = false;
            }
        }

        fvector2d alpha_pos = { pos.x, sb_pos.y + sb_picker_size + spacing };

        for (int i = 0; i < alpha_slider_width; i++) {
            float alpha = (float)i / alpha_slider_width;
            flinearcolor alpha_color = HSVtoRGB(hue, saturation, brightness);
            alpha_color.a = alpha;
            draw_filled_rect(canvas, alpha_pos.x + i, alpha_pos.y, 1.0f, alpha_slider_height, alpha_color);
        }
        draw_rect(canvas, alpha_pos.x, alpha_pos.y, alpha_slider_width, alpha_slider_height, border_color);

        if (mouse_clicked && mouse_pos.x >= alpha_pos.x && mouse_pos.x <= alpha_pos.x + alpha_slider_width &&
            mouse_pos.y >= alpha_pos.y && mouse_pos.y <= alpha_pos.y + alpha_slider_height) {
            alpha_dragging = true;
        }
        if (alpha_dragging) {
            if (mouse_clicked) {
                color.a = (mouse_pos.x - alpha_pos.x) / alpha_slider_width;
                color.a = clamp(color.a, 0.0f, 1.0f);
                value_changed = true;
            }
            else {
                alpha_dragging = false;
            }
        }

        flinearcolor final_color = HSVtoRGB(hue, saturation, brightness);
        color.r = final_color.r;
        color.g = final_color.g;
        color.b = final_color.b;

        fvector2d preview_pos = { pos.x + hue_slider_width + spacing, pos.y };
        draw_filled_rect(canvas, preview_pos.x, preview_pos.y, preview_box_size, preview_box_size, { color.r, color.g, color.b, color.a });
        draw_rect(canvas, preview_pos.x, preview_pos.y, preview_box_size, preview_box_size, border_color);

        return value_changed;
    }
    bool draw_color_picker_menu(ucanvas* canvas, uobject* font, const wchar_t* label, flinearcolor& color, fvector2d pos, fvector2d mouse_pos, bool mouse_clicked) {
        
        static bool picker_open = false;
        static fvector2d picker_pos = pos;
        const float box_size = 16.0f;
        const float pencil_offset = 5.0f;

        if (picker_open && mouse_clicked &&
            !(mouse_pos.x >= picker_pos.x && mouse_pos.x <= picker_pos.x + 200.0f &&
                mouse_pos.y >= picker_pos.y && mouse_pos.y <= picker_pos.y + 220.0f)) {
            picker_open = false;
        }

        draw_filled_rect(canvas, pos.x, pos.y, box_size, box_size, color);
        draw_rect(canvas, pos.x, pos.y, box_size, box_size, border_color);

        fvector2d pencil_start = { pos.x + pencil_offset, pos.y + box_size - pencil_offset };
        fvector2d pencil_end = { pos.x + box_size - pencil_offset, pos.y + pencil_offset };
        canvas->k2_drawline(pencil_start, pencil_end, 1.0f, text_color);

        if (mouse_clicked &&
            mouse_pos.x >= pos.x && mouse_pos.x <= pos.x + box_size &&
            mouse_pos.y >= pos.y && mouse_pos.y <= pos.y + box_size) {
            picker_open = !picker_open;
            picker_pos = { pos.x, pos.y + box_size + 10.0f };
        }

        if (picker_open) {
            return draw_color_picker(canvas, font, label, color, picker_pos, mouse_pos, mouse_clicked);
        }

        return false;
    }


    void angle_vectors(const fvector& angles, fvector* forward)
    {
        
        float    sp, sy, cp, cy;
        sy = sin(deg_2_rad(angles.y));
        cy = cos(deg_2_rad(angles.y));
        sp = sin(deg_2_rad(angles.x));
        cp = cos(deg_2_rad(angles.x));
        forward->x = cp * cy;
        forward->y = cp * sy;
        forward->z = -sp;
    }

    void draw_checkbox(ucanvas* canvas, fvector2d pos, bool value, float animation_progress) {
        
        const float size = 14.0f;
        static const flinearcolor border_color = { 0.2f, 0.2f, 0.2f, 1.0f };
        static const flinearcolor fill_color = { 0.5f, 0.0f, 1.0f, 1.0f };

        draw_modern_rect(canvas, pos.x, pos.y, size, size, border_color);

        if (animation_progress > 0.0f) {
            flinearcolor animated_fill = fill_color;
            animated_fill.a = animation_progress;
            draw_modern_rect(canvas,
                pos.x + 2.0f,
                pos.y + 2.0f,
                size - 1.0f,
                size - 1.0f,
                animated_fill
            );
        }
    }

    void draw_line(ucanvas* canvas, const fvector2d& start, const fvector2d& end, const flinearcolor& color, float& line_thickness) {
        
        if (!canvas) return;

        canvas->k2_drawline(
            fvector2d{ start.x, start.y },
            fvector2d{ end.x, end.y },
            1.0f,
            color
        );
    }

    void draw_checkbox_2(ucanvas* canvas, float x, float y, bool& value, flinearcolor check_color, flinearcolor border_color, fvector2d mouse_pos, bool mouse_clicked) {
        
        constexpr float checkbox_size = 16.0f;
        constexpr float padding = 0.04f;
        static bool debounce = false;

        draw_rect(canvas, x, y, checkbox_size, checkbox_size, border_color);

        if (value) {
            draw_filled_rect(canvas, x + padding, y + padding, checkbox_size - 2 * padding, checkbox_size - 2 * padding, check_color);

            float size = checkbox_size;
            fvector2d pos = { x, y };

            float line_thickness = 30.0f;

            // lines
            draw_line(canvas, fvector2d(pos.x + 4, pos.y + size * 0.55f), fvector2d(pos.x + size * 0.25f, pos.y + size * 0.75f), flinearcolor(1, 1, 1, 1), line_thickness);
            draw_line(canvas, fvector2d(pos.x + size * 0.25f, pos.y + size * 0.75f), fvector2d(pos.x + size - 4, pos.y + size * 0.2f), flinearcolor(1, 1, 1, 1), line_thickness);

        }
        if (mouse_clicked) {
            if (!debounce &&
                mouse_pos.x >= x && mouse_pos.x <= x + checkbox_size &&
                mouse_pos.y >= y && mouse_pos.y <= y + checkbox_size) {
                value = !value;
                debounce = true;
            }
        }
        else {
            debounce = false;
        }
    }

    void draw_modern_dropdown(ucanvas* canvas, uobject* font, const wchar_t* label, int& current_index, const wchar_t** items, int item_count, fvector2d pos, fvector2d mouse_pos, bool mouse_clicked, float text_scale) {
        
        const float dropdown_width = 100.0f;
        const float dropdown_height = 25.0f;
        const float item_height = 25.0f;
        static bool dropdown_open = false;
        static bool mouse_released = true;

        float thickness = 0.8f;
        float width_scale = 1.0f;
        float height_scale = 0.9f;

        if (mouse_clicked && mouse_released && mouse_pos.x >= pos.x && mouse_pos.x <= pos.x + dropdown_width &&
            mouse_pos.y >= pos.y && mouse_pos.y <= pos.y + dropdown_height) {
            dropdown_open = !dropdown_open;
            mouse_released = false;
        }

        if (!mouse_clicked) {
            mouse_released = true;
        }

        draw_filled_rect(canvas, pos.x, pos.y, dropdown_width, dropdown_height, panel_color);
        draw_rect(canvas, pos.x, pos.y, dropdown_width, dropdown_height, border_color);

        float label_x = pos.x;
        float label_y = pos.y - 10.0f;
        hooks::draw_text_custom(canvas, font, label, text_color, { label_x, label_y }, width_scale, height_scale, thickness, 1.0f);

        float value_x = pos.x + (dropdown_width - wcslen(items[current_index]) * 10) / 2;
        float value_y = pos.y + (dropdown_height / 2) - (1.0f * 10.0f / 2) + 5.0f;
        hooks::draw_text_custom(canvas, font, items[current_index], text_color, { value_x, value_y }, width_scale, height_scale, thickness, 1.0f);

        if (dropdown_open) {
            for (int i = 0; i < item_count; i++) {
                float item_y = pos.y + dropdown_height + i * item_height;

                bool is_hovered = (mouse_pos.x >= pos.x && mouse_pos.x <= pos.x + dropdown_width &&
                    mouse_pos.y >= item_y && mouse_pos.y <= item_y + item_height);

                draw_filled_rect(canvas, pos.x, item_y, dropdown_width, item_height, is_hovered ? hover_color : panel_color);
                draw_rect(canvas, pos.x, item_y, dropdown_width, item_height, border_color);

                float item_text_x = pos.x + (dropdown_width - wcslen(items[i]) * 10) / 2;
                float item_text_y = item_y + (item_height / 2) - (1.0f * 10.0f / 2);
                hooks::draw_text_custom(canvas, font, items[i], text_color, { item_text_x, item_text_y }, width_scale, height_scale, thickness, 1.0f);

                if (mouse_clicked && is_hovered) {
                    current_index = i;
                    dropdown_open = false;
                }
            }
        }
    }

    float draw_slider(ucanvas* canvas, uobject* font, const wchar_t* label, float min_value, float max_value, float& value, fvector2d pos, fvector2d mouse_pos, bool mouse_clicked, bool& is_dragging) {
        
        const float control_width = 150.0f; // ancho del slider (aumentado)
        const float control_height = 8.0f; // altura de la pista (aumentada)
        const float track_height = 8.0f; // altura de la pista (aumentada)
        const float handle_size = 8.0f; // tamaño del handle (aumentado)
        const float label_offset_y = 10.0f; // distancia del texto al slider
        const float value_offset_x = 10.0f; // distancia del número al slider

        // text
        float thickness = 0.8f; // grosor del texto
        float width_scale = 1.0f; // escala de anchura
        float height_scale = 0.9f; // escala de altura
        float text_scale = 1.0f; // escala del tamaño de la fuente

        float normalized = (value - min_value) / (max_value - min_value);
        std::wstring value_str = std::to_wstring(static_cast<int>(value));

        hooks::draw_text_custom(canvas, font, label, text_color, { pos.x, pos.y - label_offset_y }, width_scale, height_scale, thickness, text_scale);

        float track_y = pos.y;
        draw_filled_rect(canvas, pos.x, track_y, control_width, track_height, border_color);

        float filled_width = control_width * normalized;
        draw_filled_rect(canvas, pos.x, track_y, filled_width, track_height, accent_color);

        float handle_pos = pos.x + normalized * control_width;
        draw_filled_rect(canvas, handle_pos - handle_size / 2, track_y - handle_size / 2 + track_height / 2,
            handle_size, handle_size, text_color);

        float value_text_x = pos.x + control_width - value_offset_x;
        float value_text_y = pos.y - label_offset_y;
        hooks::draw_text_custom(canvas, font, value_str.c_str(), text_color, { value_text_x, value_text_y }, width_scale, height_scale, thickness, text_scale);

        bool handle_hovered = (mouse_pos.x >= handle_pos - handle_size / 2 && mouse_pos.x <= handle_pos + handle_size / 2 &&
            mouse_pos.y >= track_y - handle_size / 2 && mouse_pos.y <= track_y + handle_size / 2);

        if (mouse_clicked && handle_hovered) {
            is_dragging = true;
        }

        if (is_dragging) {
            if (GetAsyncKeyState(VK_LBUTTON) & 0x8000) {
                float new_normalized = (mouse_pos.x - pos.x) / control_width;
                new_normalized = clamp(new_normalized, 0.0f, 1.0f);
                value = min_value + new_normalized * (max_value - min_value);
            }
            else {
                is_dragging = false;
            }
        }
        return value;
    }
    void DrawLineCanvas(ucanvas* canvas, int x1, int y1, int x2, int y2, flinearcolor color, int thickness)
    {
        
        canvas->k2_drawline(fvector2d(x1, y1), fvector2d(x2, y2), thickness, color);
    }


    void draw_line_2(ucanvas* nigga, fvector2d from, fvector2d to, int thickness, flinearcolor color)
    {
        
        nigga->k2_drawline(fvector2d{ from.x, from.y }, fvector2d{ to.x, to.y }, thickness, color);
    }
    void drawcircle(ucanvas* canvas, fvector2d pos, int radius, int numSides, flinearcolor Color)
    {
        
        float PI = 3.1415927f;

        float Step = PI * 2.0 / numSides;
        int Count = 0;
        fvector2d V[128];
        for (float a = 0; a < PI * 2.0; a += Step) {
            float X1 = radius * cos(a) + pos.x;
            float Y1 = radius * sin(a) + pos.y;
            float X2 = radius * cos(a + Step) + pos.x;
            float Y2 = radius * sin(a + Step) + pos.y;
            V[Count].x = X1;
            V[Count].y = Y1;
            V[Count + 1].x = X2;
            V[Count + 1].y = Y2;

            draw_line_2(canvas, fvector2d{ V[Count].x, V[Count].y }, fvector2d{ X2, Y2 }, 1.0f, Color);
        }
    }


    void DrawFilledCircle23(ucanvas* canvas, fvector2d pos, int radius, int numSides, flinearcolor Color)
    {
        if (!canvas) return;

        float PI = 3.1415927f;
        float Step = PI * 2.0f / numSides;

        for (int i = 0; i < numSides; ++i)
        {
            float angle1 = Step * i;
            float angle2 = Step * (i + 1);

            fvector2d point1 = fvector2d(pos.x + radius * cosf(angle1), pos.y + radius * sinf(angle1));
            fvector2d point2 = fvector2d(pos.x + radius * cosf(angle2), pos.y + radius * sinf(angle2));

            // Draw triangle "fill" as two lines from center to the two points,
            // then the line between those two points to close the segment
            canvas->k2_drawline(pos, point1, 1.0f, Color);
            canvas->k2_drawline(point1, point2, 1.0f, Color);
            canvas->k2_drawline(pos, point2, 1.0f, Color);
        }
    }

    void DrawFilledCircle(fvector2d pos, float r, flinearcolor color, ucanvas* canvas)
    {
        
        constexpr float smooth = 0.05f;
        constexpr double PI = 3.14159265359;
        int numSegments = static_cast<int>(2.0f * PI / smooth) + 1;

        for (float angle = 0; angle < 2 * PI; angle += smooth)
        {
            for (float innerRadius = 0; innerRadius < r; innerRadius += 1.0f)
            {
                fvector2d point = { pos.x + cosf(angle) * innerRadius, pos.y + sinf(angle) * innerRadius };
                draw_line_2(canvas, pos, point, 1.0f, color);
            }
        }
    }

    void DrawLineSimple_Spike(ucanvas* can, fvector2d first_bone_position, fvector2d second_bone_position, flinearcolor Color) {
        can->k2_drawline({ first_bone_position.x, first_bone_position.y }, { second_bone_position.x, second_bone_position.y }, 0.9f, Color);
    }

    namespace radar
    {
        static fvector pRadar;
        void DrawCircleRadar(int x, int y, int radius, flinearcolor color, ucanvas* nigga)
        {
            
            DrawFilledCircle(fvector2d(x, y), radius, color, nigga);
        }

        fvector WorldRadar(fvector srcPos, fvector distPos, float yaw, float radarX, float radarY, float size)
        {
            
            auto cosYaw = cos(DegreeToRadian(yaw));
            auto sinYaw = sin(DegreeToRadian(yaw));

            auto deltaX = srcPos.x - distPos.x;
            auto deltaY = srcPos.y - distPos.y;

            auto locationX = (float)(deltaY * cosYaw - deltaX * sinYaw) / 45.f;
            auto locationY = (float)(deltaX * cosYaw + deltaY * sinYaw) / 45.f;

            if (locationX > (size - 2.f))
                locationX = (size - 2.f);
            else if (locationX < -(size - 2.f))
                locationX = -(size - 2.f);

            if (locationY > (size - 6.f))
                locationY = (size - 6.f);
            else if (locationY < -(size - 6.f))
                locationY = -(size - 6.f);

            return fvector((int)(-locationX + radarX), (int)(locationY + radarY), 0);
        }

        void DrawRadar(fvector EntityPos, ashootercharacter* MyPawns, ucanvas* nigga, ashootercharacter* actor)
        {
            
            auto radar_posX = hooks::radar::pRadar.x + 135;
            auto radar_posY = hooks::radar::pRadar.y + 135;
            if (MyPawns == 0) return;
            uint64_t LocalRootComp = memory::read<uint64_t>((uint64_t)MyPawns + offsets::Rootcomponent);
            fvector LocalPos = memory::read<fvector>(LocalRootComp + offsets::root_position);
            FMinimalViewInfo camerae = memory::read<FMinimalViewInfo>((uint64_t)camera + offsets::CameraRadar);
            auto Radar2D = WorldRadar(LocalPos, EntityPos, camerae.Rotation.y, radar_posX, radar_posY, 135.f);

            bool visible_check = globals::aimbot::vish_check;
            auto Visible = controller->line_of_sight(actor);

            if (Visible) {
                static flinearcolor greenColor{ 0.0f, 1.0f, 0.0f, 1.0f };
                DrawCircleRadar(Radar2D.x, Radar2D.y, 5, greenColor, nigga);
            }
            else {
                static flinearcolor redColor{ 1.0f, 0.0f, 0.0f, 1.0f };
                DrawCircleRadar(Radar2D.x, Radar2D.y, 5, redColor, nigga);
            }
        }
    }


    bool draw_keybind_button(ucanvas* canvas, uobject* font, const wchar_t* label, int& key_to_bind, fvector2d pos, fvector2d mouse_pos, bool mouse_clicked) {
        
        const float button_width = 55.0f;
        const float button_height = 20.0f;
        const float text_scale = 0.8f;
        const float padding = 5.0f;
        static bool listening = false;
        static wchar_t current_key_name[64] = L"";

        auto vk_to_name = [](int key) -> std::wstring {
            switch (key) {
            case VK_LBUTTON: return L"lb";
            case VK_RBUTTON: return L"rb";
            case VK_MBUTTON: return L"mb";
            case VK_XBUTTON1: return L"m4";
            case VK_XBUTTON2: return L"m5";
            case VK_NUMPAD0: return L"np0";
            case VK_NUMPAD1: return L"np1";
            case VK_NUMPAD2: return L"np2";
            case VK_NUMPAD3: return L"np3";
            case VK_NUMPAD4: return L"np4";
            case VK_NUMPAD5: return L"np5";
            case VK_NUMPAD6: return L"np6";
            case VK_NUMPAD7: return L"np7";
            case VK_NUMPAD8: return L"np7";
            case VK_NUMPAD9: return L"np9";
            case VK_MENU: return L"alt";
            case VK_CAPITAL: return L"caps";
            case VK_INSERT: return L"ins";
            case VK_DELETE: return L"del";
            case VK_END: return L"end";
            case VK_TAB: return L"tab";
            case VK_BACK: return L"back";
            case 0x0: return L"none";
            default: {
                CHAR output[16] = { "\0" };
                if (GetKeyNameTextA(MapVirtualKeyW(key, MAPVK_VK_TO_VSC) << 16, output, 16)) {
                    std::wstring result = s2wc(output);
                    std::transform(result.begin(), result.end(), result.begin(), ::towlower);
                    return result;
                }
                return L"";
            }
            }
            };


        draw_filled_rect(canvas, pos.x, pos.y, button_width, button_height, panel_color);


        draw_rect(canvas, pos.x, pos.y, button_width, button_height, border_color);


        const wchar_t* button_text;
        if (listening) {
            button_text = L"...";
        }
        else {
            if (key_to_bind != 0) {
                std::wstring key_name = vk_to_name(key_to_bind);
                wcscpy_s(current_key_name, key_name.c_str());
                button_text = current_key_name;
            }
            else {
                button_text = label;
            }
        }

        float text_x = pos.x + (button_width / 2);
        float text_y = pos.y + (button_height / 2);

        hooks::draw_text_3(canvas, font, button_text, text_color, { text_x, text_y }, text_scale);

        float clickable_x_start = pos.x;
        float clickable_x_end = pos.x + button_width;
        float clickable_y_start = pos.y;
        float clickable_y_end = pos.y + button_height;

        if (mouse_clicked) {
            if (mouse_pos.x >= clickable_x_start && mouse_pos.x <= clickable_x_end &&
                mouse_pos.y >= clickable_y_start && mouse_pos.y <= clickable_y_end) {
                listening = true;
                wcscpy_s(current_key_name, L"...");
                return false;
            }
        }


        if (listening) {
            for (int code = 0; code < 256; code++) {
                if (GetAsyncKeyState(code) & 0x8000) {
                    if (code == VK_ESCAPE) {
                        key_to_bind = 0;
                        wcscpy_s(current_key_name, L"..");
                    }
                    else {
                        key_to_bind = code;
                        std::wstring key_name = vk_to_name(code);
                        wcscpy_s(current_key_name, key_name.c_str());
                    }
                    listening = false;
                    return true;
                }
            }
        }

        return false;
    }
    flinearcolor blend(flinearcolor col, float alpha)
    {
        // blend with black background (0,0,0)
        return flinearcolor(col.r * alpha, col.g * alpha, col.b * alpha, 1.0f);
    }

    void DrawFilledRect(ucanvas* can, fvector2d topleft, fvector2d downright, flinearcolor clr, float alpha)
    {
        

        float left = fminf(topleft.x, downright.x);
        float right = fmaxf(topleft.x, downright.x);
        float top = fminf(topleft.y, downright.y);
        float bottom = fmaxf(topleft.y, downright.y);

        flinearcolor blended = blend(clr, alpha); // darkened instead of real transparency

        for (float y = top; y <= bottom; y += 1.0f)
        {
            can->k2_drawline({ left, y }, { right, y }, 1.0f, blended);
        }
    }
    float CrossProduct2D(const fvector2d& O, const fvector2d& A, const fvector2d& B) {
        return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
    }

    // Calculate squared distance between two points (faster and no sqrt needed)
    float SquaredDistance(const fvector2d& A, const fvector2d& B) {
        float dx = A.x - B.x;
        float dy = A.y - B.y;
        return dx * dx + dy * dy;
    }


    tarray<fvector2d> GrahamScan(tarray<fvector2d> points) {
        if (points.size() < 3) return points;

        int n = points.size();
        int minY = 0;
        for (int i = 1; i < n; i++) {
            if (points[i].y < points[minY].y ||
                (points[i].y == points[minY].y && points[i].x < points[minY].x)) {
                minY = i;
            }
        }

        fvector2d temp = points[0];
        points[0] = points[minY];
        points[minY] = temp;

        for (int i = 1; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                fvector2d pivot = points[0];
                float cross = CrossProduct2D(pivot, points[i], points[j]);

                if (cross < 0) {
                    fvector2d temp2 = points[i];
                    points[i] = points[j];
                    points[j] = temp2;
                }
                else if (abs(cross) < 0.001f) {
                    float dist1 = SquaredDistance(pivot, points[i]);
                    float dist2 = SquaredDistance(pivot, points[j]);
                    if (dist1 > dist2) {
                        fvector2d temp2 = points[i];
                        points[i] = points[j];
                        points[j] = temp2;
                    }
                }
            }
        }

        fvector2d* hullData = new fvector2d[n];
        int hullSize = 0;

        hullData[hullSize++] = points[0];
        hullData[hullSize++] = points[1];
        hullData[hullSize++] = points[2];

        for (int i = 3; i < n; i++) {
            while (hullSize > 1) {
                fvector2d a = hullData[hullSize - 2];
                fvector2d b = hullData[hullSize - 1];
                fvector2d c = points[i];

                if (CrossProduct2D(a, b, c) <= 0) {
                    hullSize--; 
                }
                else {
                    break;
                }
            }
            hullData[hullSize++] = points[i];
        }

        return tarray<fvector2d>(hullData, hullSize, hullSize);
    }

    void DrawLineSimple_3D(ucanvas* can, fvector2d first_bone_position, fvector2d second_bone_position, flinearcolor Color) {
        can->k2_drawline({ first_bone_position.x, first_bone_position.y }, { second_bone_position.x, second_bone_position.y }, 1.15f, Color);
    }

    void DrawConvexHull(ucanvas* Canvas, tarray<fvector2d> hullPoints, flinearcolor Color) {
        if (hullPoints.size() < 2) return;

        for (int i = 0; i < hullPoints.size(); i++) {
            int next = (i + 1) % hullPoints.size();
            DrawLineSimple_3D(Canvas, hullPoints[i], hullPoints[next], Color);
        }
    }

    void DrawBox(ucanvas* can, fvector2d& topleft, fvector2d& downright,
        flinearcolor clr, bool filled = true, float alpha = 0.25f)
    {
        if (filled)
        {
            // use actual color with transparency
            DrawFilledRect(can, topleft, downright, clr, alpha);
        }

        int thicc = 1;
        can->k2_drawline(topleft, { downright.x, topleft.y }, thicc, clr);
        can->k2_drawline(topleft, { topleft.x , downright.y }, thicc, clr);
        can->k2_drawline(downright, { topleft.x , downright.y }, thicc, clr);
        can->k2_drawline(downright, { downright.x, topleft.y }, thicc, clr);
    }

    void DrawCornerBox(ucanvas* can, fvector2d& topleft, fvector2d& downright,
        flinearcolor clr, bool filled = true, float alpha = 0.25f)
    {
        if (filled)
        {
            DrawFilledRect(can, topleft, downright, clr, alpha);
        }

        auto h = downright.y - topleft.y;
        auto w = downright.x - topleft.x;

        float lineW = w / 4.f;
        float lineH = h / 4.f;
        int thicc = 1;

        can->k2_drawline(topleft, { topleft.x + lineW, topleft.y }, thicc, clr);
        can->k2_drawline(topleft, { topleft.x, topleft.y + lineH }, thicc, clr);

        can->k2_drawline({ downright.x - lineW, topleft.y }, { downright.x, topleft.y }, thicc, clr);
        can->k2_drawline({ downright.x, topleft.y + lineH }, { downright.x, topleft.y }, thicc, clr);

        can->k2_drawline({ topleft.x, downright.y - lineH }, { topleft.x, downright.y }, thicc, clr);
        can->k2_drawline({ topleft.x + lineW, downright.y }, { topleft.x, downright.y }, thicc, clr);

        can->k2_drawline({ downright.x - lineW, downright.y }, { downright.x, downright.y }, thicc, clr);
        can->k2_drawline({ downright.x, downright.y - lineH }, { downright.x, downright.y }, thicc, clr);
    }

    static void Draw3DBox(
        ucanvas* canvas,
        aplayercontroller* controller,
        const fvector& head_location,
        const fvector& root_location,
        const flinearcolor& color)
    {
        if (!canvas || !controller) return;

        constexpr float box_width = 40.0f;   // Half-width on X and Y
        constexpr float head_offset = 15.0f; // Slight upward offset for head top

        // Compute 8 corners of the 3D box
        fvector top = head_location + fvector(0, 0, head_offset);
        fvector bottom = root_location;

        fvector box_corners_world[8] =
        {
            // Bottom rectangle (feet)
            { bottom.x + box_width, bottom.y - box_width, bottom.z },
            { bottom.x - box_width, bottom.y - box_width, bottom.z },
            { bottom.x - box_width, bottom.y + box_width, bottom.z },
            { bottom.x + box_width, bottom.y + box_width, bottom.z },

            // Top rectangle (head)
            { top.x + box_width, top.y - box_width, top.z },
            { top.x - box_width, top.y - box_width, top.z },
            { top.x - box_width, top.y + box_width, top.z },
            { top.x + box_width, top.y + box_width, top.z }
        };

        fvector2d box_corners_screen[8];
        for (int i = 0; i < 8; ++i)
        {
            if (!controller->project_world_location_to_screen(box_corners_world[i], box_corners_screen[i], false) ||
                !box_corners_screen[i].is_valid())
            {
                return; // skip if any point is invalid
            }
        }

        // Draw vertical edges
        for (int i = 0; i < 4; ++i)
        {
            canvas->k2_drawline(box_corners_screen[i], box_corners_screen[i + 4], 1.2f, color);
        }

        // Draw top face
        for (int i = 4; i < 8; ++i)
        {
            canvas->k2_drawline(box_corners_screen[i], box_corners_screen[4 + ((i + 1) % 4)], 1.2f, color);
        }

        // Draw bottom face
        for (int i = 0; i < 4; ++i)
        {
            canvas->k2_drawline(box_corners_screen[i], box_corners_screen[(i + 1) % 4], 1.2f, color);
        }
    }


    void Clamp(fvector& Ang) {
        
        if (Ang.x < 0.f)
            Ang.x += 360.f;

        if (Ang.x > 360.f)
            Ang.x -= 360.f;

        if (Ang.y < 0.f) Ang.y += 360.f;
        if (Ang.y > 360.f) Ang.y -= 360.f;

    }

    // draw oq
    void draw_oq_toggle(ucanvas* canvas, uobject* font, const wchar_t* label, bool& value, fvector2d pos, fvector2d mouse_pos, bool clicked) {
        
        const float width = 110.0f;
        const float height = 20.0f;
        const float checkbox_offset = 10.0f;

        size_t toggle_id = generate_toggle_id(label);
        AnimationState& anim_state = g_animation_manager.get_toggle_animation(toggle_id);

        fvector2d checkbox_pos = { pos.x + width - checkbox_offset, pos.y + 2.0f };

        bool hovered = (mouse_pos.x >= checkbox_pos.x && mouse_pos.x <= checkbox_pos.x + 16.0f &&
            mouse_pos.y >= checkbox_pos.y && mouse_pos.y <= checkbox_pos.y + 16.0f);

        if (hovered && clicked) {
            value = !value;
            anim_state.target_value = value;
        }

        const float animation_speed = 0.2f;
        if (value && anim_state.progress < 1.0f) {
            anim_state.progress += animation_speed;
            if (anim_state.progress > 1.0f) anim_state.progress = 1.0f;
        }
        else if (!value && anim_state.progress > 0.0f) {
            anim_state.progress -= animation_speed;
            if (anim_state.progress < 0.0f) anim_state.progress = 0.0f;
        }

        float thickness = 1.0f;
        float width_scale = 1.0f;
        float height_scale = 0.8f;
        float text_scale = 0.9f;

        hooks::draw_text_custom(canvas, font, label, { 0.9f, 0.9f, 0.9f, 1.0f }, { pos.x + 5.0f, pos.y + 2.0f }, width_scale, height_scale, 3.0f, text_scale);
        draw_checkbox(canvas, checkbox_pos, value, anim_state.progress);
    }

    void draw_oq_dropdown(ucanvas* canvas, uobject* font, const wchar_t* label, int& current_index, const wchar_t** items, int item_count, fvector2d pos, fvector2d mouse_pos, bool clicked) {
        
        const float width = 200.0f;
        const float height = 30.0f;
        static const flinearcolor bg = { 0.04f, 0.04f, 0.04f, 1.0f };
        static const flinearcolor hover_bg = { 0.08f, 0.08f, 0.08f, 1.0f };
        static const flinearcolor accent = { 0.5f, 0.0f, 1.0f, 1.0f };

        static size_t dropdown_id = g_animation_manager.register_dropdown();
        DropdownState& state = g_animation_manager.get_dropdown_state(dropdown_id);

        hooks::draw_text(canvas, font, label, { 0.9f, 0.9f, 0.9f, 1.0f }, pos);
        pos.y += 15.0f;

        bool main_hovered = (mouse_pos.x >= pos.x && mouse_pos.x <= pos.x + width &&
            mouse_pos.y >= pos.y && mouse_pos.y <= pos.y + height);

        draw_modern_rect(canvas, pos.x, pos.y, width, height,
            main_hovered ? hover_bg : bg);

        hooks::draw_text(canvas, font, items[current_index], { 0.9f, 0.9f, 0.9f, 1.0f },
            { pos.x + 10.0f, pos.y + 8.0f });

        const wchar_t* arrow = state.is_open ? L"▼" : L"▲";
        hooks::draw_text(canvas, font, arrow, accent,
            { pos.x + width - 20.0f, pos.y + 8.0f });

        if (main_hovered && clicked) {
            state.is_open = !state.is_open;
        }

        if (state.is_open) {
            for (int i = 0; i < item_count; i++) {
                if (i == current_index) continue;

                float item_y = pos.y + height + (i * height);
                bool item_hovered = (mouse_pos.x >= pos.x && mouse_pos.x <= pos.x + width &&
                    mouse_pos.y >= item_y && mouse_pos.y <= item_y + height);

                draw_modern_rect(canvas, pos.x, item_y, width, height,
                    item_hovered ? hover_bg : bg);
                hooks::draw_text(canvas, font, items[i], { 0.9f, 0.9f, 0.9f, 1.0f },
                    { pos.x + 10.0f, item_y + 8.0f });

                if (item_hovered && clicked) {
                    current_index = i;
                    state.is_open = false;
                }
            }
        }
    }
    void draw_circle(ucanvas* canvas, float centerX, float centerY, float radius, int segments, flinearcolor color, float thickness) {
        float angleStep = (2.0f * M_PI) / segments;

        for (int i = 0; i < segments; i++) {
            float theta1 = i * angleStep;
            float theta2 = (i + 1) * angleStep;

            float x1 = centerX + cosf(theta1) * radius;
            float y1 = centerY + sinf(theta1) * radius;
            float x2 = centerX + cosf(theta2) * radius;
            float y2 = centerY + sinf(theta2) * radius;

            canvas->k2_drawline({ x1, y1 }, { x2, y2 }, thickness, color);
        }
    }

    void draw_filled_circle(ucanvas* canvas, float centerX, float centerY, float radius, int segments, flinearcolor color) {
        float angleStep = (2.0f * M_PI) / segments;

        for (int i = 0; i < segments; i++) {
            float theta = i * angleStep;

            float x = centerX + cosf(theta) * radius;
            float y = centerY + sinf(theta) * radius;

            // Draw radial lines from center outward
            canvas->k2_drawline({ centerX, centerY }, { x, y }, 1.0f, color);
        }
    }


    float draw_oq_slider(ucanvas* canvas, uobject* font, const wchar_t* label, float value, float min_value, float max_value, fvector2d pos, fvector2d mouse_pos, bool mouse_clicked, bool& dragging) {
        
        const float width = 200.0f;
        const float height = 6.0f;
        static const flinearcolor bg = { 0.04f, 0.04f, 0.04f, 1.0f };
        static const flinearcolor accent = { 0.5f, 0.0f, 1.0f, 1.0f };
        static const flinearcolor handle_color = { 0.7f, 0.7f, 0.7f, 1.0f };
        static const flinearcolor value_text_color = { 0.9f, 0.9f, 0.9f, 1.0f };

        wchar_t value_text[32];
        swprintf_s(value_text, L"%.1f", value);
        hooks::draw_text(canvas, font, label, { 0.9f, 0.9f, 0.9f, 1.0f }, pos);
        hooks::draw_text(canvas, font, value_text, value_text_color,
            { pos.x + width - 40.0f, pos.y });

        pos.y += 15.0f;

        float normalized = (value - min_value) / (max_value - min_value);

        draw_modern_rect(canvas, pos.x, pos.y, width, height, bg);
        draw_modern_rect(canvas, pos.x, pos.y, width * normalized, height, accent);

        const float handle_size = 12.0f;
        float handle_x = pos.x + (width * normalized) - (handle_size / 2);
        float handle_y = pos.y + (height / 2) - (handle_size / 2);
        draw_modern_rect(canvas, handle_x, handle_y, handle_size, handle_size, handle_color);

        bool handle_hovered = (mouse_pos.x >= handle_x && mouse_pos.x <= handle_x + handle_size &&
            mouse_pos.y >= handle_y && mouse_pos.y <= handle_y + handle_size);

        if (handle_hovered && mouse_clicked) {
            dragging = true;
        }

        if (dragging) {
            if (mouse_clicked) {
                normalized = (mouse_pos.x - pos.x) / width;
                normalized = (std::max)(0.0f, (std::min)(1.0f, normalized));
                return min_value + normalized * (max_value - min_value);
            }
            dragging = false;
        }

        return value;
    }

    // particles
    struct particle {
        fvector2d pos;
        fvector2d vel;
        float life;
        float size;
        flinearcolor color;
    };
    struct logo_state {
        std::vector<particle> particles;
        fvector2d last_pos;
        float animation_time = 0.0f;
    } g_logo_state;
    void update_particles(logo_state& state, float delta_time, fvector2d current_pos) {
        
        if (state.particles.size() < 50) {
            particle new_particle;
            new_particle.pos = current_pos;
            new_particle.vel = {
                (float)(rand() % 100 - 50) / 50.0f,
                (float)(rand() % 100) / 50.0f
            };
            new_particle.life = 1.0f;
            new_particle.size = 5.0f + (rand() % 5);
            new_particle.color = { 1.0f, 0.5f, 0.1f, 1.0f };
            state.particles.push_back(new_particle);
        }

        for (auto& p : state.particles) {
            p.pos.x += p.vel.x * delta_time * 60.0f;
            p.pos.y += p.vel.y * delta_time * 60.0f;
            p.life -= delta_time * 2.0f;
            p.color.a = p.life;
        }

        state.particles.erase(
            std::remove_if(state.particles.begin(), state.particles.end(),
                [](const particle& p) { return p.life <= 0; }),
            state.particles.end()
        );

        state.last_pos = current_pos;
    }

    auto calculate_box_dimensions = [](fvector2d head_long_out, fvector2d base_out) -> std::pair<float, float> {

        float box_height = abs(head_long_out.y - base_out.y);
        float box_width = box_height * 0.55f;
        return { box_width, box_height };
        };


    flinearcolor hsv_to_rgb(float h, float s = 1.f, float v = 1.f)
    {
        float c = v * s;
        float x = c * (1 - fabsf(fmodf(h / 60.0f, 2) - 1));
        float m = v - c;

        float r, g, b;
        if (h < 60) { r = c; g = x; b = 0; }
        else if (h < 120) { r = x; g = c; b = 0; }
        else if (h < 180) { r = 0; g = c; b = x; }
        else if (h < 240) { r = 0; g = x; b = c; }
        else if (h < 300) { r = x; g = 0; b = c; }
        else { r = c; g = 0; b = x; }

        return { r + m, g + m, b + m, 1.f };
    }


    bool is_sniper_weapon(const fstring& weapon_name) {
        return
            weapon_name.wide() == L"Operator" ||
            weapon_name.wide() == L"Marshal" ||
            weapon_name.wide() == L"Outlaw";
    }


    std::string GetEquippableVFXState(EAresEquippableState STATE) {

        switch (STATE) {
        case EAresEquippableState::Reloading:
            return crypt("Reloading..").decrypt();
            break;
        case EAresEquippableState::Inspecting:
            return crypt("Inspecting").decrypt();
            break;
        case EAresEquippableState::Firing:
            return crypt("Shooting").decrypt();
            break;
        case EAresEquippableState::ADS_Firing:
            return crypt("ADS_Firing").decrypt();
            break;
        case EAresEquippableState::Attacking:
            return crypt("Attacking").decrypt();
            break;
        default:
            return crypt("No Action").decrypt();
        }
    }



    std::array<int, 256> aim_names = {
VK_LBUTTON,
VK_RBUTTON,
VK_MBUTTON,
VK_XBUTTON1,
VK_XBUTTON2,

'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',

'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',

VK_F1, VK_F2, VK_F3, VK_F4, VK_F5, VK_F6, VK_F7, VK_F8, VK_F9, VK_F10, VK_F11, VK_F12,

VK_UP,
VK_DOWN,
VK_LEFT,
VK_RIGHT,

VK_SHIFT,
VK_LSHIFT,
VK_RSHIFT,
VK_CONTROL,
VK_LCONTROL,
VK_RCONTROL,
VK_MENU,
VK_LMENU,
VK_RMENU,
VK_CAPITAL,
VK_TAB,
VK_RETURN,
VK_BACK,
VK_ESCAPE,
VK_SPACE,

VK_OEM_1,
VK_OEM_PLUS,
VK_OEM_COMMA,
VK_OEM_MINUS,
VK_OEM_PERIOD,
VK_OEM_2,
VK_OEM_3,
VK_OEM_4,
VK_OEM_5,
VK_OEM_6,
VK_OEM_7,

VK_NUMPAD0, VK_NUMPAD1, VK_NUMPAD2, VK_NUMPAD3, VK_NUMPAD4,
VK_NUMPAD5, VK_NUMPAD6, VK_NUMPAD7, VK_NUMPAD8, VK_NUMPAD9,
VK_MULTIPLY, VK_ADD, VK_SEPARATOR, VK_SUBTRACT, VK_DECIMAL, VK_DIVIDE,

VK_INSERT, VK_DELETE, VK_HOME, VK_END, VK_PRIOR, VK_NEXT,
VK_PAUSE, VK_SCROLL,
    };
    std::array<std::wstring, 4> aim_types = { crypt(L"l3ftmouse").decrypt(),  crypt(L"rightm0use").decrypt(),crypt(L"m0use4").decrypt(), crypt(L"m0use5").decrypt() };
    std::array<std::wstring, 3> bone_types = { crypt(L"h3ad").decrypt(),  crypt(L"ch3st").decrypt(),crypt(L"l3g").decrypt() };
    std::array<std::wstring, 3> box_types = { crypt(L"c0rner").decrypt(), crypt(L"2d").decrypt(), crypt(L"3d").decrypt() };


    void DrawTextRGBWithFString(uobject* font, ucanvas* canvas, fstring text, float x, float y, flinearcolor color, bool CenterX = 0)
    {
        
        canvas->k2_drawtext(font, text, { x, y }, { 1.1, 1.1 }, color, 0.f, { 0, 0, 0, 1 }, { 0, 0 }, CenterX, 0, 1, { 0, 0, 0, 1 });
    }

    bool ToBool(const std::string& s) {
        return s == "1" || s == "true";
    }

    int ToInt(const std::string& s) {
        try { return std::stoi(s); }
        catch (...) { return 0; }
    }

    float ToFloat(const std::string& s) {
        try { return std::stof(s); }
        catch (...) { return 0.f; }
    }

    std::unordered_map<std::string, std::string> ParseSection(std::ifstream& file) {
        std::unordered_map<std::string, std::string> values;
        std::string line;
        while (std::getline(file, line)) {
            if (line.empty() || line[0] == '[') {
                // next section or empty line means section ended
                if (!line.empty()) file.seekg(-static_cast<int>(line.size()) - 1, std::ios_base::cur); // rewind one line
                break;
            }
            auto pos = line.find('=');
            if (pos != std::string::npos) {
                std::string key = line.substr(0, pos);
                std::string val = line.substr(pos + 1);
                values[key] = val;
            }
        }
        return values;
    }
    static shadow_vmt viewport_hook2323;

    void hooks::Rehook(uworld* Uworld, aplayercontroller* PlayerController, aplayercameramanager* cameramanager)
    {
        if (Uworld == nullptr || PlayerController == nullptr || cameramanager == nullptr)
            return;

        if (cameramanager == nullptr)
            return;

        if (hooks::UWorldClass != Uworld)
        {
            if (!memory::IsValidPointer((uintptr_t)cameramanager))
                return;

            hooks::camera_shadow.virtual_hook(
                reinterpret_cast<void*>(cameramanager),
                hooks::SetCameraCachePOVHook,
                offsets::update_view_target,
                (void**)&hooks::SetCameraCachePOVOriginal
            );
            hooks::UWorldClass = Uworld;
        }
    }


    enum class ECompetitiveTier : uint8_t
    {
        Iron1 = 3,
        Iron2 = 4,
        Iron3 = 5,
        Bronze1 = 6,
        Bronze2 = 7,
        Bronze3 = 8,
        Silver1 = 9,
        Silver2 = 10,
        Silver3 = 11,
        Gold1 = 12,
        Gold2 = 13,
        Gold3 = 14,
        Platinum1 = 15,
        Platinum2 = 16,
        Platinum3 = 17,
        Diamond1 = 18,
        Diamond2 = 19,
        Diamond3 = 20,
        Immortal1 = 21,
        Immortal2 = 22,
        Immortal3 = 23,
        Radiant = 24,
        ECompetitiveTier_MAX = 25,
    };

    const char* GetTierName(ECompetitiveTier tier)
    {
        switch (tier)
        {
        case ECompetitiveTier::Iron1: return "Iron 1";
        case ECompetitiveTier::Iron2: return "Iron 2";
        case ECompetitiveTier::Iron3: return "Iron 3";
        case ECompetitiveTier::Bronze1: return "Bronze 1";
        case ECompetitiveTier::Bronze2: return "Bronze 2";
        case ECompetitiveTier::Bronze3: return "Bronze 3";
        case ECompetitiveTier::Silver1: return "Silver 1";
        case ECompetitiveTier::Silver2: return "Silver 2";
        case ECompetitiveTier::Silver3: return "Silver 3";
        case ECompetitiveTier::Gold1: return "Gold 1";
        case ECompetitiveTier::Gold2: return "Gold 2";
        case ECompetitiveTier::Gold3: return "Gold 3";
        case ECompetitiveTier::Platinum1: return "Platinum 1";
        case ECompetitiveTier::Platinum2: return "Platinum 2";
        case ECompetitiveTier::Platinum3: return "Platinum 3";
        case ECompetitiveTier::Diamond1: return "Diamond 1";
        case ECompetitiveTier::Diamond2: return "Diamond 2";
        case ECompetitiveTier::Diamond3: return "Diamond 3";
        case ECompetitiveTier::Immortal1: return "Immortal 1";
        case ECompetitiveTier::Immortal2: return "Immortal 2";
        case ECompetitiveTier::Immortal3: return "Immortal 3";
        case ECompetitiveTier::Radiant: return "Radiant";
        default: return "Unranked";
        }
    }

    static fvector2d pos;
    static bool initialized = false;

    fvector2d menuSize = { 560, 400 };
   
    void RenderWatermark(ucanvas* canvas) {
        if (!canvas) return;
        

        static int fps = 0;
        static int frameCount = 0;
        static auto lastTime = std::chrono::steady_clock::now();
        frameCount++;
        auto currentTime = std::chrono::steady_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastTime).count();
        if (elapsed >= 1000) {
            fps = frameCount;
            frameCount = 0;
            lastTime = currentTime;
        }


        int tickrate = 128;

        auto now = std::chrono::system_clock::now();
        auto time = std::chrono::system_clock::to_time_t(now);
        std::tm tm_time;
        localtime_s(&tm_time, &time);
        int hour = tm_time.tm_hour;
        int minute = tm_time.tm_min;
        int second = tm_time.tm_sec;
        const wchar_t* period = hour >= 12 ? L"PM" : L"AM";
        if (hour > 12) hour -= 12;
        if (hour == 0) hour = 12;
        int day = tm_time.tm_mday;
        int month = tm_time.tm_mon + 1;

        // ===== BUILD TEXT =====
        wchar_t line1[256];
        wchar_t line2[256];

        swprintf_s(line1, L"RyzerINC  %02d/%02d", month, day);
        swprintf_s(line2, L"FPS | %d  TICK | %d  %02d:%02d:%02d %s",
            fps, tickrate, hour, minute, second, period);

        // ===== COLORS =====
        flinearcolor titleColor = { 0.0f, 0.59f, 1.0f, 1.0f };        // Blue
        flinearcolor whiteColor = { 1.0f, 1.0f, 1.0f, 1.0f };         // White
        flinearcolor shadowColor = { 0.0f, 0.0f, 0.0f, 0.0f };        // No shadow

        // ===== POSITION =====
        fvector2d pos(50.0f, 80.0f);
        fvector2d normalScale(1.0f, 1.0f);
        fvector2d normalScale2(1.1f, 1.1f);
        fvector2d noOffset(0.0f, 0.0f);

        // ===== DRAW LINE 1 - FAT TITLE =====
        // Draw multiple times with tiny offsets to make it THICK
        fvector2d offsets[4] = {
            { 1.0f, 0.0f },  // right
            { -1.0f, 0.0f }, // left
            { 0.0f, 1.0f },  // down
            { 0.0f, -1.0f }  // up
        };

    
        // Draw the main one on top
        canvas->k2_drawtext(
            menu::font,
            fstring(line1),
            pos,
            normalScale2,
            whiteColor,
            0.0f,
            shadowColor,
            noOffset,
            false, false, false,
            shadowColor
        );

        // ===== DRAW LINE 2 - REGULAR =====
        fvector2d pos2(pos.x, pos.y + 30.0f);

        canvas->k2_drawtext(
            menu::font,
            fstring(line2),
            pos2,
            normalScale,
            whiteColor,
            0.0f,
            shadowColor,
            noOffset,
            false, false, false,
            shadowColor
        );
    }

    void hk_draw_canvas(ucanvas* canvas) {
        
        menu::SetupCanvas(canvas);
        inpute::handle();

        if (!globals::misc::hide_watermark) {
            RenderWatermark(canvas);
        }
 
        if (GetAsyncKeyState(globals::misc::MenuKey) & 1)
            open_canvas = !open_canvas;


        static fvector2d pos{};
        static fvector2d menuSize = { 560, 400 };
        static bool initialized = false;

        if (!initialized) {
            pos.x = (canvas->get_screen_size().x - menuSize.x) / 2.0f;
            pos.y = (canvas->get_screen_size().y - menuSize.y) / 2.0f;
            initialized = true;
        }

        if (menu::Window(crypt(L"RyzerINC").decrypt(), crypt(L"Build:").decrypt(), ShooterGameBlueprints::GetValVersion(), &pos, menuSize, open_canvas)) {
            static int tab = 0;
            menu::offset_x = 105;
            if (menu::ButtonTab(crypt(L"Aim").decrypt(), fvector2d(45, 18), tab == 0)) tab = 0;
            menu::offset_x = 0;
            menu::SameLine();
            if (menu::ButtonTab(crypt(L"Visuals").decrypt(), fvector2d(62, 18), tab == 1)) tab = 1;
            menu::offset_x = 0;
            menu::SameLine();
            if (menu::ButtonTab(crypt(L"Misc").decrypt(), fvector2d(45, 18), tab == 2)) tab = 2;

            menu::offset_x = 0;
            menu::SameLine();
            if (menu::ButtonTab(crypt(L"Config").decrypt(), fvector2d(45, 18), tab == 3)) tab = 3;

            menu::offset_x = 23;
            menu::offset_y = 43;

            if (tab == 0) {
                static int tab2 = 0;
                if (menu::ButtonSection(crypt(L"Aimbot").decrypt(), fvector2d(104, 20), tab2 == 0)) tab2 = 0;
                if (menu::ButtonSection(crypt(L"Trigger").decrypt(), fvector2d(104, 20), tab2 == 1)) tab2 = 1;

                if (tab2 != 0) {
                    menu::offset_y -= 25;
                }
                if (tab2 != 1) {

                    menu::offset_y -= 25;
                }

                float saved_offset_y = menu::offset_y;

                if (tab2 == 0) { // aim

                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left

                    menu::Checkbox(crypt(L"Enable Aimbot").decrypt(), &globals::aimbot::aimbot);
                    menu::Checkbox(crypt(L"Prediction").decrypt(), &globals::aimbot::Prediction);

                    menu::Checkbox(crypt(L"Silent Aim").decrypt(), &globals::aimbot::silentmaw);
                    menu::offset_x += 13;
                    menu::SliderFloat(crypt(L"Smooth").decrypt(), &globals::aimbot::aim_smooth, 1, 40, "%0.f");
                    menu::offset_x -= 13;
                    menu::offset_y += 13;


                    menu::Checkbox(crypt(L"Perfect Spread").decrypt(), &globals::aimbot::nospread);
                    if (globals::aimbot::aimbot && globals::aimbot::nospread) {
                        float warnW = 197.0f, warnH = 89.0f;
                        fvector2d warnPos = fvector2d(menu::menu_pos.x + 1 + menu::offset_x, menu::menu_pos.y + 3 + menu::offset_y);
                        menu::drawFilledRect(warnPos, warnW, warnH, RGBtoFLC(10, 10, 10));
                        menu::drawFilledRect(warnPos, warnW, 2, RGBtoFLC(220, 0, 0));
                        menu::drawFilledRect(fvector2d(warnPos.x, warnPos.y + warnH - 2), warnW, 2, RGBtoFLC(220, 0, 0));
                        menu::drawFilledRect(warnPos, 2, warnH, RGBtoFLC(220, 0, 0));
                        menu::drawFilledRect(fvector2d(warnPos.x + warnW - 2, warnPos.y), 2, warnH, RGBtoFLC(220, 0, 0));
                        menu::offset_y += 4;
                        menu::Text(L"no spreadı kullanmak için");
                        menu::Text(L"enable aimbotu kapat");
                        menu::Text(L"yoksa aimbot bozuluyor");
                        menu::offset_y += 4;
                    }
                    menu::Checkbox(crypt(L"Perfect Resolver").decrypt(), &globals::aimbot::resolver);
                    menu::Checkbox(crypt(L"Perfect Auto Shoot").decrypt(), &globals::aimbot::AutoShoot);
             /*       menu::Checkbox(crypt(L"Perfect Thru Smoke").decrypt(), &globals::aimbot::ThruSmoke);*/

                    menu::offset_x -= 2;

                    menu::offset_y += 4;
                    menu::Combobox(crypt(L"Closest Option").decrypt(), fvector2d(100, 24), &globals::aimbot::target_selection,
                        crypt(L"Distance").decrypt(),
                        crypt(L"FOV Based").decrypt(), NULL);

                    menu::offset_y += 4;
                    menu::Combobox(crypt(L"Target").decrypt(), fvector2d(100, 24), &globals::aimbot::aim_bone, crypt(L"Head").decrypt(), crypt(L"Chest").decrypt(), crypt(L"Penis").decrypt(), NULL);

                    menu::offset_y -= 17;

                    menu::offset_x -= menu::offset_tab1;

                    // right
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab2;
                    menu::Checkbox(crypt(L"Fov Rgb").decrypt(), &globals::aimbot::draw_fovrainbow);
                    menu::Checkbox(crypt(L"Draw Fov").decrypt(), &globals::aimbot::draw_fov);
                    menu::Checkbox(crypt(L"Bullet Trace").decrypt(), &globals::aimbot::BulletTrace);
                    menu::Checkbox(crypt(L"Cooldown Checks").decrypt(), &globals::aimbot::nodelay);
                    menu::Checkbox(crypt(L"Auto Fire").decrypt(), &globals::aimbot::AutoFire);
                    menu::Checkbox(crypt(L"Auto Wall").decrypt(), &globals::aimbot::wallbang);
                    menu::Checkbox(crypt(L"No Smoke").decrypt(), &globals::aimbot::smokeno);
                    menu::Checkbox(crypt(L"Closets Bone").decrypt(), &globals::aimbot::close_bone);
                    menu::Checkbox(crypt(L"360 FOV").decrypt(), &globals::aimbot::aimbot360);

                    menu::offset_y += 4;
                    menu::Hotkey(crypt("Aim Key").decrypt(), fvector2d{ 75, 25 }, &globals::aimbot::aim_key);

                    menu::offset_x += 12;
                    menu::SliderFloat(crypt(L"Fov").decrypt(), &globals::aimbot::aim_fov, 1, 1500, "%0.f");
                    menu::offset_x -= 12;

                    menu::offset_y += 12;

                    menu::offset_x += 12;
                    menu::SliderFloat(crypt(L"Auto Shoot").decrypt(), &globals::aimbot::AutoshootFloat, 1.0f, 500.0f, "%0.f");

                    if (globals::aimbot::nodelay) {
                        menu::offset_x -= 12;
                        menu::offset_y += 12;
                        menu::offset_x += 12;
                        menu::SliderFloat(crypt(L"Cooldown").decrypt(), &globals::aimbot::CooldownChecks, 0.0f, 1.0f, "%.2f");


                    }
                  
                    menu::offset_x -= 12;


                    menu::offset_x -= menu::offset_tab2;
                }
                else if (tab2 == 1) { // exploits

                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left
                    menu::Checkbox(crypt(L"Enable TriggerBot").decrypt(), &globals::aimbot::triggerbot);
                    menu::Checkbox(crypt(L"Recoil Control").decrypt(), &globals::aimbot::recoil_control);
                    menu::Checkbox(crypt(L"Recoil Crosshair").decrypt(), &globals::aimbot::recoilcrosshair);
                    menu::offset_x -= menu::offset_tab1;

                    // right
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab2;
                    menu::Checkbox(crypt(L"Visible Check").decrypt(), &globals::aimbot::vish_check);
                    menu::offset_y += 4;
                    menu::Hotkey(crypt("Trigger Key").decrypt(), fvector2d{ 75, 25 }, &globals::aimbot::trigger_key);
                    menu::offset_y -= 4;

                    menu::offset_x -= menu::offset_tab2;
                }   
            }

            if (tab == 1) {

                static int tab2 = 2;
                if (menu::ButtonSection(crypt(L"Esp").decrypt(), fvector2d(104, 20), tab2 == 2)) tab2 = 2;
                if (menu::ButtonSection(crypt(L"Viewmodel").decrypt(), fvector2d(104, 20), tab2 == 3)) tab2 = 3;
                if (menu::ButtonSection(crypt(L"Exploits").decrypt(), fvector2d(104, 20), tab2 == 4)) tab2 = 4;
                if (menu::ButtonSection(crypt(L"Hand Chams").decrypt(), fvector2d(104, 20), tab2 == 5)) tab2 = 5;

                if (menu::ButtonSection(crypt(L"Fade Chams").decrypt(), fvector2d(104, 20), tab2 == 6)) tab2 = 6;
                if (menu::ButtonSection(crypt(L"Auto Lock").decrypt(), fvector2d(104, 20), tab2 == 7)) tab2 = 7;
                if (menu::ButtonSection(crypt(L"Buddy Changer").decrypt(), fvector2d(104, 20), tab2 == 8)) tab2 = 8;

                if (tab2 != 2) {

                    menu::offset_y -= 25;
                }
                if (tab2 != 3) {

                    menu::offset_y -= 25;
                }

                if (tab2 != 4) {

                    menu::offset_y -= 25;
                }

                if (tab2 != 5) {

                    menu::offset_y -= 25;
                }
                if (tab2 != 6) {
                    menu::offset_y -= 25;
                }
                if (tab2 != 7) {
                    menu::offset_y -= 25;
                }

                if (tab2 != 8) {
                    menu::offset_y -= 25;
                }

                float saved_offset_y = menu::offset_y;
                if (tab2 == 2) {

                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left 
                    menu::Checkbox(crypt(L"Skeleton").decrypt(), &globals::visuals::skeleton);
                    menu::Checkbox(crypt(L"Box").decrypt(), &globals::visuals::box);
                    menu::Checkbox(crypt(L"Box 2D").decrypt(), &globals::visuals::box2d);
                    menu::Checkbox(crypt(L"Box 3D").decrypt(), &globals::visuals::box3d);
                    menu::Checkbox(crypt(L"Box2D + Health").decrypt(), &globals::visuals::boxhealth);
                    menu::Checkbox(crypt(L"Box Filled").decrypt(), &globals::visuals::filled2);
                    menu::Checkbox(crypt(L"Head").decrypt(), &globals::visuals::headbox);
                    menu::Checkbox(crypt(L"Snapline").decrypt(), &globals::visuals::snapline);
                    menu::Checkbox(crypt(L"Snapline Head").decrypt(), &globals::visuals::snapline1);
                    menu::Checkbox(crypt(L"Health Bar").decrypt(), &globals::visuals::healthbar);
                    menu::Checkbox(crypt(L"Map Radar Server").decrypt(), &globals::visuals::RadarMap);
                    menu::Checkbox(crypt(L"Fresnel Intensity High").decrypt(), &globals::visuals::FresnelShi);
                    menu::offset_x -= menu::offset_tab1;

                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab2;
                    menu::Checkbox(crypt(L"Agent").decrypt(), &globals::visuals::booms);
                    menu::Checkbox(crypt(L"Weapon Icon").decrypt(), &globals::visuals::biims);
                    menu::Checkbox(crypt(L"Weapon Name").decrypt(), &globals::visuals::weaponname);

                    menu::Checkbox(crypt(L"Distance").decrypt(), &globals::visuals::dstc);
                    menu::Checkbox(crypt(L"Weapon State").decrypt(), &globals::visuals::weaponstate);
                    menu::Checkbox(crypt(L"Radar").decrypt(), &globals::visuals::Radar);
                    menu::Checkbox(crypt(L"Riot Name").decrypt(), &globals::visuals::playername);
                    menu::Checkbox(crypt(L"Player Rank").decrypt(), &globals::visuals::playerrank);



                    menu::offset_x -= menu::offset_tab2;
                }
                else if (tab2 == 3) {
                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left
                    menu::Checkbox(crypt(L"Hand Viewmodel").decrypt(), &globals::misc::widearms);

                    menu::offset_x -= menu::offset_tab1;
                    menu::offset_x -= menu::offset_tab2;
                }
                else if (tab2 == 4)
                {
                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));


                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left
                    menu::Checkbox(crypt(L"Hand Wireframe").decrypt(), &globals::visuals::mawmaw);
                    menu::Checkbox(crypt(L"Self Wireframe").decrypt(), &globals::misc::WireframeSelf);
                    menu::Checkbox(crypt(L"Chams").decrypt(), &globals::visuals::chams);
                    menu::Checkbox(crypt(L"Chams RGB").decrypt(), &globals::visuals::chamsRGB);

                    menu::Checkbox(crypt(L"Fresnel Enemy").decrypt(), &globals::misc::fresnel);
                    menu::Checkbox(crypt(L"Fresnel Rainbow").decrypt(), &globals::misc::fresnelrainbow);

                    menu::Checkbox(crypt(L"Dropped Gun").decrypt(), &globals::misc::dropped);

                    menu::Checkbox(crypt(L"Nebula Chams Self").decrypt(), &globals::misc::NebulaChams3p);
                    if (globals::misc::NebulaChams3p) {
                        static int material_index2 = 0;

                        menu::Combobox(crypt(L"Nebula Self").decrypt(), fvector2d(100, 24), &material_index2,
                            L"1", L"2", L"3", NULL);
                        globals::visuals::crystal_enemy_preset = material_index2;
                    }

                    menu::Checkbox(crypt(L"Galaxy Chams Self").decrypt(), &globals::misc::GalaxySelf);
                    menu::Checkbox(crypt(L"Galaxy Chams Enemy").decrypt(), &globals::misc::GalaxyEnemy);
                    if (globals::visuals::chams || globals::visuals::chamsRGB) {
                        menu::offset_x += 12;
                        menu::SliderFloat(crypt(L"Glow Alpha").decrypt(), &globals::visuals::chamsAlpha, 1, 15, "%0.f");
                        menu::offset_y += 14;
                        menu::SliderFloat(crypt(L"Glow Intensity").decrypt(), &globals::misc::GlowIntensity, 1, 15, "%0.f");

                    }


                    menu::offset_x -= menu::offset_tab1;
                    // right
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab2;
                    menu::Checkbox(crypt(L"Ignore Dormant").decrypt(), &globals::visuals::dormant);
                    menu::Checkbox(crypt(L"Gun Wireframe").decrypt(), &globals::visuals::mawmawmaw);
                    menu::Checkbox(crypt(L"Visible Check").decrypt(), &globals::visuals::visiblecheck);
                    menu::Checkbox(crypt(L"Spike Timer").decrypt(), &globals::visuals::abilitiesspike);
                    menu::Checkbox(crypt(L"Abilities ESP").decrypt(), &globals::visuals::abilities);
       
                    
                    menu::Checkbox(crypt(L"Team Check").decrypt(), &globals::misc::team_check);
                    menu::Checkbox(crypt(L"Fresnel Hand").decrypt(), &globals::misc::FresnelHand);
                    menu::Checkbox(crypt(L"Fresnel Self").decrypt(), &globals::misc::Fresnel3p);
                    menu::Checkbox(crypt(L"Aspect Ratio").decrypt(), &globals::misc::AspectRatio);
                    menu::offset_x += 12;
                    menu::offset_y += 2;
                    menu::SliderFloat(crypt(L"Aspect Value").decrypt(), &globals::misc::aspectvalue, 1, 5, "%0.f");
                    menu::offset_y += 13;
                    menu::SliderFloat(crypt(L"Fresnel Glow").decrypt(), &globals::misc::FresnelGlow, 1, 25, "%0.f");

                    menu::offset_y += 10;
                    menu::ColorPicker(crypt(L"Chams Color").decrypt(), &ChamsColor);

                    menu::offset_x -= menu::offset_tab2;
                }
                else if (tab2 == 5) {
                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left
                    menu::Checkbox(crypt(L"Hand Chams").decrypt(), &globals::visuals::HandChams);
                    menu::Checkbox(crypt(L"Weapon Chams").decrypt(), &globals::visuals::WeaponChams);
                    menu::Checkbox(crypt(L"Weapon3P Chams").decrypt(), &globals::visuals::gun_with_material);
                    menu::Checkbox(crypt(L"Custom Color").decrypt(), &globals::visuals::HandChamsCustom);
                    if (globals::visuals::HandChamsCustom) {

                        menu::offset_y += 6;
                        menu::SliderFloat(crypt(L"Red").decrypt(), &globals::misc::Red, 1, 25, "%0.f");
                        menu::offset_y += 13;
                        menu::SliderFloat(crypt(L"Green").decrypt(), &globals::misc::Green, 1, 25, "%0.f");
                        menu::offset_y += 13;
                        menu::SliderFloat(crypt(L"Blue").decrypt(), &globals::misc::Blue, 1, 25, "%0.f");
                        menu::offset_y += 13;
                        menu::SliderFloat(crypt(L"Glow").decrypt(), &globals::misc::HandChamsGlow, 1, 20, "%0.f");
                        menu::offset_y += 13;
                        menu::SliderFloat(crypt(L"Alpha Base Power").decrypt(), &globals::misc::AlphaBasePower, 0.00f, 20, "%.2f");
                   
                        menu::offset_y += 13;
                    }



                    bool prevRGB = globals::visuals::HandChamsRGB;
                    bool prevCustom = globals::visuals::HandChamsCustom;

                    if (!prevRGB && globals::visuals::HandChamsRGB) {
                        globals::visuals::HandChamsCustom = false;
                    }
                    if (!prevCustom && globals::visuals::HandChamsCustom) {
                        globals::visuals::HandChamsRGB = false;
                    }


                    menu::offset_x -= menu::offset_tab1;

                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab2;
                    menu::Checkbox(crypt(L"Chams RGB").decrypt(), &globals::visuals::HandChamsRGB);
                    menu::Checkbox(crypt(L"Galaxy Chams Hand").decrypt(), &globals::misc::GalaxyHand);
                    menu::Checkbox(crypt(L"Nebula Chams Hand").decrypt(), &globals::misc::NebulaChamsHand);
                    menu::Checkbox(crypt(L"Cool Chams").decrypt(), &globals::misc::CoolChams);
                    menu::Checkbox(crypt(L"Cool Chams 3P").decrypt(), &globals::misc::CoolChams3p);

                    menu::Checkbox(crypt(L"Hand Material").decrypt(), &globals::visuals::Hand_material);

                    static int material_index = 0;
                    static int material_index2 = 0;

                    menu::Combobox(L"Nebula Hand", fvector2d(100, 24), &material_index2,
                        L"1", L"2", L"3", NULL);
                    globals::visuals::crystal_chams_preset = material_index2;

                    menu::Combobox(L"Hand Material", fvector2d(100, 24), &material_index,
                        L"Black", L"Reyna Ult", L"Green", L"Glass",
                        L"Pink", L"Yellow", L"Red", L"Blue", L"Random", NULL);
                    globals::misc::materials = material_index;


                    menu::offset_x -= menu::offset_tab2;
                }
                else if (tab2 == 6) {
                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left
                    menu::Checkbox(crypt(L"Fade Chams").decrypt(), &globals::misc::FadeChams);
                    menu::Checkbox(crypt(L"Self Fade Chams").decrypt(), &globals::misc::SelfFadeChams);

                    if (globals::misc::FadeChams || globals::misc::SelfFadeChams) {
                        static int material_index = -1;

                        menu::Combobox(L"Self Visible Preset", { 100, 27 }, & globals::visuals::visiblepresetforself,
                            L"Default Green",
                            L"Toxic Glow",
                            L"Neon Ice",
                            L"Solar Flare",
                            L"Void Spark",
                            L"Ghost White",
                            L"Aurora Dream",
                            L"Cyber Ember",
                            L"Lunar Fade",
                            L"Mystic Flame",
                            L"Arc Light",
                            L"Burning Core",
                            L"Deep Ocean",
                            L"Crystal Edge",
                            L"Magma Burn",
                            NULL);


                        menu::Combobox(L"Visible Preset", { 100, 27 }, & globals::visuals::visiblepreset,
                            L"Default Green",
                            L"Toxic Glow",
                            L"Neon Ice",
                            L"Solar Flare",
                            L"Void Spark",
                            L"Ghost White",
                            L"Aurora Dream",
                            L"Cyber Ember",
                            L"Lunar Fade",
                            L"Mystic Flame",
                            L"Arc Light",
                            L"Burning Core",
                            L"Deep Ocean",
                            L"Crystal Edge",
                            L"Magma Burn",
                            NULL);

                        menu::Combobox(L"InVisible Preset", { 100, 27 }, & globals::visuals::invisiblepreset,
                            L"Default Red",
                            L"Inferno",
                            L"Phantom Pulse",
                            L"Voltage Spike",
                            L"Frostbite",
                            L"Undead Mist",
                            L"Blood Moon",
                            L"Spectral Veil",
                            L"Grave Ember",
                            L"Arc Phantom",
                            L"Wraithfire",
                            L"Pale Storm",
                            L"Dark Volt",
                            L"Ether Smoke",
                            L"Poison Chill",
                            NULL);

                        menu::Combobox(L"Fade Outline", fvector2d(100, 24), &material_index,
                            L"Visible Only", L"Visible Check", NULL);

                        menu::SliderFloat(crypt(L"Glow Fade").decrypt(), &globals::misc::FadeChamsGlow, 0, 50, "%.0f");


                        globals::misc::Outlines = material_index;


                    }

                    menu::offset_x -= menu::offset_tab2;

                }
                else if (tab2 == 7) {
                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left
                    menu::Checkbox(crypt(L"AutoLock").decrypt(), &globals::il::enable);
                    menu::Checkbox(crypt(L"AutoLock Random Agent").decrypt(), &globals::il::random_agent);


                    static int material_index = -1;
                    menu::Combobox(
                        L"Agent",
                        fvector2d(100, 24),
                        &globals::il::lock_agent,
                        L"Astra",
                        L"Breach",
                        L"Brimstone",
                        L"Chamber",
                        L"Cypher",
                        L"Fade",
                        L"Jett",
                        L"KAY/O",
                        L"Killjoy",
                        L"Neon",
                        L"Omen",
                        L"Phoenix",
                        L"Raze",
                        L"Reyna",
                        L"Sage",
                        L"Skye",
                        L"Sova",
                        L"Viper",
                        L"Yoru",
                        L"Gekko",
                        L"Random",
                        nullptr
                    );




                    menu::offset_x -= menu::offset_tab2;
                }

                if (tab2 == 8) {
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper((L"Main"), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper((L"Others"), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    menu::Checkbox(crypt(L"Enable Gun budies").decrypt(), &globals::buddy::enabled);
                    menu::offset_x += 12;

                    std::wstring fullName = BuddyNameYAY;
                    size_t start = fullName.find(crypt(L"GunBuddy_").decrypt());
                    size_t end = fullName.find(crypt(L"_PrimaryAsset").decrypt());

                    menu::SliderInt(crypt(L"Gun Buddies").decrypt(), &globals::buddy::index, 0, 658);
                    menu::offset_x -= 10;
                    menu::offset_y += 15;
                    std::wstring buddyName;
                    if (start != std::wstring::npos && end != std::wstring::npos) {
                        buddyName = fullName.substr(start + 9, end - (start + 9));
                    }
                    std::wstring displayText = crypt(L"Buddy: ").decrypt() + buddyName;


                    menu::Text(displayText.c_str());


                    menu::offset_y -= 20;
                    menu::offset_x -= menu::offset_tab1;
                }

            }
            if (tab == 2) {
                static int tab2 = 4;
                if (menu::ButtonSection(crypt(L"World").decrypt(), fvector2d(104, 20), tab2 == 4)) tab2 = 4;
                if (menu::ButtonSection(crypt(L"Misc").decrypt(), fvector2d(104, 20), tab2 == 5)) tab2 = 5;
                if (menu::ButtonSection(crypt(L"Anti Aim").decrypt(), fvector2d(104, 20), tab2 == 6)) tab2 = 6;
                if (menu::ButtonSection(crypt(L"SkyBox").decrypt(), fvector2d(104, 20), tab2 == 7)) tab2 = 7;
                if (menu::ButtonSection(crypt(L"Fog").decrypt(), fvector2d(104, 20), tab2 == 8)) tab2 = 8;
                if (menu::ButtonSection(crypt(L"Finisher").decrypt(), fvector2d(104, 20), tab2 == 9)) tab2 = 9;

                if (tab2 != 4) {
                    menu::offset_y -= 25;
                }
                if (tab2 != 5) {
                    menu::offset_y -= 25;
                }

                if (tab2 != 6) {
                    menu::offset_y -= 25;
                }

                if (tab2 != 7) {
                    menu::offset_y -= 25;
                }

                if (tab2 != 8) {
                    menu::offset_y -= 25;
                }

                if (tab2 != 9) {
                    menu::offset_y -= 25;
                }


                float saved_offset_y = menu::offset_y;
                if (tab2 == 4) {
                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    menu::Checkbox(crypt(L"Skip Tutorial").decrypt(), &globals::misc::skiptutorial);
                    menu::Checkbox(crypt(L"Spectator").decrypt(), &globals::misc::SpectatorView);
                    menu::Checkbox(crypt(L"Unlock All (Skins)").decrypt(), &globals::misc::skin_changer);
                    menu::Checkbox(crypt(L"Fov Changer").decrypt(), &globals::misc::fovchangor);
                    menu::Checkbox(crypt(L"Big Gun 1P").decrypt(), &globals::misc::big_gun);
                    menu::Checkbox(crypt(L"Big Gun 3P").decrypt(), &globals::misc::big_gun3p);
                    menu::Checkbox(crypt(L"Hold Third Person (key: T)").decrypt(), &globals::misc::Holdthird);
                    menu::Checkbox(crypt(L"Trail ESP").decrypt(), &globals::misc::SaveGhostPosition);
                    menu::Checkbox(crypt(L"Wukong Mode").decrypt(), &globals::misc::wukong);
                    menu::Checkbox(crypt(L"Spinbot Serverside").decrypt(), &globals::misc::Spinbotserversided);
                    menu::Checkbox(crypt(L"Bunny Hop").decrypt(), &globals::misc::bunnyhop);


                    menu::offset_x += 12;
                    menu::offset_y += 2;

                    menu::offset_y -= 2;
                    menu::offset_x -= 12;
                    menu::offset_y += 13;
                    menu::Hotkey(crypt("Tp Key").decrypt(), fvector2d{ 75, 25 }, &globals::misc::niggamawee);
                    menu::offset_y -= 20;
                    menu::offset_x -= menu::offset_tab1;

                    // right
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab2;
                    menu::Checkbox(crypt(L"Gun Wireframe 3P").decrypt(), &globals::misc::third_person_2wireframe);
                    menu::Checkbox(crypt(L"Third Person").decrypt(), &globals::misc::third_person);

                    menu::Checkbox(crypt(L"Spinbot").decrypt(), &globals::misc::spinbot);

                    menu::Checkbox(crypt(L"Rainbow Hat").decrypt(), &globals::misc::Hat);
                    menu::Checkbox(crypt(L"Rainbow Hat Self").decrypt(), &globals::misc::HatSelf);
                    menu::Checkbox(crypt(L"Anti Flash").decrypt(), &globals::misc::AntiFlash);
                    menu::Checkbox(crypt(L"Custom Gun").decrypt(), &globals::misc::GunCustome);
                    menu::Checkbox(crypt(L"Fast Crouch").decrypt(), &globals::misc::crouch);


                    menu::offset_x += 12;
                    menu::SliderFloat(crypt(L"Big Gun").decrypt(), &globals::misc::big_gun_float_3, 1, 5, "%0.f");
                    menu::offset_y += 14;

                    menu::SliderFloat(crypt(L"Fov Changer").decrypt(), &globals::misc::fov_changer_float, 1, 250, "%0.f");
                    menu::offset_y += 14;
                    menu::SliderFloat(crypt(L"Third Person").decrypt(), &globals::misc::third_person_float, 1, 900, "%0.f");
                    menu::offset_y += 14;
                    menu::SliderFloat(crypt(L"Spinbot Value").decrypt(), &globals::misc::spinbot_speed_nigger, 1, 25, "%0.f");
                    menu::offset_x -= 12;
                    menu::offset_y -= 42;

                    menu::offset_x -= menu::offset_tab2;
                }

                if (tab2 == 5) {
                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left

                    menu::Checkbox(crypt(L"CSGO Skin (Viewmodel)").decrypt(), &globals::misc::CSGOSEN);
                  
                    /*         menu::Checkbox(crypt(L"IShowSpeed").decrypt(), &globals::misc::Ishowspeed);*/
       /*             menu::Checkbox(crypt(L"Safe Uninject").decrypt(), &globals::misc::Uninject);*/
                    menu::Checkbox(crypt(L"Anti AFK").decrypt(), &globals::misc::antiafk);
                    menu::Checkbox(crypt(L"Draw RGB Crosshair").decrypt(), &globals::misc::crosshairrainbow);
                    menu::Checkbox(crypt(L"Night Mode").decrypt(), &globals::misc::nightmode);
                    menu::offset_y += 4;
                    menu::Hotkey(crypt("Menu Keybind").decrypt(), fvector2d{ 75, 25 }, &globals::misc::MenuKey);



                    menu::offset_y -= 20;
                    menu::offset_x -= menu::offset_tab1;
                }


                if (tab2 == 6) {
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper((L"Main"), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper((L"Others"), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    menu::Checkbox(crypt(L"Enable Anti Aim").decrypt(), &globals::misc::enabled);
                    menu::Combobox(crypt(L"Anti Aim Pitch").decrypt(), fvector2d(100, 24), &globals::misc::pitchmode, (L"Up"), (L"Down"), (L"Jitter"), (L"None"), NULL);
                    menu::Combobox(crypt(L"Anti Base Yaw").decrypt(), fvector2d(100, 24), &globals::misc::baseyaw, (L"Local View"), (L"Backwards Spin"), (L"Left Spin"), (L"Right Spin"), (L"Random"), (L"Character Base"), NULL);

                    menu::offset_x += 12;
                    menu::SliderFloat(crypt(L"Offset").decrypt(), &globals::misc::offset, 1, 180, "%0.f");
                    menu::offset_y += 14;

                    menu::Combobox(L"Yaw Modifier", fvector2d(100, 24), &globals::misc::yawmodifier, L"Offset", L"Jitter 3 ways", NULL);
                    menu::SliderFloat(crypt(L"Modifier offset").decrypt(), &globals::misc::modifieroffset, 0, 180, "%.0f");


                    menu::offset_x -= menu::offset_tab1;
                    //right side

                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab2;

                    menu::Checkbox(crypt(L"Prediction Resolver").decrypt(), &globals::misc::prediction_breaker);
                    if (globals::misc::prediction_breaker) {
                        menu::offset_y += 5;
                        menu::SliderFloat(L"Resolver Intensity", &globals::misc::breaker_intensity, 0.5f, 5.0f, "%.1f");
                    }



                    menu::offset_x -= menu::offset_tab2;
                }
                if (tab2 == 7) {
                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left
                    menu::Checkbox(crypt(L"SkyBox").decrypt(), &globals::visuals::SkyBoxEnabled);

                    menu::Combobox(L"Type", fvector2d(110, 24), &globals::misc::skybox_preset_index,
                        L"Default", L"Night", L"Galaxy", L"Neon", NULL);
                    static int last_preset_index = -1;
                    if (last_preset_index != globals::misc::skybox_preset_index) {
                        switch (globals::misc::skybox_preset_index) {
                        case 0:
                            globals::misc::Overall = { 1.0f, 1.0f, 1.0f };
                            globals::misc::Zenith = { 0.7f, 0.8f, 1.0f };
                            globals::misc::Horizon = { 0.9f, 0.9f, 0.9f };
                            globals::misc::Cloud = { 1.0f, 1.0f, 1.0f };
                            globals::misc::SkySunColor = { 1.0f, 1.0f, 0.9f };
                            globals::misc::CloudSpeed = 1.0f;
                            globals::misc::CloudOpacity = 1.0f;
                            globals::misc::StarsBrightness = 1.0f;
                            globals::misc::SkyNoisePower1 = 1.0f;
                            globals::misc::SkyNoisePower2 = 1.0f;
                            globals::misc::SkySunRadius = 1.0f;
                            globals::misc::SkySunBrightness = 1.0f;
                            globals::misc::SkySunHeight = 0.0f;
                            break;
                        case 1: // Night
                            globals::misc::Overall = { 0.1f, 0.1f, 0.2f };
                            globals::misc::Zenith = { 0.0f, 0.0f, 0.1f };
                            globals::misc::Horizon = { 0.1f, 0.1f, 0.2f };
                            globals::misc::Cloud = { 0.2f, 0.2f, 0.3f };
                            globals::misc::SkySunColor = { 0.5f, 0.5f, 0.6f };
                            globals::misc::CloudSpeed = 1.0f;
                            globals::misc::CloudOpacity = 1.0f;
                            globals::misc::StarsBrightness = 2.0f;
                            globals::misc::SkyNoisePower1 = 1.0f;
                            globals::misc::SkyNoisePower2 = 1.0f;
                            globals::misc::SkySunRadius = 0.5f;
                            globals::misc::SkySunBrightness = 0.5f;
                            globals::misc::SkySunHeight = -1.0f;
                            break;
                        case 2: // Galaxy
                            globals::misc::Overall = { 0.00f, 0.00f, 0.00f };
                            globals::misc::Zenith = { 0.00f, 0.00f, 0.00f };
                            globals::misc::Horizon = { 0.00f, 3.55f, 5.00f };
                            globals::misc::Cloud = { 5.00f, 5.00f, 5.00f };
                            globals::misc::SkySunColor = { 5.00f, 5.00f, 5.00f };
                            globals::misc::CloudSpeed = 10.00f;
                            globals::misc::CloudOpacity = 2.00f;
                            globals::misc::StarsBrightness = 5.00f;
                            globals::misc::SkyNoisePower1 = 10.00f;
                            globals::misc::SkyNoisePower2 = 10.00f;
                            globals::misc::SkySunRadius = 5.00f;
                            globals::misc::SkySunBrightness = 0.00f;
                            globals::misc::SkySunHeight = -5.00f;
                            break;
                        case 3: // Neon
                            globals::misc::Overall = { 5.00f, 5.00f, 4.28f };
                            globals::misc::Zenith = { 5.00f, 3.58f, 5.00f };
                            globals::misc::Horizon = { 5.00f, 0.10f, 5.00f };
                            globals::misc::Cloud = { 5.00f, 5.00f, 5.00f };
                            globals::misc::SkySunColor = { 5.00f, 5.00f, 5.00f };
                            globals::misc::CloudSpeed = 10.00f;
                            globals::misc::CloudOpacity = 2.00f;
                            globals::misc::StarsBrightness = 3.65f;
                            globals::misc::SkyNoisePower1 = 10.00f;
                            globals::misc::SkyNoisePower2 = 0.00f;
                            globals::misc::SkySunRadius = 4.51f;
                            globals::misc::SkySunBrightness = 0.00f;
                            globals::misc::SkySunHeight = 5.00f;
                            break;
                        }
                        last_preset_index = globals::misc::skybox_preset_index;
                    }


                    menu::Checkbox(crypt(L"SkyBox Color RGB").decrypt(), &globals::visuals::skyboxrgb);

                    bool prevRGB = globals::visuals::skyboxrgb;
                    bool prevCustom = globals::visuals::skyboxenabledcustom;

                    if (!prevRGB && globals::visuals::skyboxrgb) {
                        globals::visuals::skyboxenabledcustom = false;
                    }
                    if (!prevCustom && globals::visuals::skyboxenabledcustom) {
                        globals::visuals::skyboxrgb = false;
                    }


                    menu::offset_x -= menu::offset_tab1;

                    // right
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab2;

                    float effects_height = 735 - (menu::offset_y + 10);

                    menu::SliderFloat(crypt(L"Cloud Speed").decrypt(), &globals::misc::CloudSpeed, 1, 100, "%0.f");
                    menu::offset_y += 12;
                    menu::SliderFloat(crypt(L"Stars Brightness").decrypt(), &globals::misc::StarsBrightness, 1, 5.0f, "%0.f");

                    menu::offset_y += 12;
                    menu::SliderFloat(crypt(L"Cloud Opacity").decrypt(), &globals::misc::CloudOpacity, 0, 2, "%0.f");

                    menu::offset_y += 12;
                    menu::SliderFloat(crypt(L"Sky Sun Radius").decrypt(), &globals::misc::SkySunRadius, 0, 5.0f, "%0.f");

                    menu::offset_y += 12;
                    menu::SliderFloat(crypt(L"Sky Sun Brightness").decrypt(), &globals::misc::SkySunBrightness, 0, 10.0f, "%0.f");


                    menu::offset_y += 12;
                    menu::SliderFloat(crypt(L"SNoise Power 1").decrypt(), &globals::misc::SkyNoisePower1, 0, 10.0f, "%0.f");

                    menu::offset_y += 12;
                    menu::SliderFloat(crypt(L"SNoise Power 2").decrypt(), &globals::misc::SkyNoisePower2, 0, 10.0f, "%0.f");
                    menu::offset_y += 12;

                    menu::SliderFloat(crypt(L"Cloud Red").decrypt(), &globals::misc::Cloud.r, 1, 25, "%0.f");
                    menu::offset_y += 13;
                    menu::SliderFloat(crypt(L"Cloud Green").decrypt(), &globals::misc::Cloud.g, 1, 25, "%0.f");
                    menu::offset_y += 13;
                    menu::SliderFloat(crypt(L"Cloud Blue").decrypt(), &globals::misc::Cloud.b, 1, 25, "%0.f");
                    menu::offset_y += 13;


                    menu::offset_x -= menu::offset_tab2;

                }

                if (tab2 == 8) {
                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;


                    menu::Checkbox(crypt(L"Fog").decrypt(), &globals::misc::Fog);
                    menu::Checkbox(crypt(L"HellFire").decrypt(), &globals::misc::SAMPO);
                    menu::Checkbox(crypt(L"Lightning").decrypt(), &globals::misc::Lightning);
                /*    menu::Checkbox(crypt(L"Apocalypse Mode").decrypt(), &globals::misc::Apocalpyse);*/
                    menu::SliderFloat(crypt(L"Fog Density").decrypt(), &globals::misc::FogDensity, 0.0f, 50.0f, "%.01f"); // Reduced max for sanity
                    menu::offset_y += 12;

                    menu::SliderFloat(crypt(L"Fog Height Falloff").decrypt(), &globals::misc::FogHeightFalloff, 0.0f, 5.0f, "%.01f"); // Falloff usually small
                    menu::offset_y += 12;

                    menu::SliderFloat(crypt(L"Fog Start Distance").decrypt(), &globals::misc::FogStartDistance, 0.0f, 10000.0f, "%.01f"); // Distance in unreal units
                    menu::offset_y += 12;

                    menu::SliderFloat(crypt(L"Fog Cutoff Distance").decrypt(), &globals::misc::FogCutoffDistance, 0.0f, 50000.0f, "%.01f");
                    menu::offset_y += 12;

                    menu::SliderFloat(crypt(L"Fog Max Opacity").decrypt(), &globals::misc::FogMaxOpacity, 0.0f, 1.0f, "%.01f"); // Opacity is 0-1
                    menu::offset_y += 12;

                    // Color Picker for Fog
                    menu::ColorPicker(crypt(L"Fog Color").decrypt(), &globals::misc::FogColor);

              
                    
                    menu::offset_x -= menu::offset_tab2;

                }

                if (tab2 == 9) {
                    // top tabs
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Main").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    menu::Checkbox(crypt(L"Player Finisher").decrypt(), &globals::misc::finisher);
                    menu::Checkbox(crypt(L"Only Last Kill").decrypt(), &globals::misc::onlylastkill);
                    menu::Checkbox(crypt(L"Kill Sound").decrypt(), &globals::misc::KillSound);
                    menu::Checkbox(crypt(L"Kill Message").decrypt(), &globals::misc::KillMessage);
                    menu::offset_x -= 7;
                    menu::offset_y += 14;

                    menu::InputText(L"ChatMessage", globals::misc::chatMessage, fvector2d(160, 32));

                    menu::offset_y += 14;
                    if (globals::misc::KillSound) {
                
                        menu::Combobox(crypt(L"Kill Sound Effect").decrypt(), fvector2d(100, 24), &globals::misc::KillSoundEffectOption,
                            crypt(L"Default Kill").decrypt(),
                            crypt(L"4").decrypt(),
                            crypt(L"12").decrypt(),
                            crypt(L"agpa1").decrypt(),
                            crypt(L"agpa2").decrypt(),
                            crypt(L"animezing").decrypt(),
                            crypt(L"archive").decrypt(),
                            crypt(L"basshit").decrypt(),
                            crypt(L"Beep1").decrypt(),
                            crypt(L"bell").decrypt(),
                            crypt(L"bepis").decrypt(),
                            crypt(L"bubble").decrypt(),
                            crypt(L"burp").decrypt(),
                            crypt(L"cod").decrypt(),
                            crypt(L"coinmaster").decrypt(),
                            crypt(L"connectpacanoff").decrypt(),
                            crypt(L"minecraft_bow").decrypt(),
                            crypt(L"msfrs").decrypt(),
                            crypt(L"my_name_jeff").decrypt(),
                            crypt(L"neverlose").decrypt(),
                            crypt(L"plasmablaster").decrypt(),
                            crypt(L"poolplayer").decrypt(),
                            crypt(L"poordrum").decrypt(),
                            crypt(L"primordial").decrypt(),
                            crypt(L"Punch").decrypt(),
                            crypt(L"punchy").decrypt(),
                            crypt(L"quake").decrypt(),
                            crypt(L"reminder").decrypt(),
                            crypt(L"roblox").decrypt(),
                            crypt(L"rust_headshot").decrypt(),
                            crypt(L"skeet").decrypt(),
                            crypt(L"sonic").decrypt(),
                            crypt(L"stapler").decrypt(),
                            crypt(L"unreal1").decrypt(),
                            crypt(L"window_xp_error").decrypt(),
                            crypt(L"zingtrio").decrypt(),
                            NULL);
                    }


                }


            }
            if (tab == 3) {
                static int tab2 = 8;
                if (menu::ButtonSection(crypt(L"Config").decrypt(), fvector2d(104, 20), tab2 == 8)) tab2 = 8;

                if (tab2 != 8) {
                    menu::offset_y -= 25;
                }

                float saved_offset_y = menu::offset_y;
                if (tab2 == 8) {
                    menu::offset_x = 141;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Config").decrypt(), fvector2d(197, 28));

                    menu::offset_x = 347;
                    menu::offset_y = 36;
                    menu::SectionWrapper(crypt(L"Others").decrypt(), fvector2d(197, 28));

                    ResetOffset();
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab1;

                    // left
                    if (menu::Button(crypt(L"Load Config").decrypt(), fvector2d(100, 24))) {
                        load_config();
                    }

                    if (menu::Button(crypt(L"Save Config").decrypt(), fvector2d(100, 24))) {
                        save_config();
                    }

                    menu::offset_x -= menu::offset_tab1;

                    // right
                    menu::offset_y = saved_offset_y;
                    menu::offset_x += menu::offset_tab2;
                    
                    menu::Checkbox(crypt(L"Hide Watermark").decrypt(), &globals::misc::hide_watermark);

                    menu::offset_x -= menu::offset_tab2;

                }
            }
        }

        menu::Render();
        menu::Draw_Cursor(open_canvas);
    }
    void DrawBouncingBox(ucanvas* canvas, aplayercontroller* controller, uskeletalmeshcomponent* mesh, ashootercharacter* actor)
    {
        static float bounceOffsetX = 0.0f;
        static float bounceOffsetY = 0.0f;
        static float bounceTargetX = 0.0f;
        static float bounceTargetY = 0.0f;
        static float bounceSpeed = 0.35f;
        static float bounceDamping = 6.0f;


        fvector origin;
        fvector extent;
        actor->GetActorBounds(false, &origin, &extent, false);

        // Project origin (center) to 2D
        fvector2d center2D;
        if (!controller->project_world_location_to_screen(origin, center2D, true))
            return;

        // Desired center
        bounceTargetX = center2D.x;
        bounceTargetY = center2D.y;

        // Difference
        float diffX = bounceTargetX - (center2D.x + bounceOffsetX);
        float diffY = bounceTargetY - (center2D.y + bounceOffsetY);

        // Amplify horizontal sway
        diffX *= 1.5f;

        // Spring-damper
        bounceOffsetX += diffX * bounceSpeed;
        bounceOffsetX *= (1.0f - (1.0f / bounceDamping));

        bounceOffsetY += diffY * bounceSpeed;
        bounceOffsetY *= (1.0f - (1.0f / bounceDamping));

        // Get top/bottom from bounds
        fvector top3D = origin + fvector(0, 0, extent.z);
        fvector bottom3D = origin - fvector(0, 0, extent.z);

        fvector2d top2D, bottom2D;
        controller->project_world_location_to_screen(top3D, top2D, true);
        controller->project_world_location_to_screen(bottom3D, bottom2D, true);

        // Box size
        float height = fabs(bottom2D.y - top2D.y);
        float width = height * 0.55f;

        // Apply bounce offset to screen positions
        fvector2d top = {
            center2D.x - width * 0.5f + bounceOffsetX,
            top2D.y + bounceOffsetY
        };
        fvector2d bottom = {
            center2D.x + width * 0.5f + bounceOffsetX,
            bottom2D.y + bounceOffsetY
        };

        // Draw 2D box
        if (globals::visuals::box2d) {
            DrawBox(canvas, top, bottom, defines::visuals_color);
        }

        // Draw corner box
        if (globals::visuals::box) {
            DrawCornerBox(canvas, top, bottom, defines::visuals_color);
        }


    }


    flinearcolor GetRainbowColore(float time)
    {

        float red = (sin(time * 2.0f * 3.14159f / 3.0f) + 1.0f) / 2.0f;
        float green = (sin(time * 2.0f * 3.14159f / 3.0f + 2.0f * 3.14159f / 3.0f) + 1.0f) / 2.0f;
        float blue = (sin(time * 2.0f * 3.14159f / 3.0f + 4.0f * 3.14159f / 3.0f) + 1.0f) / 2.0f;
        return flinearcolor(red, green, blue, globals::misc::glow_float);
    }

    auto isVisible(uskeletalmeshcomponent* mesh) -> bool {
        double fLastSubmitTime = *reinterpret_cast<double*>(mesh + offsets::last_submit_time);
        double fLastRenderTimeOnScreen = *reinterpret_cast<double*>(mesh + offsets::last_render_time);

        const double fVisionTick = 0.05f;
        bool bVisible = fLastRenderTimeOnScreen + fVisionTick >= fLastSubmitTime;

        return bVisible;
    }


    void hooks::call_drawui(ucanvas* canvas) {
        
        return reinterpret_cast<void(*)(ucanvas * _canvas, uintptr_t, void*)>(spoofcall_stub)(canvas, offsets::MagicOffsets, (void*)hooks::hk_draw_canvas);

    }
    uintptr_t camera_engine;
    uobject* engine_cache;

    bool should_hook;
    ucanvas* canvas;

    auto RelativeLocation(uintptr_t APawn) -> fvector {
        auto RootComponent = memory::read<uintptr_t>(APawn + 0x238);
        return memory::read<fvector>(RootComponent + offsets::root_position);
    }
    std::wstring gen_random_name() {
        const std::wstring chars = L"ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
        std::wstring randomName;
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(0, chars.size() - 1);

        for (int i = 0; i < 8; ++i) {
            randomName += chars[dist(gen)];
        }
        return randomName;
    }
    DWORD GGameThreadId = 0;
    using draw_t = void(*)(ugameviewportclient*, ucanvas* canvas, std::uintptr_t a3);
    draw_t original_draw;

    inline void ApplyWireframe(void* meshPtr)
    {
        if (!meshPtr)
            return;

        constexpr uint8_t WireframeFlag = 1 << 5;
        auto flagAddr = reinterpret_cast<uint8_t*>((uintptr_t)meshPtr + offsets::WireFrame);

        if (!flagAddr)
            return;

        bool alreadyApplied = (*flagAddr & WireframeFlag) != 0;
        if (alreadyApplied)
            return;

        auto meshOverlay = memory::read<uintptr_t>((uintptr_t)meshPtr + offsets::WireFrame);
        if (!meshOverlay)
            return;

        *flagAddr |= WireframeFlag;
        *reinterpret_cast<uint8_t*>((uintptr_t)meshPtr + offsets::WireFrame2) = 0xFF;
    }


    int index = 453;
    bool InGame = 0;
    

    void hooks::hk_draw_transition(ugameviewportclient* viewportclient, std::uintptr_t a2, std::uint64_t a3) {


        if (!canvas)
            canvas = uobject::find_object<ucanvas*>(crypt(L"/Engine/Transient.DebugCanvasObject").decrypt(), (uobject*)-1);

        if (!viewportclient || !memory::is_valid((uintptr_t)viewportclient))
            return hooks::draw_transition_o(viewportclient, a2, a3);

        hooks::hk_draw_canvas(canvas);

        uworld* world = memory::read<uworld*>((uintptr_t)viewportclient + offsets::viewport_world);
        if (!world || !memory::is_valid((uintptr_t)world))
            return hooks::draw_transition_o(viewportclient, a2, a3);

        UWorldSave = world;

        float closest_distance = FLT_MAX;
        int target_id = -1;

        static uintptr_t old_pawn = 0;
        static uintptr_t old_controller = 0;
        static uintptr_t old_world = 0;
        static uintptr_t old_character = 0;

        if ((uintptr_t)world != old_world) {
            old_world = (uintptr_t)world;
            old_pawn = 0;
            old_controller = 0;
            old_character = 0;
            cache::players.clear();
        }

        ugameinstance* gameinstance = viewportclient->get_gameinstance();
        if (!gameinstance || !memory::is_valid((uintptr_t)gameinstance))
            return hooks::draw_transition_o(viewportclient, a2, a3);

        uengine* uengine = gameinstance->get_uengine();
        if (!uengine || !memory::is_valid((uintptr_t)uengine))
            return hooks::draw_transition_o(viewportclient, a2, a3);

        controller = blueprints::get_player_controller(world);
        if (!controller || !memory::is_valid((uintptr_t)controller))
            return hooks::draw_transition_o(viewportclient, a2, a3);

        if ((uintptr_t)controller != old_controller) {
            old_controller = (uintptr_t)controller;
            cache::players.clear();
        }

        camera = controller->get_camera_manager();
        if (!camera || !memory::is_valid((uintptr_t)camera))
            return hooks::draw_transition_o(viewportclient, a2, a3);

        camera_cache = camera;

        if (!globals::il::init) {
            SLIGHTSONTOP1::insta_lock_agents::run();
            globals::il::init = true;
        }

        if (globals::misc::skin_changer) {
            skin_changer::unlock_all_skins(world);
        }

        pawn = controller->K2_GetPawn_Local();
        if (!pawn || !memory::is_valid((uintptr_t)pawn))
            return hooks::draw_transition_o(viewportclient, a2, a3);

        ashootercharacter* new_character = controller->get_shooter_character();
        if (new_character && (uintptr_t)new_character != old_character) {
            old_character = (uintptr_t)new_character;
            cache::players.clear();
        }

        character = new_character;
        if (!character || !memory::is_valid((uintptr_t)character))
            return hooks::draw_transition_o(viewportclient, a2, a3);

        if ((uintptr_t)pawn != old_pawn) {
            old_pawn = (uintptr_t)pawn;
            cache::players.clear();
        }

        if (globals::il::enable) {
            SLIGHTSONTOP1::insta_lock::run(controller);
        }

        if (pawn != nullptr) {
            myweapon = character->get_inventory()->get_current_equippable();
            if (globals::misc::skin_changer && myweapon != nullptr && myweapon != lastweapon)
            {
                uinventory* inventory = character->get_inventory();
                if (inventory)
                {
                    currentequippable* equippable = inventory->get_current_equippable();
                    if (equippable)
                    {
                        equippable_skin_data_asset* skin_data_asset = equippable->get_skin_data_asset();
                        if (skin_data_asset)
                        {
                            int32_t type = skin_data_asset->get_type();
                            if (type != 0)
                            {
                                arsenal_view_controller* arsenal_view_controller = ares_instance::get_ares_client_game_instance(world)->get_aresnal_view_controller();
                                if (arsenal_view_controller)
                                {
                                    arsenal_view_model* arsenal_view_model = arsenal_view_controller->get_view_model();
                                    if (arsenal_view_model)
                                    {
                                        auto models = arsenal_view_model->get_gun_models();
                                        for (int i = 0; i < models.count; i++) {
                                            equippable_inventory_model* model = models[i];
                                            if (!model)
                                                continue;

                                            equippable_skin_inventory_model* skin_model = model->get_equipped_skin_model();
                                            if (!skin_model)
                                                continue;

                                            equippable_skin_data_asset* skin_data = skin_model->get_skin_data_asset();
                                            if (!skin_data || skin_data->get_type() != type) continue;

                                            const std::wstring& wname = get_skin_name_cached(skin_data);
                                            store_skin_by_name(wname);

                                            int32_t skin_data_type = skin_data->get_type();
                                            if (skin_data_type != type)
                                                continue;

                                            int max_level = skin_data->get_skin_levels().size();
                                            uobject* skin_chroma_asset = skin_model->get_skin_inventory_chroma_asset()->get_skin_chroma_data_asset(); if (!skin_chroma_asset) continue;
                                            skin_changer::unlock_all_apply(world, equippable, skin_data, skin_chroma_asset, max_level, nullptr, -1);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                lastweapon = character->get_inventory()->get_current_equippable();
            }
        }

        fvector2d screen_size = canvas->get_screen_size();
        if (!screen_size.is_valid())
            return hooks::draw_transition_o(viewportclient, a2, a3);

        if (globals::misc::fovchangor) {
            controller->set_fov(globals::misc::fov_changer_float);
        }

        tarray<ashootercharacter*> actors = blueprints::find_all_shooters_with_alliance(world, character, earesalliance::any, false, true);
        if (!actors.data || actors.size() == 0)
            return hooks::draw_transition_o(viewportclient, a2, a3);

        if (globals::misc::skiptutorial) {
            controller->disconnect_server();
            globals::misc::skiptutorial = false;
        }

        if (globals::misc::antiafk) {
            controller->simulate_input_key(keys::space, true);
            controller->simulate_input_key(keys::space, false);
        }


        if (globals::misc::SpectatorView) {

            auto local_state = (player_state*)pawn->get_player_state();
            if (local_state) {

                auto spectators = local_state->get_players_spectating();
                auto spec_txt = L"Spectators (" + std::to_wstring(spectators.size()) + L"):";

                fvector2d ScreenSize = canvas->get_screen_size();

                float CenterY = ScreenSize.y / 2.0f;

                hooks::draw_text(
                    canvas,
                    menu::font,
                    spec_txt.c_str(),
                    flinearcolor(1.f, 1.f, 1.f, 1.f),
                    fvector2d(80.f, CenterY)
                );


                for (int i = 0; i < spectators.size(); i++) {

                    auto player_state = spectators[i];
                    if (!player_state) continue;

                    auto name = player_state->get_player_name();
                    if (name.empty()) continue;

                    hooks::draw_text(
                        canvas,
                        menu::font,
                        name.c_str(),
                        flinearcolor(1.f, 1.f, 1.f, 1.f),
                        fvector2d(80.f, CenterY + 20.f + (i * 14.f))
                    );
                }
            }
        }

        if (globals::misc::crosshairrainbow) {
            rainbowTimeZCH += 0.005f;
            flinearcolor RainbowColor = BOSSRAINBOMAW(rainbowTimeZCH);
            fvector2d ScreenSize;
            ScreenSize = canvas->get_screen_size();

            float CenterX = ScreenSize.x / 2.0f;
            float CenterY = ScreenSize.y / 2.0f;

            float Offset = 5.0f;
            float Thickness = 2.0f;

            canvas->k2_drawline(
                fvector2d(CenterX - Offset, CenterY),
                fvector2d(CenterX + Offset, CenterY),
                Thickness,
                RainbowColor
            );

            canvas->k2_drawline(
                fvector2d(CenterX, CenterY - Offset),
                fvector2d(CenterX, CenterY + Offset),
                Thickness,
                RainbowColor
            );
        }

        bool enableThirdPerson = false;

        static bool last_key_state1 = false;
        if (globals::misc::Holdthird) {
            static bool thirdperson_enabled = globals::misc::Holdthird1;
            static bool last_key_state = false;

            bool current_key_state = GetAsyncKeyState(0x54);
            if (current_key_state && !last_key_state) {
                thirdperson_enabled = !thirdperson_enabled;
                globals::misc::Holdthird1 = thirdperson_enabled;
            }
            last_key_state = current_key_state;
        }

        if (globals::misc::third_person && GetAsyncKeyState(globals::misc::niggamawee))
        {
            if (!Mesh3PModifed) character->Set3pMeshVisible(true);
            Mesh3PModifed = true;
        }
        else
        {
            if (Mesh3PModifed)
            {
                character->Set3pMeshVisible(false);
                Mesh3PModifed = false;
            }
        }

        if (globals::misc::Holdthird1)
        {
            if (!Mesh3PModifed) character->Set3pMeshVisible(true);
            Mesh3PModifed = true;
        }
        else
        {
            if (Mesh3PModifed)
            {
                character->Set3pMeshVisible(false);
                Mesh3PModifed = false;
            }
        }

        if (globals::misc::dropped)
        {
            static float font_size = 0.80f;

            MAWGAGO maw;
            tarray<AGameObject*> Objects = GameplayStatics::GetAllActorsOfClass<AGameObject>(world, maw.gameobject);

            if (!Objects.data || Objects.size() <= 0)
                return hooks::draw_transition_o(viewportclient, a2, a3);

            for (int index = 0; index < Objects.size(); index++)
            {
                if (!Objects.valid(index))
                    continue;

                AGameObject* Object = Objects[index];
                if (!Object || !memory::is_valid((uintptr_t)Object))
                    continue;

                std::string ObjectName = system::get_object_name((uobject*)Object).to_str();
                if (ObjectName.find(crypt("EquippableGroundPickup_C").decrypt()) == std::string::npos)
                    continue;

                fvector worldLoc = Object->GetObjectLocation();
                if (!worldLoc.is_valid())
                    continue;

                fvector2d screenLoc = controller->project_world_to_screen(worldLoc);
                if (!screenLoc.is_valid())
                    continue;

                float distance = character->k2_get_actor_location().distance(worldLoc);
                if (distance < 1.0f || distance > 5000.0f)
                    continue;

                auto displayname = memory::read<currentequippable*>((uintptr_t)Object + 0x0518);
                if (!displayname || !memory::is_valid((uintptr_t)displayname))
                    continue;

                auto weap_name = weapon_name(system::get_object_name(displayname));

                if (displayname) {
                    DrawEspText(canvas, weap_name.c_str(), fvector2d(screenLoc.x, screenLoc.y), fvector2d{ font_size, font_size }, RGBtoFLC(255, 255, 255), 0.75f);
                }
            }
        }

        if (globals::visuals::abilities) {
            MAWGAGO ogag;
            tarray<AGameObject*> Objects1 = GameplayStatics::GetAllActorsOfClass<AGameObject>(world, ogag.gameobject);
            if (!Objects1.data || Objects1.size() == 0)
                return hooks::draw_transition_o(viewportclient, a2, a3);

            for (int index = 0; index < Objects1.size(); index++)
            {
                if (!Objects1.valid(index)) { continue; }
                AGameObject* Object = Objects1[index];
                if (Object == nullptr || !memory::is_valid((uintptr_t)Object)) { continue; }
                fvector2d ObjectLocation = controller->project_world_to_screen(Object->GetObjectLocation());
                if (!ObjectLocation.is_valid()) continue;
                std::string ObjectName = system::get_object_name((uobject*)Object).to_str();
                if (ObjectName.find(crypt("GameObject_Thorne_E_Wall")) != std::string::npos)
                {
                    float ObjectHealth = Object->GetObjectHealh();
                    if (ObjectHealth == 0) { continue; }
                    std::string Health = std::to_string((int)ObjectHealth) + crypt("HP").decrypt();
                    std::wstring WHealth(Health.begin(), Health.end());
                    fstring HealthFString = fstring{ WHealth.c_str() };

                    float g = ObjectHealth * 255.f;
                    float r = 255.f - g;
                    float b = 0;

                    canvas->k2_drawtext(menu::font, HealthFString, ObjectLocation, fvector2d{ 1.2f, 1.2f }, { r, g,b, 1 }, false, { r, g,b, 1 }, fvector2d{ pos.x + 1, pos.y + 1 }, true, true, true, { 0,0,0,1 });
                }

                skills_names(ObjectName, character, canvas, ObjectLocation);
            }
        }

        if (globals::visuals::abilitiesspike) {
            static int frameCounter = 0;
            frameCounter++;

            MAWGAGO maw;
            tarray<AGameObject*> Objects = GameplayStatics::GetAllActorsOfClass<AGameObject>(world, maw.gameobject);
            if (!Objects.data || Objects.size() == 0)
                return hooks::draw_transition_o(viewportclient, a2, a3);

            for (int index = 0; index < Objects.size(); index++)
            {
                if (!Objects.valid(index)) { continue; }
                AGameObject* Object = Objects[index];
                if (Object == nullptr || !memory::is_valid((uintptr_t)Object)) { continue; }

                fvector2d ObjectLocation = controller->project_world_to_screen(Object->GetObjectLocation());
                if (!ObjectLocation.is_valid()) continue;
                std::string ObjectName = system::get_object_name((uobject*)Object).to_str();

                if (ObjectName.find(crypt("TimedBomb_C").decrypt()) != std::string::npos) {
                    double defuse_time = *(double*)(std::uintptr_t(Object) + offsets::DefuseTimer);
                    double bomb_time_remaining = *(double*)(std::uintptr_t(Object) + offsets::Timer);

                    float DefusePercentage = defuse_time * 100 / DefusePercentageMax;
                    std::string ep7 = crypt("Bomb (Remaining Time: ").decrypt() + std::to_string((int)bomb_time_remaining) + crypt(" Sec").decrypt();
                    std::string ep72 = crypt("Bomb (Defuse Progress: ").decrypt() + std::to_string((float)DefusePercentage) + crypt(" %)").decrypt();
                    std::wstring ep7_long(ep7.begin(), ep7.end());
                    std::wstring ep72_long(ep72.begin(), ep72.end());

                    hooks::draw_text(canvas, menu::font, ep7_long.c_str(), maincolor, { ObjectLocation.x, ObjectLocation.y });
                    hooks::draw_text(canvas, menu::font, ep72_long.c_str(), maincolor, { ObjectLocation.x, ObjectLocation.y - 15 });

                    flinearcolor FlashColor = RGBtoFLC(255, 255, 255);

                    if (bomb_time_remaining < 5.0f) {
                        bool flashOn = (frameCounter / 15) % 2 == 0;
                        FlashColor = flashOn ? RGBtoFLC(255, 50, 50) : RGBtoFLC(120, 10, 10);
                    }
                    else if (bomb_time_remaining < 10.0f) {
                        FlashColor = RGBtoFLC(255, 165, 0);
                    }

                    Draw3DDiamond(canvas, controller, Object->GetObjectLocation(), 60, 70, FlashColor);
                }
            }
        }

        if (globals::misc::widearms) {
            process_fp_mode(character);
        }

        if (globals::aimbot::BulletTrace)
        {
            auto inventory = character->get_inventory();
            auto weapon = inventory->get_current_equippable();

            fstring obj_name = system::get_object_name(weapon);
            fstring converted_name = helper::convert_weapon_name(obj_name);

            bool is_valid_weapon =
                converted_name.wide() == L"Bulldog" || converted_name.wide() == L"Phantom" || converted_name.wide() == L"Vandal" ||
                converted_name.wide() == L"Operator" || converted_name.wide() == L"Marshal" || converted_name.wide() == L"Sheriff" ||
                converted_name.wide() == L"Spectre" || converted_name.wide() == L"Outlaw" || converted_name.wide() == L"Classic" ||
                converted_name.wide() == L"Shorty" || converted_name.wide() == L"Frenzy" || converted_name.wide() == L"Ghost" ||
                converted_name.wide() == L"Stinger" || converted_name.wide() == L"Bucky" || converted_name.wide() == L"Judge" ||
                converted_name.wide() == L"Guardian" || converted_name.wide() == L"Ares" || converted_name.wide() == L"Odin" ||
                converted_name.wide() == L"Melee";

            InstallProcessEventHook(weapon);
            fvector cameraLocation = camera->get_camera_location();
            fvector cameraForward = character->GetActorForwardVector();
            RenderBulletTracers(canvas, controller, cameraLocation, cameraForward, character);
        }

        if (globals::misc::AntiFlash)
        {
            auto test1 = memory::read<BlindManagerComponent*>((uintptr_t)character + offsets::AntiFlash);
            if (test1 && memory::is_valid((uintptr_t)test1)) {
                (BlindManagerComponent::use_blind_manager_component)(test1);
            }
        }

        if (globals::visuals::SkyBoxEnabled)
        {
            if ((uintptr_t)world != lastWorld)
            {
                CachedSkyDome = nullptr;
                SkyDomeCached = false;
                lastWorld = (uintptr_t)world;
            }

            uintptr_t skyboxnigger;
            if ((uintptr_t)SkyDomeCached != skyboxnigger) {
                CachedSkyDome = nullptr;
                SkyDomeCached = false;
                skyboxnigger = (uintptr_t)CachedFogActor;
            }

            if (!CachedSkyDome || !memory::is_valid((uintptr_t)CachedSkyDome))
            {
                MAWGAGO maw;
                tarray<AGameObject*> Objects =
                    GameplayStatics::GetAllActorsOfClass<AGameObject>(world, maw.engineactor);

                if (!Objects.data || Objects.size() == 0)
                    return hooks::draw_transition_o(viewportclient, a2, a3);

                for (int index = 0; index < Objects.size(); index++)
                {
                    if (!Objects.valid(index)) continue;

                    AGameObject* Object = Objects[index];
                    if (!Object || !memory::is_valid((uintptr_t)Object)) continue;

                    auto name = system::get_object_name((uobject*)Object);

                    if (name.to_str() == crypt("shared_SkyDomeB_0").decrypt() || name.to_str() == crypt("shared_SkyDomeB_1").decrypt() || name.to_str() == crypt("shared_SkyDomeB_2").decrypt())
                    {
                        CachedSkyDome = Object;
                        SkyDomeCached = true;
                        break;
                    }
                }
            }

            if (CachedSkyDome && memory::is_valid((uintptr_t)CachedSkyDome))
            {
                SkyDome = CachedSkyDome;
                SkyBoxMesh();
            }
        }

        if (globals::misc::Fog)
        {
            uintptr_t fogcache = 0;

            if ((uintptr_t)world != lastWorld)
            {
                CachedFogActor = nullptr;
                FogDomeCached = false;
                lastWorld = (uintptr_t)world;
            }

            if ((uintptr_t)CachedFogActor != fogcache) {
                CachedFogActor = nullptr;
                FogDomeCached = false;
                fogcache = (uintptr_t)CachedFogActor;
            }

            if (!CachedFogActor || !memory::is_valid((uintptr_t)CachedFogActor))
            {
                tarray<AGameObject*> Objects = GameplayStatics::GetAllActorsOfClass<AGameObject>(world, Class::ExponentialHeightFog());
                if (!Objects.data || Objects.size() == 0)
                    return hooks::draw_transition_o(viewportclient, a2, a3);

                for (int index = 0; index < Objects.size(); index++)
                {
                    if (!Objects.valid(index)) continue;

                    AGameObject* Object = Objects[index];
                    if (!Object || !memory::is_valid((uintptr_t)Object)) continue;

                    auto name = system::get_object_name((uobject*)Object);

                    CachedFogActor = Object;
                    FogDomeCached = true;
                    break;
                }
            }

            if (CachedFogActor && memory::is_valid((uintptr_t)CachedFogActor))
            {
                UExponentialHeightFogComponent* fogComponent = memory::read<UExponentialHeightFogComponent*>((uintptr_t)CachedFogActor + 0x0460);
                static uclass* FogComponentClass = uobject::find_object<uclass*>(crypt(L"Engine.ExponentialHeightFogComponent").decrypt());

                if (fogComponent && memory::is_valid((uintptr_t)fogComponent) && math::ClassIsChildOf(fogComponent->ClassPrivate, FogComponentClass)) {
                    fogComponent->SetFogDensity(globals::misc::FogDensity);
                    fogComponent->SetFogHeightFalloff(globals::misc::FogHeightFalloff);
                    fogComponent->SetFogInscatteringColor(globals::misc::FogColor);
                    fogComponent->SetFogMaxOpacity(globals::misc::FogMaxOpacity);
                    fogComponent->SetStartDistance(globals::misc::FogStartDistance);
                    fogComponent->SetFogCutoffDistance(globals::misc::FogCutoffDistance);
                    fogComponent->SetVolumetricFog(globals::misc::bEnableVolumetricFog);
                    fogComponent->SetVolumetricFogDistance(globals::misc::VolumetricFogDistance);
                }
            }
        }

        if (globals::misc::SAMPO) {
            static uintptr_t LastWorldHellfirePtr = 0;
            static uintptr_t LastCharacterHellfirePtr = 0;

            if ((uintptr_t)world != LastWorldHellfirePtr ||
                (character && (uintptr_t)character != LastCharacterHellfirePtr))
            {
                ResetHellFire();

                g_ParticlesLoaded = false;
                for (int i = 0; i < 2; i++) {
                    g_Particles[i] = nullptr;
                }

                g_HellFireAttached = false;
                LastWorldHellfirePtr = (uintptr_t)world;
                LastCharacterHellfirePtr = (uintptr_t)character;
            }

            if (!character || !memory::is_valid((uintptr_t)character) || !IsValidUObject((uobject*)character))
            {
                ResetHellFire();
                return hooks::draw_transition_o(viewportclient, a2, a3);
            }

            AttachHellFireToPlayerFollowing(character);
            g_HellFireAttached = true;
        }
        else {
            if (g_HellFireAttached)
            {
                ResetHellFire();
                g_HellFireAttached = false;
            }
        }

        if (globals::misc::Lightning) {
            static uintptr_t LastWorldHellfirePtr = 0;
            static uintptr_t LastCharacterHellfirePtr = 0;

            if ((uintptr_t)world != LastWorldHellfirePtr ||
                (character && (uintptr_t)character != LastCharacterHellfirePtr))
            {
                ResetSkyLightFire();

                g_ParticlesLoaded2 = false;
                for (int i = 0; i < 2; i++) {
                    g_Particles[i] = nullptr;
                }

                g_NinjaAttached = false;
                LastWorldHellfirePtr = (uintptr_t)world;
                LastCharacterHellfirePtr = (uintptr_t)character;
            }

            if (!character || !memory::is_valid((uintptr_t)character) || !IsValidUObject((uobject*)character))
            {
                ResetSkyLightFire();
                return hooks::draw_transition_o(viewportclient, a2, a3);
            }

            AttachNinjaToPlayerFollowing(character);

            g_NinjaAttached = true;
        }
        else {
            if (g_NinjaAttached)
            {
                ResetSkyLightFire();
                g_NinjaAttached = false;
            }
        }

        if (globals::aimbot::triggerbot && GetAsyncKeyState(globals::aimbot::trigger_key))
        {
            if (!myweapon || !memory::is_valid((uintptr_t)myweapon))
                return hooks::draw_transition_o(viewportclient, a2, a3);

            fvector2d screen_size = canvas->get_screen_size();
            float screen_center_x = screen_size.x * 0.5f;
            float screen_center_y = screen_size.y * 0.5f;

            const float tolerance = 1.5f;

            for (int32_t idx = 0; idx < actors.count; ++idx)
            {
                ashootercharacter* actor = actors[idx];
                if (!actor || !memory::is_valid((uintptr_t)actor) || actor == character || !actor->is_alive()) continue;

                uskeletalmeshcomponent* mesh = actor->get_mesh();
                if (!mesh || !memory::is_valid((uintptr_t)mesh)) continue;

                fvector head_location = mesh->get_bone_location(8);
                if (!head_location.is_valid()) continue;

                fvector2d head_screen = controller->project_world_to_screen(head_location);
                if (!head_screen.is_valid()) continue;

                if (std::abs(head_screen.x - screen_center_x) <= tolerance &&
                    std::abs(head_screen.y - screen_center_y) <= tolerance)
                {
                    if (!globals::aimbot::vish_check || controller->line_of_sight(actor))
                    {
                        controller->simulate_input_key(keys::left_mouse, true);
                        controller->simulate_input_key(keys::left_mouse, false);
                        break;
                    }
                }
            }
        }

        if (globals::misc::wukong)
        {
            auto mesh = character->GetCosmesticMesh3P();
            if (mesh && memory::is_valid((uintptr_t)mesh))
            {
                auto meshPath = crypt(L"/Game/Equippables/Finishers/MonkeyKing/Character/Models/MonkeyKing_Finisher_Skelmesh.MonkeyKing_Finisher_Skelmesh").decrypt();

                uobject* mesh2 = uobject::find_object<uobject*>(meshPath);
                if (!mesh2)
                {
                    mesh2 = uobject::StaticLoadObject(meshPath);
                }
                if (mesh2 && memory::is_valid((uintptr_t)mesh2)) {
                    mesh->SetSkinnedAssetAndUpdate(mesh2, true);
                }
            }
        }

        if (globals::misc::CSGOSEN)
        {
            auto inv = character->get_inventory();
          
            auto weapon = inv->get_current_equippable();
   
            CleanStaleWeaponCache();
            CleanStaleWeaponVariations();

            fstring name = helper::convert_weapon_name(system::get_object_name(weapon));
            std::wstring wName = name.wide();
            uintptr_t weapon_ptr = (uintptr_t)weapon;

            static const std::unordered_set<std::wstring> supported_weapons = {
                L"Vandal", L"Phantom", L"Guardian", L"Marshal", L"Sheriff",
                L"Operator", L"Frenzy", L"Bulldog", L"Ghost", L"Melee",
                L"Classic", L"Judge"
            };

            bool should_process = false;
            auto now = std::chrono::steady_clock::now();

            auto it = g_WeaponCache.find(weapon_ptr);

            if (it == g_WeaponCache.end())
            {
                should_process = true;
            }
            else
            {
                if (it->second.weapon_type != wName)
                {
                    should_process = true;
                }
            }

            if (should_process && IsValidUObject((uobject*)weapon) && !is_processing_model)
            {
                is_processing_model = true;

                g_WeaponCache[weapon_ptr] = {
                    weapon_ptr,
                    wName,
                    now,
                    true
                };

                std::string filePath;
                int variation = 1;

                if (wName == L"Vandal" || wName == L"Phantom") {
                    variation = GetWeaponVariation(weapon_ptr, wName);
                }

                if (wName == L"Vandal") {
                    if (variation == 1) filePath = crypt("C:\\Windows\\INF\\CSGO\\vandal_skin1.obj").decrypt();
                    else if (variation == 2) filePath = crypt("C:\\Windows\\INF\\CSGO\\vandal_skin3.obj").decrypt();
                    else if (variation == 3) filePath = crypt("C:\\Windows\\INF\\CSGO\\vandal_skin4.obj").decrypt();
                    else if (variation == 4) filePath = crypt("C:\\Windows\\INF\\CSGO\\vandal_skin5.obj").decrypt();
                    else {
                        filePath = crypt("C:\\Windows\\INF\\CSGO\\vandal_skin1.obj").decrypt();
                    }
                }
                else if (wName == L"Phantom") {
                    if (variation == 1) filePath = crypt("C:\\Windows\\INF\\CSGO\\phantom_skin1.obj").decrypt();
                    else if (variation == 2) filePath = crypt("C:\\Windows\\INF\\CSGO\\phantom_skin2.obj").decrypt();
                    else if (variation == 3) filePath = crypt("C:\\Windows\\INF\\CSGO\\phantom_skin3.obj").decrypt();
                    else {
                        filePath = crypt("C:\\Windows\\INF\\CSGO\\phantom_skin1.obj").decrypt();
                    }
                }
                else if (wName == L"Sheriff")    filePath = crypt("C:\\Windows\\INF\\CSGO\\Sheriff.obj").decrypt();
                else if (wName == L"Operator")   filePath = crypt("C:\\Windows\\INF\\CSGO\\Operator.obj").decrypt();
                else if (wName == L"Frenzy")     filePath = crypt("C:\\Windows\\INF\\CSGO\\frenzy.obj").decrypt();
                else if (wName == L"Bulldog")    filePath = crypt("C:\\Windows\\INF\\CSGO\\Bulldog.obj").decrypt();
                else if (wName == L"Marshal")    filePath = crypt("C:\\Windows\\INF\\CSGO\\Marshal.obj").decrypt();
                else if (wName == L"Guardian")   filePath = crypt("C:\\Windows\\INF\\CSGO\\Guardian.obj").decrypt();
                else if (wName == L"Ghost")      filePath = crypt("C:\\Windows\\INF\\CSGO\\ghost.obj").decrypt();
                else if (wName == L"Melee")      filePath = crypt("C:\\Windows\\INF\\CSGO\\bicak.obj").decrypt();
                else if (wName == L"Classic")    filePath = crypt("C:\\Windows\\INF\\CSGO\\Classic.obj").decrypt();
                else if (wName == L"Judge")      filePath = crypt("C:\\Windows\\INF\\CSGO\\Judge.obj").decrypt();
                else {
                    is_processing_model = false;
                    return hooks::draw_transition_o(viewportclient, a2, a3);
                }

                if (!filePath.empty())
                {
                    ReplaceWeaponMeshWith3DModel(weapon, filePath.c_str(), character, world, variation, wName);
                }

                if (auto it2 = g_WeaponCache.find(weapon_ptr); it2 != g_WeaponCache.end())
                {
                    it2->second.is_processing = false;
                    it2->second.last_processed_time = std::chrono::steady_clock::now();
                }

                is_processing_model = false;
            }
        }

        if (globals::misc::GunCustome) {
            do {
                currentequippable* Equippable = character->get_inventory()->get_current_equippable();
                if (!Equippable || !memory::is_valid((uintptr_t)Equippable)) break;

                UPrimitiveComponent* GunMesh = memory::read<UPrimitiveComponent*>((uintptr_t)Equippable + offsets::Mesh1pGun);
                if (!GunMesh || !memory::is_valid((uintptr_t)GunMesh)) break;

                fstring customTexturePath = fstring(crypt(L"C:/GunCustom.jpg").decrypt());
                uobject* CustomTexture = drawings::ImportFileAsTexture2D(world, customTexturePath);
                if (!CustomTexture || !memory::is_valid((uintptr_t)CustomTexture)) break;

                auto matPath = crypt(L"/Game/Equippables/_Core/Materials/SpecialMaterials/CosmosShader/Winter/Winter_MI.Winter_MI").decrypt();
                uobject* material = uobject::find_object<uobject*>(matPath);
                if (!material) material = uobject::StaticLoadObject(matPath);
                if (!material || !memory::is_valid((uintptr_t)material)) break;

                GunMesh->set_material(0, material);
                uobject* GunDynamicMat = GunMesh->create_and_set_material_instance_dynamic_from_material(0, material);
                if (!GunDynamicMat || !memory::is_valid((uintptr_t)GunDynamicMat)) break;

                auto* mat = GunDynamicMat->cast<UMaterialInstanceDynamic>();
                if (!mat) break;

                mat->set_texture_parameter_value2(string::string_to_name(crypt(L"Image 1").decrypt()), CustomTexture);
                mat->set_texture_parameter_value2(string::string_to_name(crypt(L"Image 2").decrypt()), CustomTexture);

            } while (false);

            globals::misc::GunCustome = false;
        }

        if (globals::misc::crouch) {
            if (character && memory::is_valid((uintptr_t)character)) {
                character->SetCrouchTimeOverride(0.001);
                globals::misc::MeshCrouchModifed = true;
            }
        }
        else if (character && memory::is_valid((uintptr_t)character)) {
            if (globals::misc::MeshCrouchModifed) {
                character->SetCrouchTimeOverride(1.0);
                globals::misc::MeshCrouchModifed = false;
            }
        }

        ashootercharacter* LocalCharacter = controller->K2_GetPawn_Local();
        if (globals::misc::bunnyhop && LocalCharacter && memory::is_valid((uintptr_t)LocalCharacter) && controller->is_input_key_down(keys::space) && LocalCharacter->CanJump()) {
            controller->simulate_input_key(keys::space, true);
            controller->simulate_input_key(keys::space, false);
        }

       
        if (globals::visuals::gun_with_material && character->is_alive()) {
            meshp1_materialgun3p(character);
        }
        if (globals::visuals::HandChams && character->is_alive()) {
            meshp1_material1(character);
        }
        if (globals::visuals::WeaponChams && character->is_alive()) {
            meshp1_materialgun(character);
        }
        if (globals::visuals::Hand_material && character->is_alive()) {
            meshp1_material(character);
        }
        if (globals::misc::GalaxyHand) {
            galaxychamsHand(character);
        }
        if (globals::misc::GalaxySelf) {
            galaxychamsSelf3p(character);
        }

        if (globals::misc::CoolChams) {
            moscawireframe(character);
        }

        if (globals::misc::CoolChams3p) {
            moscawireframe3P(character);
        }
        if (globals::misc::NebulaChamsHand) {
            apply_crystal_chams_to_self(character);
        }

        if (globals::misc::NebulaChams3p) {
            apply_crystal_chams_to_self3p(character);
        }

        if (globals::aimbot::aimbot360) {
            float closest_distance = FLT_MAX;
            target_id = -1;
            for (int32_t idx = 0; idx < actors.Num(); ++idx) {
                ashootercharacter* actor = actors[idx];

                if (!actor || !memory::is_valid((uintptr_t)actor) || actor == character) continue;

                if (actor->health() == 0)
                    continue;

                fvector actor_pos = actor->k2_get_actor_location();
                fvector local_pos = character->k2_get_actor_location();

                float distance = (actor_pos - local_pos).size();
                bool is_visible = true;
                if (globals::aimbot::vish_check) {
                    bool line_of_sight = controller->line_of_sight(actor);

                    if (line_of_sight) {
                        is_visible = true;
                    }
                    else if (globals::aimbot::aimbot360) {
                        is_visible = false;
                    }
                    else {
                        is_visible = false;
                    }
                }

                if (!is_visible) continue;

                if (globals::misc::team_check) {
                    if (IhateNigger::IsAlly(actor, character)) {
                        continue;
                    };
                }

                if (globals::visuals::dormant && character->is_alive()) {
                    if (!controller->dormant_server(actor)) continue;
                }

                if (distance < globals::aimbot::max_aim_distance && distance < closest_distance) {
                    closest_distance = distance;
                    target_id = idx;
                    target_actor = actor;
                }
            }
        }

        for (int32_t idx = 0; idx < actors.size(); idx++)
        {
            if (!actors.IsValidIndex(idx)) { continue; }

            ashootercharacter* actor = actors[idx];
            if (!actor || !memory::is_valid((uintptr_t)actor) || actor == character) continue;

            actor2 = actor;
            cache::players.push_back(actor);

            player_state* state = actor->get_player_state();

            if (globals::misc::team_check) {
                if (IhateNigger::IsAlly(actor, character)) {
                    continue;
                };
            }

            uskeletalmeshcomponent* mesh = actor->get_mesh();
            if (!mesh || !memory::is_valid((uintptr_t)mesh)) continue;

            if (!actor->is_alive() || !pawn || !memory::is_valid((uintptr_t)pawn)) continue;
          
            if (globals::misc::finisher || globals::misc::KillSound || globals::misc::KillMessage && actor->is_alive())
            {
                static shadow_vmt viewport_hook;
                viewport_hook.hook<decltype(hooks::oHkDeath)>(
                    memory::module_base,
                    (uintptr_t)actor,
                    0x159,
                    (void*)hk_death,
                    &hooks::oHkDeath);
            }

            uskeletalmeshcomponent* mesh2character = character->get_mesh();

            if (globals::misc::big_gun) {
                if (auto current_equippable = character->get_inventory()->get_current_equippable()) {
                    if (auto mesh1p = current_equippable->GetMesh1P()) {
                        mesh1p->SetRelativeScale3D({
                            globals::misc::big_gun_float_3,
                            globals::misc::big_gun_float_3,
                            globals::misc::big_gun_float_3
                            });
                    }
                }
            }
            if (globals::misc::big_gun3p) {
                if (auto current_equippable = character->get_inventory()->get_current_equippable()) {
                    if (auto mesh3p = current_equippable->GetMesh3P()) {
                        mesh3p->SetRelativeScale3D({
                            globals::misc::big_gun_float_3,
                            globals::misc::big_gun_float_3,
                            globals::misc::big_gun_float_3
                            });
                    }
                }
            }
            if (globals::visuals::mawmaw)
            {
                if (auto* AcknowledgedPawn = controller->get_acknowledged_pawn())
                {
                    if (!memory::is_valid((uintptr_t)AcknowledgedPawn)) continue;

                    UPrimitiveComponent* mesh1p = memory::read<UPrimitiveComponent*>(
                        (uintptr_t)AcknowledgedPawn + offsets::Mesh1P_Offset);
                    UPrimitiveComponent* mesh1poverlay = memory::read<UPrimitiveComponent*>(
                        (uintptr_t)AcknowledgedPawn + offsets::MeshOverlay1P_Offset);

                    if (mesh1p && mesh1poverlay && memory::is_valid((uintptr_t)mesh1p) && memory::is_valid((uintptr_t)mesh1poverlay))
                    {
                        struct bitset {
                            char pad_8FE_0 : 3; // 0x8fe(0x01)
                            char bOverrideMinLOD : 1; // 0x8fe(0x01)
                            char bUseBoundsFromLeaderPoseComponent : 1; // 0x8fe(0x01)
                            char bForceWireframe : 1; // 0x8fe(0x01)
                            char bDisableMorphTarget : 1; // 0x8fe(0x01)
                        } mesh_bitset;

                        mesh_bitset = memory::read<bitset>((uintptr_t)mesh1p + offsets::WireFrame);

                        if (!mesh_bitset.bForceWireframe)
                        {
                            mesh_bitset.bForceWireframe = true;

                            *(bitset*)((uintptr_t)mesh1p + offsets::WireFrame) = mesh_bitset;
                            *(bitset*)((uintptr_t)mesh1poverlay + offsets::WireFrame) = mesh_bitset;

                            mesh1p->SetRenderCustomDepth(true);
                            mesh1poverlay->SetRenderCustomDepth(true);
                        }
                    }
                }
            }
            if (globals::misc::WireframeSelf)
            {
                if (auto* AcknowledgedPawn = controller->get_acknowledged_pawn())
                {
                    if (!memory::is_valid((uintptr_t)AcknowledgedPawn)) continue;

                    UPrimitiveComponent* cosmetic = memory::read<UPrimitiveComponent*>((uintptr_t)AcknowledgedPawn + offsets::Mesh3P_Offset);
                    if (cosmetic && memory::is_valid((uintptr_t)cosmetic))
                    {
                        struct bitset {
                            char pad_8FE_0 : 3; // 0x8fe(0x01)
                            char bOverrideMinLOD : 1; // 0x8fe(0x01)
                            char bUseBoundsFromLeaderPoseComponent : 1; // 0x8fe(0x01)
                            char bForceWireframe : 1; // 0x8fe(0x01)
                            char bDisableMorphTarget : 1; // 0x8fe(0x01)
                        } mesh_bitset;

                        mesh_bitset = memory::read<bitset>((uintptr_t)cosmetic + offsets::WireFrame);

                        if (!mesh_bitset.bForceWireframe)
                        {
                            mesh_bitset.bForceWireframe = true;

                            *(bitset*)((uintptr_t)cosmetic + offsets::WireFrame) = mesh_bitset;

                            cosmetic->SetRenderCustomDepth(true);
                        }
                    }
                }
            }
            if (globals::visuals::mawmawmaw)
            {
                if (auto inventory = character->get_inventory())
                {
                    if (!memory::is_valid((uintptr_t)inventory)) continue;

                    if (auto weapon = inventory->get_current_equippable())
                    {
                        if (!memory::is_valid((uintptr_t)weapon)) continue;

                        UPrimitiveComponent* cosmetic = memory::read<UPrimitiveComponent*>((uintptr_t)weapon + offsets::Mesh1pGun);

                        if (cosmetic && memory::is_valid((uintptr_t)cosmetic))
                        {
                            struct bitset {
                                char pad_8FE_0 : 3; // 0x8fe(0x01)
                                char bOverrideMinLOD : 1; // 0x8fe(0x01)
                                char bUseBoundsFromLeaderPoseComponent : 1; // 0x8fe(0x01)
                                char bForceWireframe : 1; // 0x8fe(0x01)
                                char bDisableMorphTarget : 1; // 0x8fe(0x01)
                            } mesh_bitset;

                            mesh_bitset = memory::read<bitset>((uintptr_t)cosmetic + offsets::WireFrame);

                            if (!mesh_bitset.bForceWireframe)
                            {
                                mesh_bitset.bForceWireframe = true;

                                *(bitset*)((uintptr_t)cosmetic + offsets::WireFrame) = mesh_bitset;

                                cosmetic->SetRenderCustomDepth(true);
                            }
                        }
                    }
                }
            }

            if (globals::misc::third_person_2wireframe) {
                if (auto inventory = character->get_inventory())
                {
                    if (!memory::is_valid((uintptr_t)inventory)) continue;

                    if (auto weapon = inventory->get_current_equippable())
                    {
                        if (!memory::is_valid((uintptr_t)weapon)) continue;

                        UPrimitiveComponent* cosmetic = memory::read<UPrimitiveComponent*>((uintptr_t)weapon + offsets::Mesh3pGun);

                        if (cosmetic && memory::is_valid((uintptr_t)cosmetic))
                        {
                            struct bitset {
                                char pad_8FE_0 : 3; // 0x8fe(0x01)
                                char bOverrideMinLOD : 1; // 0x8fe(0x01)
                                char bUseBoundsFromLeaderPoseComponent : 1; // 0x8fe(0x01)
                                char bForceWireframe : 1; // 0x8fe(0x01)
                                char bDisableMorphTarget : 1; // 0x8fe(0x01)
                            } mesh_bitset;

                            mesh_bitset = memory::read<bitset>((uintptr_t)cosmetic + offsets::WireFrame);

                            if (!mesh_bitset.bForceWireframe)
                            {
                                mesh_bitset.bForceWireframe = true;

                                *(bitset*)((uintptr_t)cosmetic + offsets::WireFrame) = mesh_bitset;

                                cosmetic->SetRenderCustomDepth(true);
                            }
                        }
                    }
                }
            }

            if (globals::misc::fresnel && actor->is_alive()) {
                rainbowTimeZ += 0.005f;
                flinearcolor RainbowColor = BOSSRAINBOMAW(rainbowTimeZ);

                tarray<UMaterialInstanceDynamic*> mesh3p_mids = memory::read2<tarray<UMaterialInstanceDynamic*>>((uintptr_t)actor + offsets::Mesh3PMIDs);
                for (int a = 0; a < mesh3p_mids.size(); a++) {
                    if (auto instance = mesh3p_mids[a]) {
                        if (!globals::misc::fresnelrainbow) {
                            instance->set_vector_parameter_value(
                                (string::string_to_name)(crypt(L"Fresnel Enemy Tint").decrypt()),
                                flinearcolor(0, 0, 255, 0)
                            );
                        }
                        else {
                            instance->set_vector_parameter_value(
                                (string::string_to_name)(crypt(L"Fresnel Enemy Tint").decrypt()),
                                flinearcolor(
                                    0,
                                    RainbowColor.r * globals::misc::FresnelGlow * 10,
                                    RainbowColor.g * globals::misc::FresnelGlow * 10,
                                    RainbowColor.b * globals::misc::FresnelGlow * 10
                                )
                            );
                        }
                    }
                }
            }

            if (globals::visuals::RadarMap) {
                if (auto character_minimap = actor->get_character_minimap_component(); auto portrait_minimap = actor->get_portrait_minimap_component()) {
                    character_minimap->set_observer_status(true);
                    character_minimap->set_visible_status(true);

                    portrait_minimap->set_observer_status(true);
                    portrait_minimap->set_visible_status(true);
                }
            }

            if (globals::visuals::FresnelShi) {
                if (auto FresnelComponent = memory::read2<UFresnelComponent*>((uintptr_t)actor + 0x0A98)) {
                    if (memory::is_valid((uintptr_t)FresnelComponent)) {
                        FresnelComponent->SenIntensity(500);
                    }
                }
            }


            if (globals::misc::FresnelHand) {
                rainbowTimeZ += 0.005f;
                flinearcolor RainbowColor = BOSSRAINBOMAW(rainbowTimeZ);
                static fname FresnelIntensity = string::string_to_name(L"Fresnel Intensity");

                tarray<UMaterialInstanceDynamic*> mesh3p_mids = memory::read2<tarray<UMaterialInstanceDynamic*>>((uintptr_t)character + offsets::Mesh1POverlayMIDs);
                for (int a = 0; a < mesh3p_mids.size(); a++) {
                    if (auto instance = mesh3p_mids[a]) {
                        if (!globals::misc::fresnelrainbow) {
                            instance->set_vector_parameter_value(
                                (string::string_to_name)(crypt(L"Fresnel Ally Tint").decrypt()),
                                flinearcolor(0, 0, 255, 0)
                            );
                            instance->set_scalar_parameter_value2(FresnelIntensity, globals::misc::FresnelGlow);
                        }
                        else {
                            instance->set_vector_parameter_value(
                                (string::string_to_name)(crypt(L"Fresnel Ally Tint").decrypt()),
                                flinearcolor(
                                    0,
                                    RainbowColor.r * globals::misc::FresnelGlow * 10,
                                    RainbowColor.g * globals::misc::FresnelGlow * 10,
                                    RainbowColor.b * globals::misc::FresnelGlow * 10
                                )
                            );
                            instance->set_scalar_parameter_value2(FresnelIntensity, globals::misc::FresnelGlow);
                        }
                    }
                }
            }
            if (globals::misc::Fresnel3p) {
                rainbowTimeZ += 0.005f;
                flinearcolor RainbowColor = BOSSRAINBOMAW(rainbowTimeZ);
                static fname FresnelIntensity = string::string_to_name(L"Fresnel Intensity");

                tarray<UMaterialInstanceDynamic*> mesh3p_mids = memory::read2<tarray<UMaterialInstanceDynamic*>>((uintptr_t)character + offsets::Mesh3PMIDs);
                for (int a = 0; a < mesh3p_mids.size(); a++) {
                    if (auto instance = mesh3p_mids[a]) {
                        if (!globals::misc::fresnelrainbow) {
                            instance->set_vector_parameter_value(
                                (string::string_to_name)(crypt(L"Fresnel Ally Tint").decrypt()),
                                flinearcolor(0, 0, 255, 0)
                            );
                            instance->set_scalar_parameter_value2(FresnelIntensity, globals::misc::FresnelGlow);
                        }
                        else {
                            instance->set_vector_parameter_value(
                                (string::string_to_name)(crypt(L"Fresnel Ally Tint").decrypt()),
                                flinearcolor(
                                    0,
                                    RainbowColor.r * globals::misc::FresnelGlow * 10,
                                    RainbowColor.g * globals::misc::FresnelGlow * 10,
                                    RainbowColor.b * globals::misc::FresnelGlow * 10
                                )
                            );
                            instance->set_scalar_parameter_value2(FresnelIntensity, globals::misc::FresnelGlow);
                        }
                    }
                }
            }

            static tarray<tarray<fvector>> SkeletonTrailPositions;
            static tarray<flinearcolor> SkeletonTrailColors;
            static float SkeletonTrailTimer = 0.0f;

            if (globals::misc::SaveGhostPosition && character && memory::is_valid((uintptr_t)character))
            {
                auto Mesh = character->GetCosmesticMesh3P();
                if (Mesh && memory::is_valid((uintptr_t)Mesh))
                {
                    tarray<fvector> CurrentSkeleton;

                    CurrentSkeleton.Add(Mesh->get_bone_location(3));
                    CurrentSkeleton.Add(Mesh->get_bone_location(8));
                    CurrentSkeleton.Add(Mesh->get_bone_location(21));
                    CurrentSkeleton.Add(Mesh->get_bone_location(23));
                    CurrentSkeleton.Add(Mesh->get_bone_location(24));
                    CurrentSkeleton.Add(Mesh->get_bone_location(25));
                    CurrentSkeleton.Add(Mesh->get_bone_location(49));
                    CurrentSkeleton.Add(Mesh->get_bone_location(50));
                    CurrentSkeleton.Add(Mesh->get_bone_location(51));
                    CurrentSkeleton.Add(Mesh->get_bone_location(75));
                    CurrentSkeleton.Add(Mesh->get_bone_location(76));
                    CurrentSkeleton.Add(Mesh->get_bone_location(78));
                    CurrentSkeleton.Add(Mesh->get_bone_location(82));
                    CurrentSkeleton.Add(Mesh->get_bone_location(83));
                    CurrentSkeleton.Add(Mesh->get_bone_location(85));

                    static float SkeletonSaveTimer = 0.0f;
                    SkeletonSaveTimer += 0.016f;

                    if (SkeletonSaveTimer >= 0.1f)
                    {
                        SkeletonSaveTimer = 0.0f;

                        SkeletonTrailPositions.Add(CurrentSkeleton);

                        float R = 0.2f + 0.8f * sin(SkeletonTrailTimer * 2.0f);
                        float G = 0.2f + 0.8f * sin(SkeletonTrailTimer * 3.0f);
                        float B = 0.2f + 0.8f * sin(SkeletonTrailTimer * 4.0f);
                        SkeletonTrailColors.Add(flinearcolor(R, G, B, 1.0f));

                        SkeletonTrailTimer += 0.1f;
                        if (SkeletonTrailTimer > 10.0f) SkeletonTrailTimer = 0.0f;

                        if (SkeletonTrailPositions.Num() > 20)
                        {
                            tarray<tarray<fvector>> NewPositions;
                            tarray<flinearcolor> NewColors;

                            for (int i = 1; i < SkeletonTrailPositions.Num(); i++)
                            {
                                NewPositions.Add(SkeletonTrailPositions[i]);
                                NewColors.Add(SkeletonTrailColors[i]);
                            }

                            SkeletonTrailPositions = NewPositions;
                            SkeletonTrailColors = NewColors;
                        }
                    }

                    if (SkeletonTrailPositions.Num() > 0)
                    {
                        for (int skeletonIndex = 0; skeletonIndex < SkeletonTrailPositions.Num(); skeletonIndex++)
                        {
                            auto& Skeleton = SkeletonTrailPositions[skeletonIndex];

                            if (Skeleton.Num() < 15) continue;

                            float AlphaFade = 1.0f - (float)skeletonIndex / SkeletonTrailPositions.Num();
                            flinearcolor SkeletonColor = SkeletonTrailColors[skeletonIndex];
                            SkeletonColor.a = AlphaFade * 0.6f;

                            tarray<fvector2d> ScreenBones;
                            bool AllBonesValid = true;

                            for (int boneIndex = 0; boneIndex < Skeleton.Num(); boneIndex++)
                            {
                                fvector2d ScreenPos;
                                if (controller->project_world_location_to_screen(Skeleton[boneIndex], ScreenPos, true))
                                {
                                    ScreenBones.Add(ScreenPos);
                                }
                                else
                                {
                                    AllBonesValid = false;
                                    break;
                                }
                            }

                            if (!AllBonesValid || ScreenBones.Num() < 15) continue;

                            canvas->k2_drawline(ScreenBones[0], ScreenBones[2], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[2], ScreenBones[1], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[2], ScreenBones[3], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[3], ScreenBones[4], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[4], ScreenBones[5], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[2], ScreenBones[6], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[6], ScreenBones[7], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[7], ScreenBones[8], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[0], ScreenBones[9], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[9], ScreenBones[10], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[10], ScreenBones[11], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[0], ScreenBones[12], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[12], ScreenBones[13], 1.5f * AlphaFade, SkeletonColor);
                            canvas->k2_drawline(ScreenBones[13], ScreenBones[14], 1.5f * AlphaFade, SkeletonColor);
                        }
                    }
                }
            }

            bool IsAlive = actor->is_alive();
            fvector head_locationcharacter4 = mesh2character->get_bone_location(8);
            if (globals::misc::HatSelf)
            {
                if (character->is_alive() && controller && mesh2character && memory::is_valid((uintptr_t)mesh2character))
                {
                    fvector head = mesh2character->get_bone_location(8);
                    fvector base = mesh2character->get_bone_location(0);

                    if (character->GetCosmesticMesh3P() && memory::is_valid((uintptr_t)character->GetCosmesticMesh3P())) {
                        (partyhat)(controller, mesh, head, base, canvas);
                    }
                }
            }

            if (mesh && IsAlive && memory::is_valid((uintptr_t)mesh) && mesh2character && memory::is_valid((uintptr_t)mesh2character)) {
                fvector head_locationcharacter = mesh2character->get_bone_location(8);
                if (!head_locationcharacter.is_valid()) continue;

                fvector head_location = mesh->get_bone_location(8);
                if (!head_location.is_valid()) continue;

                fvector root_location = mesh->get_bone_location(0);
                if (!root_location.is_valid()) continue;

                fvector2d head_location_2d = controller->project_world_to_screen(head_location);
                head_scren.x = head_location_2d.x;
                head_scren.y = head_location_2d.y;

                auto head_location_long_2d = controller->project_world_to_screen({ head_location.x, head_location.y, head_location.z + 15 });
                auto root_location_2d = controller->project_world_to_screen(root_location);
                auto head_long_out = controller->project_world_to_screen({ head_location.x - 10.0f, head_location.y, head_location.z + 75 });

                if (!root_location_2d.is_valid() || !head_location_2d.is_valid() || !head_location_long_2d.is_valid() || !head_long_out.is_valid())
                    continue;

                auto relative_location = actor->k2_get_actor_location();
                auto my_shooter_relative_location = character->k2_get_actor_location();
                auto distance = my_shooter_relative_location.distance(relative_location);
                if (distance <= 0) continue;

                auto [box_width, box_height] = calculate_box_dimensions(head_location_long_2d, root_location_2d);
                if (box_width <= 0 || box_height <= 0) continue;

                float X = head_location_long_2d.x - (box_width / 2), Y = head_location_long_2d.y;
                float lineW = (box_width / 7);
                float lineH = (box_height / 7);
                flinearcolor bobbercol;

                float health_percent = actor->health() / 100.0f;
                float shield_percent = actor->shield() / 50.0f;

                position2 = { head_location_long_2d.x + 35.f, head_location_long_2d.y - 25 };

                if (globals::aimbot::recoilcrosshair) {
                    fvector CameraPos = controller->get_camera_manager()->get_camera_location();
                    fvector CameraRot = controller->get_camera_manager()->get_camera_rotation();
                    fvector controlrotation = memory::read<fvector>((uintptr_t)controller + offsets::ControlRotation);
                    fvector ControlRotation = controlrotation;

                    fvector punchAngle = CameraRot - ControlRotation;
                    Clamp(punchAngle);

                    fvector2d screen_size = canvas->get_screen_size();
                    float screen_width = screen_size.x;
                    float screen_height = screen_size.y;

                    float centerX = screen_width * 0.5f;
                    float centerY = screen_height * 0.5f;

                    float dx = screen_width / 90.0f;
                    float dy = screen_height / 90.0f;

                    centerX += dx * punchAngle.y;
                    centerY -= dy * punchAngle.x;

                    auto current_inv = character->get_inventory();

                    auto current_equip = current_inv->get_current_equippable();


                    fstring obj_name = helper::convert_weapon_name(system::get_object_name(current_equip));
                    if (obj_name.wide() != L"Melee") {
                        drawcircle(canvas, { centerX, centerY }, radius, LineamountCross, flinearcolor(1, 1, 1, 1));
                    }
                }

                if ((globals::visuals::chams || globals::visuals::chamsRGB) && actor->is_alive()) {
                    rainbowTimeZRGB += 0.004f;

                    flinearcolor baseColor = globals::visuals::chamsRGB
                        ? BOSSRAINBOMAW(rainbowTimeZRGB)
                        : ChamsColor;

                    flinearcolor scaledColor = {
                        baseColor.r * globals::misc::GlowIntensity,
                        baseColor.g * globals::misc::GlowIntensity,
                        baseColor.b * globals::misc::GlowIntensity,
                        baseColor.a * globals::visuals::chamsAlpha
                    };

                    reinterpret_cast<void(__fastcall*)(uskeletalmeshcomponent*, EAresOutlineMode, bool)>(
                        memory::module_base + offsets::SetAresOutlineMode
                        )(mesh, EAresOutlineMode::Outline, true);

                    AresOutlineRendering::SetOutlineColorsForRender(world, scaledColor, scaledColor);
                }

                if (globals::misc::GalaxyEnemy && actor->is_alive()) {
                    galaxychamEnemy(actor);
                }

                if (globals::misc::FadeChams && actor->is_alive()) {
                    meshnigger1p(actor);
                }
                if (globals::misc::SelfFadeChams && actor->is_alive()) {
                    meshnigger1pcharacter(actor);
                }

                if (globals::visuals::dormant && character->is_alive()) {
                    if (!controller->dormant_server(actor)) continue;
                }

                if (globals::visuals::Radar && character->is_alive()) {
                    fvector2d screen_size = canvas->get_screen_size();

                    hooks::radar::pRadar.x = (screen_size.x / 2) + 450.0f;
                    hooks::radar::pRadar.y = (screen_size.y / 2) - 300.0f;

                    float radar_radius = 135.0f;
                    float radar_diameter = radar_radius * 2.0f;

                    float cx = hooks::radar::pRadar.x + radar_radius;
                    float cy = hooks::radar::pRadar.y + radar_radius;

                    draw_filled_circle(canvas, cx, cy, radar_radius, 64, flinearcolor(0, 0, 0, 0.25f));
                    draw_circle(canvas, cx, cy, radar_radius, 64, maincolor, 1.0f);

                    DrawLineCanvas(canvas, cx - radar_radius, cy, cx + radar_radius, cy, maincolor, 1.0f);
                    DrawLineCanvas(canvas, cx, cy - radar_radius, cx, cy + radar_radius, maincolor, 1.0f);

                    if (auto actor_root = memory::read2<uintptr_t>((uintptr_t)actor + offsets::Rootcomponent)) {
                        if (!memory::is_valid(actor_root)) continue;
                        fvector actor_pos = actor->k2_get_actor_location();

                        if (auto pawn_root = memory::read2<uintptr_t>((uintptr_t)pawn + offsets::Rootcomponent)) {
                            if (!memory::is_valid(pawn_root)) continue;
                            fvector local_pos = character->k2_get_actor_location();

                            radar::DrawRadar(actor_pos, pawn, canvas, actor);
                        }
                    }
                }

                if (globals::misc::Hat)
                {
                    if (character->is_alive() && controller && mesh && memory::is_valid((uintptr_t)mesh))
                    {
                        fvector head = mesh->get_bone_location(8);
                        fvector base = mesh->get_bone_location(0);

                        (partyhat)(controller, mesh, head, base, canvas);
                    }
                }

                if (globals::visuals::visiblecheck) {
                    defines::visuals_color = (controller->line_of_sight(actor) ?
                        flinearcolor{ 0.0f, 255.0f ,0.0f, 1.0f } : flinearcolor{ 255.0f, 0.0f, 0.0f, 1.0f });
                }
                else {
                    defines::visuals_color = (controller->line_of_sight(actor) ?
                        flinearcolor{ 255.0f, 255.0f, 255.0f, 1.0f } : flinearcolor{ 255.0f, 255.0f, 255.0f, 1.0f });
                }

                if (globals::aimbot::smokeno) {
                    NoSmoke::RemoveSmokes(menu::font, canvas, controller);
                }

                if (globals::aimbot::wallbang) {
                    bool CanAutoWall = true;
                    CanAutoWall = TraceHelper::CanShootThrough(controller, character, actor);
                    if (CanAutoWall) {
                        defines::visuals_color = flinearcolor{ 0.0f, 1.0f, 0.0f, 1.0f };
                    }
                    else {
                        defines::visuals_color = flinearcolor{ 1.0f, 0.0f, 0.0f, 1.0f };
                    }
                }

                float base_y = head_location_2d.y - 45;
                float line_spacing = 15.f;
                int item_count = 0;
                if (globals::visuals::weaponstate && actor->is_alive()) {
                    if (auto get_inventory = actor->get_inventory()) {
                        if (!memory::is_valid((uintptr_t)get_inventory)) continue;
                        if (auto get_weapon = get_inventory->get_current_equippable()) {
                            if (!memory::is_valid((uintptr_t)get_weapon)) continue;
                            EAresEquippableState CurrentEquippableVFXState = memory::read<EAresEquippableState>((uintptr_t)get_weapon + offsets::CurrentEquippableVFXState);
                            std::string Out1 = GetEquippableVFXState(CurrentEquippableVFXState);

                            char buffer[32];
                            sprintf_s(buffer, crypt("[%s]").decrypt(), Out1);

                            float y_pos = base_y - (item_count * line_spacing);
                            hooks::draw_text(canvas, menu::font, s2wc(buffer), maincolor, fvector2d(root_location_2d.x, y_pos));
                            item_count++;
                        }
                    }
                }

                if (globals::visuals::weaponname && actor->is_alive()) {
                    if (auto get_inventory = actor->get_inventory()) {
                        if (!memory::is_valid((uintptr_t)get_inventory)) continue;
                        if (auto get_weapon = get_inventory->get_current_equippable()) {
                            if (!memory::is_valid((uintptr_t)get_weapon)) continue;
                            auto weap_name = weapon_name(system::get_object_name(get_weapon));
                            float y_pos = base_y - (item_count * line_spacing);
                            hooks::draw_text(canvas, menu::font, weap_name.c_str(), maincolor, fvector2d(root_location_2d.x, y_pos));
                            item_count++;
                        }
                    }
                }

                if (globals::visuals::box2d)
                {
                    fvector origin, boxExtent;
                    ashootercharacter* shooterChar = static_cast<ashootercharacter*>(actor);
                    shooterChar->GetActorBounds(true, &origin, &boxExtent, false);

                    fvector2d topLeft, topRight, bottomLeft, bottomRight;
                    if (controller->project_world_location_to_screen(fvector(origin.x - boxExtent.x, origin.y - boxExtent.y, origin.z + boxExtent.z), topLeft, 0) &&
                        controller->project_world_location_to_screen(fvector(origin.x + boxExtent.x, origin.y - boxExtent.y, origin.z + boxExtent.z), topRight, 0) &&
                        controller->project_world_location_to_screen(fvector(origin.x - boxExtent.x, origin.y + boxExtent.y, origin.z - boxExtent.z), bottomLeft, 0) &&
                        controller->project_world_location_to_screen(fvector(origin.x + boxExtent.x, origin.y + boxExtent.y, origin.z - boxExtent.z), bottomRight, 0))
                    {
                        fvector velocity = actor->get_velocity();
                        bool isMoving = velocity.size() > 10.0f;

                        if (isMoving)
                        {
                            float time = GetTickCount64() / 1000.0f;
                            float bounceSpeed = 5.0f;
                            float bounceAmplitude = 10.0f;

                            float verticalBounce = sin(time * bounceSpeed) * bounceAmplitude;
                            topLeft.y += verticalBounce;
                            topRight.y += verticalBounce;
                            bottomLeft.y += verticalBounce;
                            bottomRight.y += verticalBounce;
                        }
                        DrawBox(canvas, topLeft, bottomRight, defines::visuals_color, globals::visuals::filled, 0.95f);
                    }
                }

                if (globals::visuals::filled2) {
                    flinearcolor color;

                    if (globals::visuals::visiblecheck) {
                        color = defines::visuals_color;
                    }
                    else {
                        color = defines::blackcolor_1;
                    }

                    (drawings::draw_filled_box)(controller, mesh, color, canvas);
                }

                if (globals::visuals::box3d)
                {
                    fvector origin, boxExtent;
                    ashootercharacter* shooterChar = static_cast<ashootercharacter*>(actor);
                    shooterChar->GetActorBounds(true, &origin, &boxExtent, false);

                    fvector velocity = actor->get_velocity();
                    float speed = velocity.size();

                    if (speed > 10.f)
                    {
                        fvector dir = velocity / speed;

                        float time = GetTickCount64() / 1000.0f;
                        float bounce = sin(time * 12.0f) * 21.0f;

                        float pushAmount = speed * 0.002f;
                        origin.x += dir.x * pushAmount + (dir.x * bounce * 0.3f);
                        origin.y += dir.y * pushAmount + (dir.y * bounce * 0.3f);
                        origin.z += bounce * 0.2f;

                        float stretch = 1.0f + (speed * 0.0005f);
                        if (abs(dir.x) > abs(dir.y))
                            boxExtent.x *= stretch;
                        else
                            boxExtent.y *= stretch;
                    }

                    fvector corners[8] =
                    {
                        {origin.x + boxExtent.x, origin.y - boxExtent.y, origin.z - boxExtent.z},
                        {origin.x - boxExtent.x, origin.y - boxExtent.y, origin.z - boxExtent.z},
                        {origin.x - boxExtent.x, origin.y + boxExtent.y, origin.z - boxExtent.z},
                        {origin.x + boxExtent.x, origin.y + boxExtent.y, origin.z - boxExtent.z},

                        {origin.x + boxExtent.x, origin.y - boxExtent.y, origin.z + boxExtent.z},
                        {origin.x - boxExtent.x, origin.y - boxExtent.y, origin.z + boxExtent.z},
                        {origin.x - boxExtent.x, origin.y + boxExtent.y, origin.z + boxExtent.z},
                        {origin.x + boxExtent.x, origin.y + boxExtent.y, origin.z + boxExtent.z}
                    };

                    fvector2d screen[8];
                    for (int i = 0; i < 8; i++)
                    {
                        if (!controller->project_world_location_to_screen(corners[i], screen[i], 0))
                            continue;
                    }

                    fvector2d* arr = new fvector2d[8];
                    for (int i = 0; i < 8; i++)
                        arr[i] = screen[i];

                    tarray<fvector2d> pointArray;
                    pointArray.data = arr;
                    pointArray.count = 8;
                    pointArray.max = 8;

                    tarray<fvector2d> hull = GrahamScan(pointArray);
                    DrawConvexHull(canvas, hull, defines::visuals_color);
                    delete[] arr;
                }

                if (globals::visuals::boxhealth) {
                    DrawFiroxESP(canvas, controller, character, actor);
                }
                if (globals::visuals::box)
                {
                    const float height = abs(root_location_2d.y - head_location_2d.y);
                    const float width = height * 0.55f;
                    fvector2d top = { head_location_2d.x - width * 0.5f, head_location_2d.y };
                    fvector2d bottom = { head_location_2d.x + width * 0.5f, root_location_2d.y };

                    DrawCornerBox(canvas, top, bottom, defines::visuals_color, globals::visuals::filled, 0.95f);
                }

                if (globals::visuals::healthbar) {
                    float health = actor->health();
                    float shield = actor->shield();

                    defines::health_color = health >= 75 ? defines::high_health :
                        (health >= 44) ? defines::normal_health : defines::low_heath;

                    if (health <= 100) {
                        drawings::draw_health_and_shield(health, shield, root_location_2d, box_width, box_height, distance, defines::health_color, canvas);
                    }
                }

                if (globals::visuals::headbox) {
                    fvector2d position = { head_location_long_2d.x, head_location_long_2d.y };

                    float radius = (box_height / 7) - 1.0f;
                    if (radius < 1.0f) radius = 1.0f;

                    drawings::head_circle(position, radius, radius, defines::visuals_color, canvas);
                }

                if (globals::visuals::skeleton) {
                    drawings::draw_skeleton(controller, mesh, mesh->GetNumBones(), defines::visuals_color, canvas);
                }

                if (globals::visuals::booms) {
                    fvector2d position1 = { root_location_2d.x - 10, root_location_2d.y + 28 };
                    drawings::agent_icon(actor, position1, distance, canvas);
                }

                if (globals::visuals::biims)
                {
                    fvector2d position2 = { head_location_long_2d.x + 35.f, head_location_long_2d.y - 25 };
                    drawings::gun_icon(actor, position2, distance, canvas);
                }

                if (globals::visuals::dstc) {
                    wchar_t distance_text[256];
                    swprintf_s(distance_text, crypt(L"%.fm").decrypt(), distance);

                    float y_pos = base_y - (item_count * line_spacing);
                    hooks::draw_text(canvas, menu::font, distance_text, defines::visuals_color, fvector2d(root_location_2d.x, y_pos));
                    item_count++;
                }

                if (globals::visuals::playername) {
                    const wchar_t* name_to_draw = nullptr;

                    if (state && memory::is_valid((uintptr_t)state)) {
                        auto name = state->get_player_name();
                        if (name.is_valid()) {
                            name_to_draw = name.c_str();
                        }
                    }

                    if (!name_to_draw) {
                        name_to_draw = crypt(L"BOT").decrypt();
                    }

                    float y_pos = base_y - (item_count * line_spacing);
                    hooks::draw_text(canvas, menu::font, name_to_draw, maincolor, fvector2d(root_location_2d.x, y_pos));
                    item_count++;
                }

                if (globals::visuals::playerrank) {
                    if (state && memory::is_valid((uintptr_t)state)) {
                        PlatformPlayer* getplayerformplayer = memory::read<PlatformPlayer*>((uintptr_t)state + offsets::PlatformPlayer);
                        if (getplayerformplayer && memory::is_valid((uintptr_t)getplayerformplayer)) {
                            int32_t competitive_tier_value = getplayerformplayer->GetCompetitiveTier();
                            ECompetitiveTier tier = static_cast<ECompetitiveTier>(competitive_tier_value);

                            const char* rank_str = GetTierName(tier);
                            if (rank_str) {
                                wchar_t rank_wide[64];
                                swprintf_s(rank_wide, crypt(L"[%hs]").decrypt(), rank_str);

                                float y_pos = base_y - (item_count * line_spacing);
                                hooks::draw_text(canvas, menu::font, rank_wide, maincolor, fvector2d(root_location_2d.x, y_pos));
                                item_count++;
                            }
                        }
                    }
                }

                if (globals::visuals::CurrentAmmo) {
                    if (auto wah = actor->get_inventory())
                    {
                        if (!memory::is_valid((uintptr_t)wah)) continue;

                        if (auto wah2 = wah->get_current_equippable()) {
                            if (!memory::is_valid((uintptr_t)wah2)) continue;

                            auto magazine_ammo = memory::read<uintptr_t>(uintptr_t(wah2) + 0x1200);

                            if (magazine_ammo && memory::is_valid(magazine_ammo)) {
                                int32_t ammo = memory::read<int>(magazine_ammo + 0x12c);
                                int32_t max_ammo = memory::read<int>(magazine_ammo + 0x130);

                                auto ammo_str = string::int_to_string(ammo);

                                auto finished_string = string::buildstring_int(ammo_str, L"/", max_ammo, L"");
                                float y_pos = base_y - (item_count * line_spacing);

                                hooks::draw_text(canvas, menu::font, finished_string.c_str(), maincolor, fvector2d(root_location_2d.x, y_pos));
                                item_count++;
                            }
                        }
                    }
                }

                if (globals::visuals::snapline)
                {
                    float snap_radius = globals::aimbot::aim_fov * 1.5f;

                    fvector2d screen_size = canvas->get_screen_size();
                    float center_x = screen_size.x / 2.0f;
                    float center_y = screen_size.y / 2.0f;

                    float a = head_location_2d.y - center_y;
                    float b = head_location_2d.x - center_x;

                    float x3, y3;
                    float angle = atan(a / b);

                    if (b >= 0)
                    {
                        x3 = snap_radius * cos(angle) + center_x;
                        y3 = snap_radius * sin(angle) + center_y;
                    }
                    else
                    {
                        x3 = snap_radius * (-cos(angle)) + center_x;
                        y3 = snap_radius * (-sin(angle)) + center_y;
                    }

                    if (sqrt(a * a + b * b) >= snap_radius)
                    {
                        fvector2d StartPoint = { x3, y3 };
                        fvector2d EndPoint = { head_location_2d.x, head_location_2d.y };

                        canvas->k2_drawline(StartPoint, EndPoint, 1.0f, defines::visuals_color);
                    }
                }

                if (globals::visuals::snapline1)
                {
                    fvector2d drawtextat;
                    fvector headmesh = mesh->get_bone_location(8);

                    if (controller->line_of_sight(actor))
                    {
                        if (controller->project_world_location_to_screen(headmesh, drawtextat, 0) && drawtextat.is_valid())
                        {
                            fvector2d screen_size = canvas->get_screen_size();
                            fvector2d screen_center = { screen_size.x / 2.0f, screen_size.y / 2.0f };

                            canvas->k2_drawline(screen_center, drawtextat, 1.0f, flinearcolor(0.0f, 1.0f, 0.0f, 1.0f));
                        }
                    

                       
                    }
                    else
                    {
                        if (controller->project_world_location_to_screen(headmesh, drawtextat, 0) && drawtextat.is_valid())
                        {
                            fvector2d screen_size = canvas->get_screen_size();
                            fvector2d screen_center = { screen_size.x / 2.0f, screen_size.y / 2.0f };

                            canvas->k2_drawline(screen_center, drawtextat, 1.0f, flinearcolor(1.0f, 0.0f, 0.0f, 1.0f));
                        }
                    }
                }

                 double fov_limit;

                fov_limit = globals::aimbot::aim_fov;

                if (globals::aimbot::target_selection == 0) {
                    float real_distance = my_shooter_relative_location.distance(relative_location);
                    if (real_distance < closest_distance) {
                        target_id = idx;
                        target_actor = actor;
                        fovforantiaim = fov_limit;
                        closest_distance = real_distance;
                    }
                }
                else if (globals::aimbot::target_selection == 1) {
                    float screen_center_x = (float)canvas->get_screen_size().x / 2.f;
                    float screen_center_y = (float)canvas->get_screen_size().y / 2.f;

                    float delta_x = head_location_2d.x - screen_center_x;
                    float delta_y = head_location_2d.y - screen_center_y;

                    float distance = sqrtf(delta_x * delta_x + delta_y * delta_y);
                    float screen_distance = math::distance_2d(head_location_2d, { screen_center_x, screen_center_y });

                    if (distance < closest_distance && screen_distance < globals::aimbot::aim_fov) {
                        target_id = idx;
                        target_actor = actor;
                        closest_distance = screen_distance;
                    }

                }
            }
        }

        if (globals::misc::Uninject) {
            if (globals::misc::third_person == true) {
                if (character && memory::is_valid((uintptr_t)character))
                    character->Set3pMeshVisible(false);
            }

            if (globals::misc::Holdthird == true) {
                if (character && memory::is_valid((uintptr_t)character))
                    character->Set3pMeshVisible(false);
            }

            hooks::viewport_shadow.restore_table();
            hooks::camera_shadow.restore_table();
            SLIGHTS::vmt::shadow::unbind_all_functions();
        }

        if (globals::misc::SetCamera || globals::aimbot::nospread
            || globals::aimbot::AutoShoot
            || globals::misc::Spinbotserversided
            || globals::misc::enabled
            || globals::misc::AspectRatio || globals::misc::third_person
            || globals::misc::Holdthird1 && camera && memory::is_valid((uintptr_t)camera)) {
            hooks::Rehook(world, controller, camera);
        }

        bool hasTarget3 = false;


        auto get_best_visible_bone = [](uskeletalmeshcomponent* mesh, ashootercharacter* actor, aplayercontroller* controller) -> fvector {
            if (!mesh || !actor || !controller) return fvector{ 0,0,0 };

            for (int bone : globals::aimbot::bone_priority) {
                fvector bone_loc = mesh->get_bone_location(bone);
                if (bone_loc.is_valid() && controller->line_of_sight(actor)) {
                    return bone_loc;
                }
            }
            return fvector{ 0,0,0 };
            };

        auto get_closest_penetrable_bone = [](uskeletalmeshcomponent* mesh, ashootercharacter* actor, aplayercontroller* controller, ashootercharacter* shooter_char) -> fvector {
            if (!mesh || !actor || !controller || !shooter_char) return fvector{ 0,0,0 };

            int bone_count = mesh->GetNumBones();
            std::vector<int> bones_to_check;

            if (bone_count == 103) {
                bones_to_check = { 8, 6, 4, 83, 69, 42, 43 };
            }
            else if (bone_count == 104) {
                bones_to_check = { 20, 18, 2, 87, 80, 35, 55 };
            }
            else {
                bones_to_check = { 8, 6, 4, 85, 78, 33, 53 };
            }

            fvector camera_pos = controller->get_camera_manager()->get_camera_location();

            for (int bone : bones_to_check) {
                fvector bone_loc = mesh->get_bone_location(bone);
                if (!bone_loc.is_valid()) continue;

                if (TraceHelper::CanShootThrough(controller, shooter_char, actor, bone)) {
                    return bone_loc;
                }
            }

            return fvector{ 0,0,0 };
            };

        if (target_id != -1)
        {
            if (!actors.IsValidIndex(target_id))
                return hooks::draw_transition_o(viewportclient, a2, a3);

            ashootercharacter* actor = actors[target_id];
            if (!actor || !memory::is_valid((uintptr_t)target_actor) || actor == character)
                return hooks::draw_transition_o(viewportclient, a2, a3);

            uskeletalmeshcomponent* mesh = target_actor->get_mesh();
            if (!mesh || !memory::is_valid((uintptr_t)mesh))
                return hooks::draw_transition_o(viewportclient, a2, a3);

            if (actor->is_alive()) {
                if (globals::aimbot::aimbot) {
                    bool aim_key_pressed =
                        character->get_inventory()->get_current_equippable() &&
                        (globals::aimbot::AutoFire || GetAsyncKeyState(globals::aimbot::aim_key));

                    bool visible_check;
                    bVisible_cached = (globals::aimbot::vish_check && controller->line_of_sight(actor)) || !globals::aimbot::vish_check;
                    CanAutoWall_cached = false;
                    if (globals::aimbot::wallbang && !bVisible_cached)
                    {
                        CanAutoWall_cached = TraceHelper::CanShootThrough(controller, character, actor);
                    }

                    visible_check = bVisible_cached || CanAutoWall_cached;

                    fvector2d head_screen;

                    if (globals::aimbot::close_bone) {
                        get_closest_penetrable_bone(mesh, actor, controller, character);
                    }
                    else {
                        fvector Head = mesh->get_bone_location(8);
                    }
      

                    if (aim_key_pressed && visible_check) {
                        fvector target = get_target_bone_matrix(mesh, globals::aimbot::aim_bone);

                        if (globals::aimbot::Prediction)
                        {
                            fvector target_velocity = actor->get_velocity();
                            float bullet_speed = 27000.f;

                            auto weapon = character->get_inventory()->get_current_equippable();
                            if (weapon && memory::is_valid((uintptr_t)weapon))
                            {
                                fstring raw_name = helper::convert_weapon_name(system::get_object_name(weapon));
                                std::wstring wname = raw_name.wide();

                                if (wname == L"Vandal")        bullet_speed = 27000.f;
                                else if (wname == L"Phantom")       bullet_speed = 26000.f;
                                else if (wname == L"Ghost")         bullet_speed = 23500.f;
                                else if (wname == L"Sheriff")       bullet_speed = 24000.f;
                                else if (wname == L"Operator")      bullet_speed = 45000.f;
                                else if (wname == L"Bulldog")       bullet_speed = 26000.f;
                                else if (wname == L"Stinger")       bullet_speed = 18000.f;
                                else if (wname == L"Classic")       bullet_speed = 23500.f;
                                else if (wname == L"Guardian")      bullet_speed = 30000.f;
                                else if (wname == L"Marshal")       bullet_speed = 40000.f;
                                else if (wname == L"Bucky")         bullet_speed = 18000.f;
                                else if (wname == L"Judge")         bullet_speed = 18000.f;
                                else if (wname == L"Ares")          bullet_speed = 21000.f;
                                else if (wname == L"Odin")          bullet_speed = 21000.f;
                                else if (wname == L"Shorty")        bullet_speed = 18000.f;
                                else if (wname == L"Frenzy")        bullet_speed = 23500.f;
                                else if (wname == L"Headhunter")    bullet_speed = 23500.f;
                                else if (wname == L"Blade storm")   bullet_speed = 23500.f;
                                else if (wname == L"Overdrive")     bullet_speed = 21000.f;
                                else if (wname == L"Outlaw")        bullet_speed = 40000.f;
                                else if (wname == L"Tour de force") bullet_speed = 45000.f;
                            }

                            fvector CameraPosPred = camera->get_camera_location();
                            fvector to_target = target - CameraPosPred;
                            float distance = to_target.size();

                            if (distance > 1.f)
                            {
                                float travel_time = distance / bullet_speed;
                                target = target + (target_velocity * travel_time);
                            }
                        }

                        fvector CameraPos = camera->get_camera_location();
                        fvector controlrotation = controller->get_control_rotation();

                        if (globals::aimbot::recoil_control) {
                            fvector recoil = camera->get_camera_rotation() - controlrotation;
                            aimbot_recoil_internal(controlrotation, target, CameraPos, recoil, controller, camera);
                        }
                        else {
                            aimbot_simple_internal(controlrotation, target, CameraPos, controller, camera);
                        }
                    }
                }
            }
        }

        fvector2d Dinabumalik = canvas->get_screen_size();
        fvector2d screen_center = { Dinabumalik.x * 0.5f, Dinabumalik.y * 0.5f };
        draw_fov(screen_center, globals::aimbot::aim_fov, 100, canvas);

        return hooks::draw_transition_o(viewportclient, a2, a3);
    }

    
    void niggarito(uint8_t* module_, uint32_t max_fakestack = 12) {
        return reinterpret_cast<void(*)(uint8_t * module_, uint32_t max_fakestack, uintptr_t, void*)>(spoofcall_stub)(module_, max_fakestack, offsets::MagicOffsets, (void*)initialize_spoofcall);

    }

    void call_draw_transition_hook1(ugameviewportclient* viewportclient, ucanvas* canvas, std::uint64_t a3) {
        return reinterpret_cast<void(*)(ugameviewportclient * viewportclient, ucanvas * canvas, std::uint64_t a3, uintptr_t, void*)>(spoofcall_stub)(viewportclient, canvas, a3, offsets::MagicOffsets, (void*)hooks::hk_draw_transition);
    }

    struct State {
        uintptr_t keys[7];
    };

    struct engine_cache_t
    {
        uworld* world{};
        ugameinstance* gameinstance{};
        ulocalplayer* localplayer{};
        aplayercontroller* controller{};
        ugameviewportclient* viewport{};
        uobject* gameview{};
        uintptr_t             engine{};
    };

    static engine_cache_t g_cache{};
    static bool g_keys_init = false;

    __forceinline bool is_valid_engine_state()
    {
        return g_cache.world &&
            g_cache.gameinstance &&
            g_cache.localplayer &&
            g_cache.controller &&
            g_cache.viewport &&
            g_cache.gameview;


    };
    PVOID create_jmp_hook(void* function)
    {
        PVOID page1 = VirtualAlloc(0, 0x10ui64, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

        uint8_t jmp64[] =
        {
            0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88,
        };

        *(PVOID*)(jmp64 + 6) = function;

        memcpy(page1, jmp64, sizeof(jmp64));

        DWORD old;
        VirtualProtect(page1, 0x10, PAGE_EXECUTE_READ, &old);

        return page1;
    }


    void hooks::q9F_init()
    {
        

        static bool q9F_keys = false;

        static uworld* q9F_w = nullptr;
        static ugameinstance* q9F_gi = nullptr;
        static ulocalplayer* q9F_lp = nullptr;
        static aplayercontroller* q9F_pc = nullptr;
        static ugameviewportclient* q9F_vp = nullptr;
        static uobject* q9F_gv = nullptr;
        static uintptr_t            q9F_eng = 0;

        variables.init_variables();

        if (!q9F_w)
        {

            uintptr_t* p =
                *reinterpret_cast<uintptr_t**>(
                    memory::module_base + DecryptOffsetClear(offsets::State));

            if (!p)
                return;

            q9F_w = *reinterpret_cast<uworld**>(p);
            if (!q9F_w)
                return;
        }

        if (!q9F_gi)
        {
            q9F_gi = memory::read<ugameinstance*>(
                uintptr_t(q9F_w) + offsets::game_instance);

            if (!q9F_gi)
                return;

            q9F_eng = memory::read<uintptr_t>(
                uintptr_t(q9F_gi) + offsets::Engine);

           
        }

        if (!q9F_lp)
        {
            ulocalplayer* x = memory::read<ulocalplayer*>(
                uintptr_t(q9F_gi) + offsets::local_players);

            if (!x)
                return;


 
            q9F_lp = memory::read< ulocalplayer*>((uintptr_t)x);

        }

        if (!q9F_pc)
        {
            q9F_pc = memory::read<aplayercontroller*>(
                uintptr_t(q9F_lp) + offsets::LocalController);

            if (!q9F_pc)
                return;
        }

        aplayercameramanager* camera = memory::read<aplayercameramanager*>((uintptr_t)q9F_pc + offsets::cameramaneger);
        if (!q9F_vp)
        {
            q9F_vp = q9F_lp->viewport_client();
            if (!q9F_vp)
                return;
        }

        if (!q9F_gv)
        {
            q9F_gv = memory::read<uobject*>(
                uintptr_t(q9F_vp) + 0xF0);

            if (!q9F_gv)
                return;
        }

        if (!q9F_keys)
        {
            keys::space = (string::string_to_name)(crypt(L"SpaceBar").decrypt());
            keys::left_mouse = (string::string_to_name)(crypt(L"LeftMouseButton").decrypt());
            keys::w = (string::string_to_name)(crypt(L"W").decrypt());
            keys::a = (string::string_to_name)(crypt(L"A").decrypt());
            keys::s = (string::string_to_name)(crypt(L"S").decrypt());
            keys::d = (string::string_to_name)(crypt(L"D").decrypt());

            auto enc_5 = Encrypt(L"LeftAlt");
            keys::left_alt = string::string_to_name(enc_5.decrypt()), enc_5.encrypt();

            q9F_keys = true;
        }

        if (!engine_cache)
            engine_cache = memory::read<uobject*>(
                uintptr_t(q9F_gi) + 0x28);

        if (!menu::font)
            menu::font = memory::read<uobject*>(
                q9F_eng + offsets::UworldShit);

        hooks::viewport_shadow.virtual_hook((void*)q9F_vp, hooks::hk_draw_transition, offsets::post_render, (void**)&hooks::draw_transition_o);

    }
};

