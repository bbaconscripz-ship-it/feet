#pragma once
#include "functions.hpp"
#include "../sdk/shadow_vmt.hpp"
#include "../encrypt/importer.hpp"
#include <array>
#include <string>

bool vgknohack;



namespace defines {
    static flinearcolor health_color;
    static flinearcolor high_health = { 0.0f,255.0f,0.0f,1.0f };
    static flinearcolor normal_health = { 255, 151, 0 ,1.0f };
    static flinearcolor low_heath = { 255.0f,0.0f,0.f,1.0f };
    static flinearcolor blackcolor_1 = { 0.5f, 0.5f, 0.5f, 1.0f };
    static flinearcolor visuals_color = { 255.0f,255.0f,255.0f,1.0f };
}
typedef unsigned char   uint8;


struct ABP_Sky_Sphere_C {
    uintptr_t* Sky_Sphere_mesh; // 0x3B8
    USceneComponentHelpers* Base; // 0x3C0
    UMaterialInstanceDynamic* Sky_material; // 0x3C8
    bool Refresh_material; // 0x3D0
    uint8_t pad_3D1[0x7];
    uobject* Directional_light_actor; // 0x3D8
    bool Colors_determined_by_sun_position; // 0x3E0
    uint8_t pad_3E1[0x3];
    float Sun_height; // 0x3E4
    float Sun_brightness; // 0x3E8
    float Horizon_Falloff; // 0x3EC
    flinearcolor Zenith_Color; // 0x3F0
    flinearcolor Horizon_color; // 0x400
    flinearcolor Cloud_color; // 0x410
    flinearcolor Overall_Color; // 0x420
    float Cloud_speed; // 0x430
    float Cloud_opacity; // 0x434
    float Stars_brightness; // 0x438
    uint8_t pad_43C[0x4];
    uobject* Horizon_color_curve; // 0x440
    uobject* Zenith_color_curve;  // 0x448
    uobject* Cloud_color_curve;   // 0x450
};
static fstring get_class_name(uobject* object) {
    if (!object) return {};

    // UClass is at offset 0x10 in UObject
    uobject* clazz = memory::read<uobject*>((uintptr_t)object + 0x10);
    if (!clazz) return {};

    return system::get_object_name(clazz);
}

ashootercharacter* publicact;
struct FTViewTarget
{
    acknowledgedpawn* Target;
    FMinimalViewInfo POV;
    aplayerstate* PlayerState;
};

namespace enums
{
    enum class ecachedteamcolor : uint8_t {
        cachedteamcolor_invalid = 0,
        cachedteamcolor_friendly = 1,
        cachedteamcolor_enemy = 2,
        cachedteamcolor_absolute = 3,
        cachedteamcolor_max = 4
    };

    enum class earesoutlinemode : uint8_t {
        none = 0,
        outline = 1,
        block = 2,
        enemy = 3,
        alwaysoutline = 4,
        alwaysenemy = 5,
        earesoutlinemode_max = 6
    };
} using namespace enums;

namespace hooks
{
    uworld* UWorldClass;
    using draw_transition = void(*)(ugameviewportclient* viewportclient, std::uintptr_t a2, std::uint64_t a3);
    inline draw_transition draw_transition_o = 0;
    void(__fastcall* oHkDeath)(void*, void*);
    static shadow_vmt draw_transition_vmt;
    static inline SLIGHTS::vmt::shadow shadowViewport;
 
    void call_drawui(ucanvas* canvas);

    void hk_draw_transition(ugameviewportclient* viewportclient, std::uintptr_t a2, std::uint64_t a3);

    auto SetCameraCachePOVHook(uintptr_t PlayerCameraManager, FMinimalViewInfo* ViewInfo);
    void q9F_init();

    void hkProcessEvent(void* class_, uobject* function, void* params, uintptr_t magic, void* original_fn);

    using tProcessEvent = void(*)(void*, uobject*, void*, uintptr_t, void*);
    tProcessEvent oProcessEvent = nullptr;
    void Rehook(uworld* Uworld, aplayercontroller* PlayerController, aplayercameramanager* cameramanager);
    SLIGHTS::vmt::shadow viewport_shadow;
    SLIGHTS::vmt::shadow camera_shadow;
}




/*





 std::array<std::wstring, 3> bone_types = {  crypt(L"head").decrypt(),  crypt(L"chest").decrypt(),crypt(L"leg").decrypt() };
    std::array<std::wstring, 3> box_types = { crypt(L"corner").decrypt(), crypt(L"2d").decrypt(), crypt(L"3d").decrypt() };

    void process_input() {

        if (GetAsyncKeyState(VK_UP) & 1) {
            current_selection = (current_selection - 1 + max_selection + 1) % (max_selection + 1);
        }
        if (GetAsyncKeyState(VK_DOWN) & 1) {
            current_selection = (current_selection + 1) % (max_selection + 1);
        }

        if (GetAsyncKeyState(VK_RIGHT) & 1) {
            if (current_selection == 12) {
                globals::aimbot::aim_bone = (globals::aimbot::aim_bone + 1) % bone_types.size();
            }
            else {
                switch (current_selection) {
                case 3: globals::visuals::headbox = true; break;
                case 4: globals::visuals::skeleton = true; break;
                case 5: globals::visuals::snapline = true; break;
                case 6: globals::visuals::healthbar = true; break;
                case 7: globals::aimbot::aimbot = true; break;
                case 8: globals::aimbot::vish_check = true; break;
                case 9: globals::aimbot::recoil_control = true; break;
                case 10: globals::aimbot::aim_smooth += 0.30f; break;
                case 11: globals::aimbot::aim_fov += 0.30f; break;
                case 13: globals::misc::skiptutorial = true; break;
                case 14: globals::misc::skin_changer = true; break;
                }
            }
        }

        if (GetAsyncKeyState(VK_LEFT) & 1) {
            if (current_selection == 12) {
                globals::aimbot::aim_bone = (globals::aimbot::aim_bone - 1 + bone_types.size()) % bone_types.size();
            }
            else {
                switch (current_selection) {
                case 3: globals::visuals::headbox = false; break;
                case 4: globals::visuals::skeleton = false; break;
                case 5: globals::visuals::snapline = false; break;
                case 6: globals::visuals::healthbar = false; break;
                case 7: globals::aimbot::aimbot = false; break;
                case 8: globals::aimbot::vish_check = false; break;
                case 9: globals::aimbot::recoil_control = false; break;
                case 10: globals::aimbot::aim_smooth -= 0.30f; break;
                case 11: globals::aimbot::aim_fov -= 0.30f; break;
                case 13: globals::misc::skiptutorial = false; break;
                case 14: globals::misc::skin_changer = false; break;
                }
            }
        }
    }

    void hk_draw_menu(uobject* font, bool open_canvas, ucanvas* canvas) {

        if (canvas && font && open_canvas) {

            static float horizontal_padding = 240;
            static float vertical_padding = 190;
            static float menu_width = 185;
            static float menu_height = 410;

            flinearcolor border_color = { 1.0f, 1.0f, 1.0f, 1.0f };
            float border_thickness = 2.0f;

            static float linex_padding = 100;
            static float liney_padding = 240;

            static float color_phase = 0.0f;
            flinearcolor rainbow_color = { sin(color_phase) * 0.5f + 0.5f, sin(color_phase + 2.0f) * 0.5f + 0.5f, sin(color_phase + 4.0f) * 0.5f + 0.5f, 1.0f };
            color_phase += 0.05f;

            // Top line
            canvas->k2_drawline({ 145 + linex_padding, 15 + liney_padding },
                { 145 + linex_padding + menu_width, 15 + liney_padding },
                border_thickness, border_color);

            // Bottom line
            canvas->k2_drawline({ 145 + linex_padding, 15 + liney_padding + menu_height },
                { 145 + linex_padding + menu_width, 15 + liney_padding + menu_height },
                border_thickness, border_color);

            // Left line
            canvas->k2_drawline({ 145 + linex_padding, 15 + liney_padding },
                { 145 + linex_padding, 15 + liney_padding + menu_height },
                border_thickness, border_color);

            // Right line
            canvas->k2_drawline({ 145 + linex_padding + menu_width, 15 + liney_padding },
                { 145 + linex_padding + menu_width, 15 + liney_padding + menu_height },
                border_thickness, border_color);

            draw_head(canvas, font, crypt(L"VIP - Menu: F2").decrypt(), { 0.0f, 1.5f, 1.0f, 1.0f }, { 145 + vertical_padding, 40 + horizontal_padding });
            canvas->k2_drawline({ 145 + linex_padding, 57 + liney_padding }, { 145 + linex_padding + menu_width, 57 + liney_padding },
                border_thickness, border_color);

            process_input();

            draw_text(canvas, font, crypt(L"Visuals:").decrypt(), rainbow_color, { 145 + vertical_padding, 70 + horizontal_padding });

            draw_text(canvas, font, globals::visuals::headbox ? crypt(L"headbox: on").decrypt() : crypt(L"headbox: off").decrypt(),
                (current_selection == 3) ? flinearcolor{ 1, 1, 0, 1 } : get_color(globals::visuals::headbox), { 145 + vertical_padding, 90 + horizontal_padding });

            draw_text(canvas, font, globals::visuals::skeleton ? crypt(L"skeleton: on").decrypt() : crypt(L"skeleton: off").decrypt(),
                (current_selection == 4) ? flinearcolor{ 1, 1, 0, 1 } : get_color(globals::visuals::skeleton), { 145 + vertical_padding, 110 + horizontal_padding });

            draw_text(canvas, font, globals::visuals::snapline ? crypt(L"snapline: on").decrypt() : crypt(L"snapline: off").decrypt(),
                (current_selection == 5) ? flinearcolor{ 1, 1, 0, 1 } : get_color(globals::visuals::snapline), { 145 + vertical_padding, 130 + horizontal_padding });

            draw_text(canvas, font, globals::visuals::healthbar ? crypt(L"healthbar: on").decrypt() : crypt(L"healthbar: off").decrypt(),
                (current_selection == 6) ? flinearcolor{ 1, 1, 0, 1 } : get_color(globals::visuals::healthbar), { 145 + vertical_padding, 150 + horizontal_padding });

            canvas->k2_drawline({ 145 + linex_padding, 166 + liney_padding }, { 145 + linex_padding + menu_width, 166 + liney_padding },
                border_thickness, border_color);

            draw_text(canvas, font, crypt(L"Aimbot:").decrypt(), rainbow_color, { 145 + vertical_padding, 180 + horizontal_padding });

            draw_text(canvas, font, globals::aimbot::aimbot ? crypt(L"enable: on").decrypt() : crypt(L"enable: off").decrypt(),
                (current_selection == 7) ? flinearcolor{ 1, 1, 0, 1 } : get_color(globals::aimbot::aimbot), { 145 + vertical_padding, 200 + horizontal_padding });

            draw_text(canvas, font, globals::aimbot::vish_check ? crypt(L"visible check: on").decrypt() : crypt(L"visible check: off").decrypt(),
                (current_selection == 8) ? flinearcolor{ 1, 1, 0, 1 } : get_color(globals::aimbot::vish_check), { 145 + vertical_padding, 220 + horizontal_padding });

            draw_text(canvas, font, globals::aimbot::recoil_control ? crypt(L"recoil control: on").decrypt() : crypt(L"recoil control: off").decrypt(),
                (current_selection == 9) ? flinearcolor{ 1, 1, 0, 1 } : get_color(globals::aimbot::recoil_control), { 145 + vertical_padding, 240 + horizontal_padding });

            if (globals::aimbot::aim_smooth < 1) globals::aimbot::aim_smooth = 1;
            draw_text(canvas, font, std::wstring(crypt(L"smooth: ").decrypt() + std::to_wstring(globals::aimbot::aim_smooth)).c_str(),
                (current_selection == 10) ? flinearcolor{ 1, 1, 0, 1 } : flinearcolor{ 1, 1, 1, 1 }, { 145 + vertical_padding, 260 + horizontal_padding });

            draw_text(canvas, font, std::wstring(crypt(L"fov: ").decrypt() + std::to_wstring(globals::aimbot::aim_fov)).c_str(),
                (current_selection == 11) ? flinearcolor{ 1, 1, 0, 1 } : flinearcolor{ 1, 1, 1, 1 }, { 145 + vertical_padding, 280 + horizontal_padding });

            draw_text(canvas, font, std::wstring(crypt(L"bone: ").decrypt() + bone_types[globals::aimbot::aim_bone]).c_str(),
                (current_selection == 12) ? flinearcolor{ 1, 1, 0, 1 } : flinearcolor{ 1, 1, 1, 1 }, { 145 + vertical_padding, 300 + horizontal_padding });

            draw_text(canvas, font, std::wstring(crypt(L"key: ").decrypt() + key_types[globals::aimbot::aim_key]).c_str(),
                (current_selection == 13) ? flinearcolor{ 1, 1, 0, 1 } : flinearcolor{ 1, 1, 1, 1 }, { 145 + vertical_padding, 320 + horizontal_padding });

            canvas->k2_drawline({ 145 + linex_padding, 340 + liney_padding }, { 145 + linex_padding + menu_width, 340 + liney_padding },
                border_thickness, border_color);

            draw_text(canvas, font, crypt(L"Misc:").decrypt(), rainbow_color, { 145 + vertical_padding, 360 + horizontal_padding });

            draw_text(canvas, font, globals::misc::skiptutorial ? crypt(L"skip tutorial: on").decrypt() : crypt(L"skip tutorial: off").decrypt(),
                (current_selection == 13) ? flinearcolor{ 1, 1, 0, 1 } : get_color(globals::misc::skiptutorial), { 145 + vertical_padding, 380 + horizontal_padding });

            draw_text(canvas, font, globals::misc::skin_changer ? crypt(L"unlock skins: on").decrypt() : crypt(L"unlock skins: off").decrypt(),
                (current_selection == 14) ? flinearcolor{ 1, 1, 0, 1 } : get_color(globals::misc::skin_changer), { 145 + vertical_padding, 400 + horizontal_padding });
        }
    }

if (controller->is_input_key_down(variables.f2) & 1)
                open_canvas = !open_canvas;

            hooks::hk_draw_menu(font, open_canvas, canvas);

if (globals::visuals::box) {
    if (globals::visuals::box_type == 0) {
        drawings::draw_corner(controller, mesh, root_location_2d, head_location_long_2d, { 1,1,1,1 }, canvas);
    }
    else if (globals::visuals::box_type == 1) {
        drawings::draw_rect({ head_location_long_2d.x - (box_width / 2) + 1, head_location_long_2d.y - 1 }, box_width, box_height, { 1,1,1,1 }, canvas);
    }
    else if (globals::visuals::box_type == 2) {
        drawings::draw_3d(controller, mesh, head_location, root_location, { 1,1,1,1 }, canvas);
    }
}

if (globals::misc::skin_changer) {

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
                                                    if (!skin_data)
                                                        continue;

                                                    int32_t skin_data_type = skin_data->get_type();
                                                    if (skin_data_type != type)
                                                        continue;

                                                    int max_level = skin_data->get_skin_levels().size();
                                                    uobject* skin_chroma_asset = skin_model->get_skin_inventory_chroma_asset()->get_skin_chroma_data_asset(); if (!skin_chroma_asset) continue;
                                                    skin_changer::unlock_all_apply(equippable, skin_data, skin_chroma_asset, max_level, nullptr, -1);
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

            }



*/