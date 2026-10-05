#pragma once
#include <Windows.h>
#include <iostream>
#include <cstdio>
#include "structs.hpp"
#include "../encrypt/xor.hpp"
#include <vector>
#include <unordered_map>

template<class k, class e>
class tmap
{
public:
	k Key;
	e Element;
	char __pad0x[0x8];
};

namespace offsets
{
	namespace radar {
		uintptr_t portrait_minimap = 0x1560; // c
		uintptr_t character_minimap = 0x1568;
	}

	namespace minimap_component {
		uintptr_t observer_status = 0x06D0;
		uintptr_t visible_status = 0x0691;
	}

	uintptr_t hkdeath = 0x37;
	uintptr_t post_render = 0x63;
	uintptr_t update_view_target = 0xf2;
	uintptr_t OHkTarget = 0x159;

	constexpr uint64_t fmemory_malloc = 0x1B766D0;
	constexpr uint64_t play_finisher_effect = 0x6BEF160;
	constexpr uint64_t last_submit_time = 0x478;
	constexpr uint64_t last_render_time = 0x47C;


	constexpr uint64_t vtable = 0x53;

	auto State = Encrypt("0xD35FE30");
	constexpr uint64_t State2 = 0xD35FE30;
	constexpr uint64_t MeshFPFlag = 0x394;

	constexpr uint64_t Component2World = 0x2D0;

	constexpr uint64_t UworldShit = 0x68;
	constexpr uint64_t UworldShit1 = 0x080;
	constexpr uint64_t ChamsOffset = 0x01270;
	constexpr uint64_t arms = 0x01220;

	constexpr uint64_t AntiFlash = 0x0A18;

	constexpr uint64_t RWX = 0x80;
	constexpr uint64_t ObjectiveIcon = 0x04e0;
	///need Offsets

	constexpr uint64_t static_find_object = 0x1FACC00;
	constexpr uint64_t static_laod_object = 0x1FB0360;

	constexpr uint64_t process_event = 0x1F80EF0;
	constexpr uint64_t bone_matrix = 0x447D410;
	constexpr uint64_t skin_decrypt = 0x3442320;
	constexpr uintptr_t MakeRenderStateDirty = 0x154edb0;
	constexpr uint64_t SetAresOutlineMode = 0x4412F00;

	constexpr uintptr_t outline_modee = 0x0330;
	constexpr uintptr_t attach_children = 0x0110;
	constexpr uintptr_t attach_children_count = 0x0118;

	constexpr uint64_t RandomShit = 0x8;

	constexpr uint64_t MagicOffsets = 0x4B129F0;

	constexpr uint64_t get_fpak_platform_file = 0xD39B0F8;
	constexpr uint64_t bypass_pak_signing = 0xD756BB8;
	constexpr uint64_t mount_custom_pak = 0x2C8EFC0;

	constexpr uint64_t TriggerVEH = 0x1BACCF6;
	constexpr uint64_t Inventory = 0x0c08;
	constexpr uint64_t Equippable = 0x0240;
	constexpr uint64_t Mesh1pGun = 0xde0;
	constexpr uint64_t Mesh3pGun = 0xdf0;
	constexpr uint64_t GameViewport = 0x0BD0;
	constexpr uint64_t SkyMeshcomponent = 0x0290;
	constexpr uint64_t Rootcomponent = 0x0290;
	constexpr uint64_t root_position = 0x0170;
	constexpr uint64_t CameraRadar = 0x017C0;
	constexpr uint64_t FresnelIntensity = 0x01E4;
	constexpr uint64_t FresnelComponent = 0x0860;
	constexpr uint64_t CurrentEquippableVFXState = 0x0e30;
	constexpr uint64_t LocalPlayers = 0x040;
	constexpr uint64_t LocalController = 0x038;

	constexpr uint64_t seed_data = 0x4A0;
	constexpr uint64_t stability_component = 0x0490; //stability

	constexpr uint64_t stability_component1 = 0x35E18DD; //stability
	constexpr uint64_t ActiveStabilityComponent = 0x338;

	constexpr uint64_t error_power = 0x49c;
	constexpr uint64_t error_retries = 0x470;



	static auto get_spread_values_enc = Encrypt("0x6C96420");
	static auto get_spread_angles_enc = Encrypt("0x7944B30");
	static auto tovector_and_normalize_enc = Encrypt("0x1C6F070");
	static auto toangle_and_normalize_enc = Encrypt("0x1C69B60");
	static auto GetFiringLocationAndDirection_enc = Encrypt("0x7464540");


	static uintptr_t get_spread_values = DecryptOffsetClear(get_spread_values_enc);
	static uintptr_t get_spread_angles = DecryptOffsetClear(get_spread_angles_enc);
	static uintptr_t tovector_and_normalize = DecryptOffsetClear(tovector_and_normalize_enc);
	static uintptr_t toangle_and_normalize = DecryptOffsetClear(toangle_and_normalize_enc);
	static uintptr_t GetFiringLocationAndDirection = DecryptOffsetClear(GetFiringLocationAndDirection_enc);


	constexpr uint64_t firing_state_component = 0x1238;
	constexpr uint64_t displayname = 0x5c8;

	constexpr uint64_t DefuseTimer = 0x5D8;
	constexpr uint64_t Timer = 0x05B0;

	constexpr uint64_t get_charm_level_data_asset = 0x70;
	constexpr uint64_t get_charm_data_asset = 0x68;
	constexpr uint64_t get_skin_chroma_data_asset = 0x108;
	constexpr uint64_t get_skin_data_asset = 0x108;
	constexpr uint64_t get_skin_levels = 0x88;

	constexpr uint64_t super_class = 0x48;
	constexpr uint64_t objectclass = 0x10;

	constexpr uint64_t relative_rotation = 0x170;

	constexpr uint64_t portrait_map = 0x14F0;
	constexpr uint64_t character_map = 0x14F8;


	constexpr uint64_t poraitshit = 0x691;
	constexpr uint64_t Character = 0x6D0;

	constexpr uint64_t cameramaneger = 0x0528;
	constexpr uint64_t mesh = 0x438;





	constexpr uintptr_t LeftHandFarBoneName = 0xfbc;
	constexpr uintptr_t RightHandWeaponAttachName = 0xfc8;
	constexpr uintptr_t bIsLeftHanded = 0xfc8;
	constexpr uintptr_t bSupportsLeftHandedMode = 0xf1c;
	std::uintptr_t death_reaction_component_offset = 0x0CA8; //0x10
	std::uintptr_t montage_effect_override_offset = 0x108;
	std::uintptr_t montage_effect_override_context_offset = 0x110;

	//actor -> Username
	constexpr uint64_t PlayerState = 0x488;
	constexpr uint64_t PlatformPlayer = 0x6A0;
	constexpr uint64_t RiotName = 0x480;

	//camera 
	constexpr uint64_t camerapos = 0x590;
	constexpr uint64_t camerafov = 0x580;
	constexpr uint64_t camerarot = 0x59C;

	//sumshit
	constexpr uint64_t game_instance = 0x01d8;
	constexpr uint64_t local_players = 0x40;
	constexpr uint64_t viewport_client = 0x80;
	constexpr uint64_t was_invisible = 0xc8b;
	constexpr uint64_t inventory_icon = 0x0EB0;
	constexpr uintptr_t bone_array = 0x730;

	constexpr uint64_t bone_cout = bone_array + 0x8;
	constexpr uint64_t font = 0x88;
	constexpr uint64_t WireFrame = 0x92E;
	constexpr uint64_t WireFrame2 = 0xc0;
	constexpr uint64_t WireFrame3 = 0xff;

	constexpr uint64_t skin_pointer = 0x3a8;
	constexpr uint64_t skin_pointer_2 = 0xB0;
	constexpr uint64_t skin_pointer_3 = 0x80;

	constexpr uint64_t ThirdpersonCosmestic3p = 0x0F20;
	constexpr uint64_t ControlRotation = 0x4e0;


	constexpr uint64_t ScreenSize1 = 0x48;
	constexpr uint64_t ScreenSize2 = 0x4c;

	constexpr uint64_t EquippableModels = 0xF0;
	constexpr uint64_t PossibleSkins = 0x168;
	constexpr uint64_t PossibleLevels = 0x150;
	constexpr uint64_t bIsUnlockedByConfig = 0x116;
	constexpr uint64_t bIsOwned = 0x10A;
	constexpr uint64_t bIsFavorite = 0xf3;
	constexpr uint64_t PossibleChromas = 0x140;


	constexpr uint64_t viewport_world = 0x80;

	constexpr uint64_t AspectRatio = 0x428;

	constexpr uint64_t vmthook = 0x68;

	constexpr uint64_t Engine = 0x28;

	constexpr uint64_t IsDormant = 0x101;

	constexpr uint64_t SetCameraPOVHook = 0xD7;

	constexpr uint64_t viewport_gameinstance = 0x88;


	constexpr uintptr_t Mesh1P_Offset = 0xF10;
	constexpr uintptr_t Mesh3P_Offset = 0xF20;
	constexpr uintptr_t MeshOverlay1P_Offset = 0xF18;

	constexpr uintptr_t Mesh1POverlayMIDs = 0xF80;
	constexpr uintptr_t Mesh1PMIDs = 0x0F90;
	constexpr uintptr_t Mesh3PMIDs = 0xF60;
	constexpr uintptr_t fmemory_needed = 0x10;


	constexpr uintptr_t NoSpreadNeed = 0xD8;


}


namespace globals
{
	namespace visuals {
		inline float FilledBoxAlpha = 0.1f; // Şeffaflık slider'ı için (0.0 - 1.0)

		static float box_outline_thickness = 2.0f; // Outline kalınlığı
		inline bool DrawBoxOutlines = false;
		inline bool FilledBoxOutline = true;
		inline float FilledBoxOutlineThickness = 1.0f;
		inline float FilledBoxWidthRatio = 0.3f; // Genişlik oranı (0.1-1.0)
		inline float FilledBoxHeightRatio = 0.8f; // Yükseklik oranı (0.1-1.0)

		inline float m_x = -18.53f;
		inline float m_y = -0.70f;
		inline float m_z = 5.24f;
		inline float m_pitch = -49.1f;
		inline float m_yaw = -103.2f;
		inline float m_roll = 93.1f;
		inline float m_scale = 1.28f;

		inline float ScaleX = 2.5f;
		inline float ScaleY = 2.5f;
		inline float ScaleZ = 2.5f;
		inline float OffsetX = 20.0f;
		inline float OffsetY = 0.0f;
		inline float OffsetZ = -5.0f;
		inline float WScaleX = 1.0f;
		inline float WScaleY = 1.0f;

		inline float WScaleZ = 1.0f;
		inline bool wallbangESP = false;
		inline float chamsAlpha = 1.0f;
		inline bool box = false;
		inline int visiblepreset = 0;
		inline int visiblepresetforself = 0;
		inline int invisiblepreset = 0;
		inline bool RadarMap = false;
		inline bool FresnelShi = false;
		inline bool viewangle = false;
		inline bool Radar = false;

		inline float Self_CenterEdgeR = 0.68f;
		inline float Self_CenterEdgeG = 0.63f;
		inline float Self_CenterEdgeB = 0.58f;

		inline float Self_InnerEdgeR = 0.00f;
		inline float Self_InnerEdgeG = 12.74f;
		inline float Self_InnerEdgeB = 13.64f;

		inline float Self_OuterEdgeR = 3.36f;
		inline float Self_OuterEdgeG = 0.00f;
		inline float Self_OuterEdgeB = 0.00f;


		inline float Enemy_CenterEdgeR = 0.68f;
		inline float Enemy_CenterEdgeG = 0.63f;
		inline float Enemy_CenterEdgeB = 0.58f;

		inline float Enemy_InnerEdgeR = 0.00f;
		inline float Enemy_InnerEdgeG = 12.74f;
		inline float Enemy_InnerEdgeB = 13.64f;

		inline float Enemy_OuterEdgeR = 3.36f;
		inline float Enemy_OuterEdgeG = 0.00f;
		inline float Enemy_OuterEdgeB = 0.00f;

		inline float intensityvisibleoutline = 18.20f;

		inline bool playername = false;
		inline bool playerrank = false;
		inline bool CurrentAmmo = false;
		inline bool NIGGERS = false;
		inline int health_bar_style = 0;

		inline int self_galaxy_preset = 0;
		inline bool crystal_chams_enabled = false;
		inline int    crystal_chams_preset = 0;
		inline int crystal_enemy_preset = 0;

		inline float GlowVisible = 2.20f;
		inline float RefractionDepthBias = 0.09f;
		inline float OcclusionState = 1.0f;
		inline float OcclusionBehindWall = 0.61f;
		inline float RimPower = 3.52f;
		inline float RimMultiply = 5.68f;
		inline float BoundingBox = 1.0f;
		inline float AlphaDissolveOpacity = 4.08f;
		inline float DepthBias = -0.18f;
		inline float AlphaColorMult = 1.30f;
		inline float AlphaBasePower = 3.85f;
		inline float RimFresnel = 9.84;
		inline float InnerEdgeThickness = 10;
		inline float OuterEdgeThickness = 1.20f;
		inline float OcclusionDepth = 0.35f;

		inline bool minimap = false;
		inline bool hand_with_material = false;
		inline bool selfma = false;
		inline bool gun_with_material = false;
		inline int box_type = 1;
		inline bool weaponstate = false;
		inline bool weaponname = false;
		inline bool box2d = false;
		inline bool box3d = false;
		inline bool boxhealth = false;
		inline bool filled = false;
		inline bool filled2 = false;
		inline bool box3dd = false;

		inline bool headbox = false;
		inline bool skeleton = false;
		inline bool snapline = false;
		inline bool snapline1 = false;
		inline bool healthbar = false;
		inline bool booms = false;
		inline bool biims = false;
		inline bool Dropped = false;
		inline bool dstc = false;
		inline bool angle = false;

		inline bool mawmawmaw = false;
		inline bool mawmaw = false;
		inline bool HandChams = false;
		inline bool SkyBoxEnabled = false;
		inline bool SkyBoxCustomImage = true;
		inline bool WeaponChams = false;
		inline bool HandChamsCustom = false;
		inline bool skyboxenabledcustom = false;
		inline bool skyboxenabledcustom2 = false;
		inline bool HandChamsRGB = false;
		inline bool skyboxrgb = false;
		inline bool dormant = true;
		inline bool Hand_material = false;
		inline bool visiblecheck = false;
		inline bool abilitiesspike = false;
		inline bool SpikeLineUp = false;
		inline bool abilities = false;
		inline bool chams = false;
		inline bool chamsRGB = false;

		inline float time = 0.5f;

	}
	namespace enemyshit {
		inline float GlowVisible = 2.20f;
		inline float RefractionDepthBias = 0.09f;
		inline float OcclusionState = 1.0f;
		inline float OcclusionBehindWall = 0.61f;
		inline float RimPower = 3.52f;
		inline float RimMultiply = 5.68f;
		inline float BoundingBox = 1.0f;
		inline float AlphaDissolveOpacity = 4.08f;
		inline float DepthBias = -0.18f;
		inline float AlphaColorMult = 1.30f;
		inline float AlphaBasePower = 3.85f;
		inline float RimFresnel = 9.84;
		inline float InnerEdgeThickness = 10;
		inline float OuterEdgeThickness = 1.20f;
		inline float OcclusionDepth = 0.35f;

		inline float Enemy_CenterEdgeR = 0.68f;
		inline float Enemy_CenterEdgeG = 0.63f;
		inline float Enemy_CenterEdgeB = 0.58f;

		// ⚡ Inner (electric energy – blue)
		inline float Enemy_InnerEdgeR = 0.00f;
		inline float Enemy_InnerEdgeG = 12.74f;
		inline float Enemy_InnerEdgeB = 13.64f;

		// ✨ Outer (glow halo – pink / magenta)
		inline float Enemy_OuterEdgeR = 3.36f;
		inline float Enemy_OuterEdgeG = 0.00f;
		inline float Enemy_OuterEdgeB = 0.00f;

		// 🔮 Center (main nebula core – purple)
		inline float Self_CenterEdgeR = 0.68f;
		inline float Self_CenterEdgeG = 0.63f;
		inline float Self_CenterEdgeB = 0.58f;

		// ⚡ Inner (electric energy – blue)
		inline float Self_InnerEdgeR = 0.00f;
		inline float Self_InnerEdgeG = 12.74f;
		inline float Self_InnerEdgeB = 13.64f;

		// ✨ Outer (glow halo – pink / magenta)
		inline float Self_OuterEdgeR = 3.36f;
		inline float Self_OuterEdgeG = 0.00f;
		inline float Self_OuterEdgeB = 0.00f;


	}
	namespace aimbot {
		inline float spread_comp_strength = 1.0f;
		inline bool close_bone = false;
		inline std::vector<int> bone_priority = { 8, 6, 5, 3, 2 };
		inline bool aimbot = false;
		inline bool ShoTFired = false;
		inline bool resolver = false;
		inline bool AutoFire = false;
		inline bool smokeno = false;
		inline bool nospread = false;
		inline bool Prediction = false;
		inline float max_aim_distance = 100000.0f;
		inline bool BulletTrace = false;
		inline bool BulletTraceAntiAim = false;
		inline bool aimbot360 = false;
		inline bool ThruSmoke = false;
		inline bool nodelay = false;
		inline bool wallbang = false;
		inline bool silentmaw = false;
		inline bool triggerbot = false;
		inline bool triggermaw = false;
		inline bool AutoShoot = false;
		inline bool vish_check = 1;
		inline bool recoilcrosshair = 0;
		inline bool recoil_control = 0;
		inline bool draw_fov = 0;
		inline bool draw_fovrainbow = 0;
		inline float aim_smooth = 5.0f;
		inline float spreadsmooth = 0.01f;
		inline float AutoshootFloat = 10.0f;
		inline float CooldownChecks = 0.10f;
		inline float SpreadReady = 25.0f;
		inline float fovtrigger = 5.0f;
		inline float bossmaw = 5.0f;
		inline float aim_fov = 70.f;
		inline int aim_bone = 0;
		inline int target_selection = 1;
		inline int aim_key = 0;
		inline int trigger_key = 0x78;
		inline int NIGGAMAW = 0x70;
	}
	namespace misc {
		inline bool hide_watermark = false;
		inline bool character_changer = false;
		inline bool character_changer_applied = false;
		bool edge_yaw = false;
		bool desync_enhancer = false;
		bool lby_breaker = false;
		bool custom_jitter = false;
		bool slow_spin = false;
		int selected_edge = 0;
		float jitter_speed = 2.0f;
		float spin_speed = 6.0f;
		float desync_intensity = 45.0f;
		bool initialized_aa = false;  // <-- ADD THIS LINE

		static float melee_text_pos_x = -12.59f;
		static float melee_text_pos_y = 1.40f;
		static float melee_text_pos_z = 11.54f;
		static float melee_text_rot_pitch = 10.1f;
		static float melee_text_rot_yaw = -98.2f;
		static float melee_text_rot_roll = -1.3f;
		static float melee_text_scale_x = 1.54f;
		static float melee_text_scale_y = 1.32f;
		static float melee_text_scale_z = 0.96f;


		static float vandal_text_pos_x = 0.0f;
		static float vandal_text_pos_y = 0.0f;
		static float vandal_text_pos_z = 0.0f;
		static float vandal_text_rot_pitch = 0.0f;
		static float vandal_text_rot_yaw = 0.0f;
		static float vandal_text_rot_roll = 0.0f;
		static float vandal_text_scale_x = 1.0f;
		static float vandal_text_scale_y = 1.0f;
		static float vandal_text_scale_z = 1.0f;

		inline float spectre_text_pos_x = 9.33333f;
		inline float spectre_text_pos_y = 0.666664f;
		inline float spectre_text_pos_z = -4.66666f;
		inline float spectre_text_rot_pitch = 0.0f;
		inline float spectre_text_rot_yaw = 90.3396f;
		inline float spectre_text_rot_roll = -88.9811;
		inline float spectre_text_scale_x = 0.909f;
		inline float spectre_text_scale_y = 1.484f;
		inline float spectre_text_scale_z = 1.371f;




		static float phantom_text_pos_x = -1.33333f;
		static float phantom_text_pos_y = -4.0f;
		static float phantom_text_pos_z = -3.5f;
		static float phantom_text_rot_pitch = 0.0f;
		static float phantom_text_rot_yaw = 90.6f;
		static float phantom_text_rot_roll = -88.1f;
		static float phantom_text_scale_x = 1.0f;
		static float phantom_text_scale_y = 1.30f;
		static float phantom_text_scale_z = 1.62f;

		inline float text_color_r = 1.5f;
		inline float text_color_g = 1.5f;
		inline float text_color_b = 1.5f;
		inline float text_emissive_intensity = 10.0f;


		inline float frenzy_text_pos_x = -8.04f;
		inline     float frenzy_text_pos_y = -0.70f;
		inline     float frenzy_text_pos_z = -0.60f;
		inline     float frenzy_text_rot_pitch = 0.0f;
		inline     float frenzy_text_rot_yaw = 89.4f;
		inline     float frenzy_text_rot_roll = -88.1f;
		inline float frenzy_text_scale_x = 1.0f;
		inline float frenzy_text_scale_y = 1.0f;
		inline    float frenzy_text_scale_z = 1.23f;
		inline    float ghost_text_pos_x = -0.70f;
		inline    float ghost_text_pos_y = 1.75f;
		inline    float ghost_text_pos_z = -2.45f;
		inline float ghost_text_rot_pitch = 0.0f;
		inline    float ghost_text_rot_yaw = 88.1f;
		inline float ghost_text_rot_roll = -88.1f;
		inline float ghost_text_scale_x = 1.45f;
		inline float ghost_text_scale_y = 1.0f;
		inline float ghost_text_scale_z = 1.25f;

		inline float spectre_scale_x = 1.5f;
		inline float spectre_scale_y = 1.5f;
		inline float spectre_scale_z = 1.5f;
		inline float spectre_rot_pitch = 0.0f;
		inline float spectre_rot_yaw = 90.0f;
		inline float spectre_rot_roll = -90.0f;
		inline float spectre_pos_x = -0.9434f;
		inline float spectre_pos_y = 0.943392f;
		inline float spectre_pos_z = -2.83019f;

		inline float text_rot_pitch = 0.0f;
		inline float text_rot_yaw = 90.3396f;
		inline float text_rot_roll = -88.9811;

		inline float text_scale_x = 0.909f;
		inline float text_scale_y = 1.484f;
		inline float text_scale_z = 1.371f;


		inline float text_pos_x = 2.0f;
		inline float text_pos_y = 0.0f;
		inline float text_pos_z = -3.33333;

		flinearcolor FogColor = flinearcolor(1.0f, 0.0f, 0.0f, 1.0f);  // Red
		inline std::unordered_map<std::string, void*> text_model_meshes;
		flinearcolor VolumetricAlbedo = flinearcolor(1.0f, 1.0f, 1.0f, 1.0f); // White
		inline void* text_model_proc_mesh = nullptr;
		inline float text_model_pos_x = -43.5f;  // Forward/Backward (negative = back)
		inline float text_model_pos_y = 1.3f;    // Left/Right
		inline float text_model_pos_z = -5.0f;   // Up/Down
		inline float FogDensity = 0.1f;
		inline float FogHeightFalloff = 0.2f;

		inline bool customcharacters = false;
		inline bool Apocalpyse = false;
		inline float FogStartDistance = 0.0f;
		inline float FogCutoffDistance = 10000.0f;
		inline float FogMaxOpacity = 1.0f;
		inline float FogInscatteringR = 1.0f;
		inline float FogInscatteringG = 1.0f;
		inline float FogInscatteringB = 1.0f;
		inline bool bEnableVolumetricFog = false;
		inline float VolumetricFogDistance = 5000.0f;


		inline int KillSoundEffectOption = 1;

		inline bool Light = false;
		inline bool SAMPO = false;
		inline bool Lightning = false;

		inline bool apply_weapon_texture = true;
		inline bool Fog = false;
		inline bool Lighting = false;
		inline bool remove_sight = true;
		inline bool prediction_breaker = false;
		inline float breaker_intensity = 2.0f;
		inline bool widearms_revert = false;
		inline bool wukong = false;
		inline float CloudSpeed = 1.0f;
		inline float StarsBrightness = 1.0f;
		inline float CloudOpacity = 1.0f;
		inline float SkyNoisePower2 = 1.0f;
		inline float SkyNoisePower1 = 1.0f;
		inline float SkySunRadius = 1.0f;
		inline float SkyHorizonFalloff = 1.0f;
		inline float SkySunBrightness = 1.0f;
		inline float SkySunHeight = 1.0f;
		inline float SkyLightDirection = 1.0f;
		inline int sky_overall_preset = 0;
		inline int sun_color_preset = 0;
		inline int skybox_preset_index = 0;
		static flinearcolor Cloud = { 1.0f, 1.0f, 1.0f, 1.0f };
		static flinearcolor Overall = { 1.0f, 1.0f, 1.0f, 1.0f };
		static flinearcolor Zenith = { 1.0f, 1.0f, 1.0f, 1.0f };
		static flinearcolor Horizon = { 1.0f, 1.0f, 1.0f, 1.0f };
		static flinearcolor SkySunColor = { 1.0f, 1.0f, 1.0f, 1.0f };
		inline float Self_CenterEdgeR = 0.53f;
		inline float Self_CenterEdgeG = 0.27f;
		inline float Self_CenterEdgeB = 0.47f;
		inline float Self_InnerEdgeR = 0.0f;
		inline float Self_InnerEdgeG = 0.27f;
		inline float Self_InnerEdgeB = 1.0f;
		inline float Self_OuterEdgeR = 0.04f;
		inline float Self_OuterEdgeG = 0.23f;
		inline float Self_OuterEdgeB = 0.21f;
		inline float RefractionDepthBias = 0.0f;
		inline float OcclusionState = 1.0f;
		inline float OcclusionBehindWall = 1.0f;
		inline float RimPower = 1.0f;
		inline float RimMultiply = 1.0f;
		inline float BoundingBox = -50.0f;
		inline float AlphaDissolveOpacity = 0.207412f;
		inline float DepthBias = -0.1f;
		inline float AlphaColorMult = 0.0f;
		inline float AlphaBasePower = 0.1f;
		inline float RimFresnel = 1.0f;
		inline float InnerEdgeThickness = 0.1f;
		inline float OuterEdgeThickness = 0.37f;
		inline bool SaveGhostPosition = false;
		inline bool leftHanded = false;
		inline bool spected = false;
		inline bool Instalock = false;
		inline bool spin_paused = false;
		inline bool waiting_for_kill = false;
		inline DWORD resume_spin_time = 0;
		inline bool skiptutorial = false;
		inline float GlowIntensity = 1.0f;
		inline bool nightmode = false;
		inline bool circlingPaimon = false;
		static float FOVCHANGABLE = 103.0f;
		static float g_aa_sine_speed = 2.0f;
		static float g_aa_chaos_strength = 30.0f;
		static float g_aa_spira_speed = 1.5f;
		std::wstring chatMessage = L"RyzerINC";
		inline int MenuKey = VK_INSERT;
		inline float FadeChamsGlow = 1.0f;
		inline bool finisher = false;
		inline bool antiafk = false;
		inline bool crosshairrainbow = false;
		inline bool onlylastkill = false;
		inline bool KillSound = false;
		inline bool KillMessage = false;
		inline bool Hat = false;
		inline bool HatSelf = false;
		inline bool AntiFlash = false;
		inline bool skin_changer = false;
		inline bool SpectatorView = false;
		inline bool skins_unlocked = false;
		inline bool antiaim = false;
		inline bool SetCamera = false;
		inline bool force_resume_spin = false;
		inline int antiaimpitch = 0;
		inline int antiaimyaw = 0;
		inline bool widearms = false;
		inline bool GunCustome = false;
		inline bool enabled = false;
		inline int pitchmode = 0;
		inline int visiblepreset = 0;
		inline int invisiblepreset = 0;
		inline int baseyaw = 0;
		inline float offset = 118;
		inline int yawmodifier = 0;
		inline float modifieroffset = 139;
		inline float spinspeed = 8.f;
		inline int dir_switch_ms = 700;
		inline int materials = 0;
		inline int widearmsselec = 1;
		inline int Outlines = 1;
		inline float cachepitch = 0.0f;
		inline float cachebaseyaw = 0.0f;
		inline float cacheoffset = 0.0f;
		inline bool mamaww = false;
		inline bool third_person = false;
		inline bool Fly = false;
		inline bool Holdthird = false;
		inline bool Holdthird1 = false;
		inline bool crouch = false;
		inline bool spinbot = false;
		inline bool team_check = true;
		inline bool bunnyhop = false;
		inline bool CSGOSEN = false;
		inline bool CSGOText = false;
		inline bool Ishowspeed = false;
		inline bool Uninject = false;
		inline bool nigaga = false;
		inline bool Camera = false;
		inline float widearmsfloat = 3;
		inline float third_person_float = 1;
		inline float spinbot_speed_nigger = 15.0f;
		inline bool skinchangor = false;
		inline bool fovchangor = false;
		inline bool big_gun = false;
		inline bool big_gun3p = false;
		inline bool dropped = false;
		inline bool WireframeSelf = false;
		inline bool AspectRatio = false;
		float aspectvalue = 1;
		float GlowVisible = 10.f;
		float GlowInvisible = 10.f;
		float CenterEdgeR_Visible = 0.0f;
		float CenterEdgeG_Visible = 0.01f;
		float CenterEdgeB_Visible = 0.0f;
		float InnerEdgeR_Visible = 0.0f;
		float InnerEdgeG_Visible = 0.1f;
		float InnerEdgeB_Visible = 0.0f;
		float OuterEdgeR_Visible = 0.0f;
		float OuterEdgeG_Visible = 1.0f;
		float OuterEdgeB_Visible = 0.0f;
		float CenterEdgeR_Visible2 = 0.0f;
		float CenterEdgeG_Visible2 = 0.01f;
		float CenterEdgeB_Visible2 = 0.0f;
		float InnerEdgeR_Visible2 = 0.0f;
		float InnerEdgeG_Visible2 = 0.1f;
		float InnerEdgeB_Visible2 = 0.0f;
		float OuterEdgeR_Visible2 = 0.0f;
		float OuterEdgeG_Visible2 = 1.0f;
		float OuterEdgeB_Visible2 = 0.0f;
		float CenterEdgeR_Visible2galaxychams = 0.05f;
		float CenterEdgeG_Visible2galaxychams = 0.10f;
		float CenterEdgeB_Visible2galaxychams = 0.35f;
		float InnerEdgeR_Visible2galaxychams = 0.10f;
		float InnerEdgeG_Visible2galaxychams = 0.15f;
		float InnerEdgeB_Visible2galaxychams = 0.60f;
		float OuterEdgeR_Visible2galaxychams = 0.30f;
		float OuterEdgeG_Visible2galaxychams = 0.50f;
		float OuterEdgeB_Visible2galaxychams = 1.00f;
		float CenterEdgeR_Invisible = 0.01f;
		float CenterEdgeG_Invisible = 0.0f;
		float CenterEdgeB_Invisible = 0.0f;
		float InnerEdgeR_Invisible = 0.1f;
		float InnerEdgeG_Invisible = 0.0f;
		float InnerEdgeB_Invisible = 0.0f;
		float OuterEdgeR_Invisible = 1.0f;
		float OuterEdgeG_Invisible = 0.0f;
		float OuterEdgeB_Invisible = 0.0f;
		float GlowV = 1;
		float GlowI = 1;
		float Red = 1;
		static float FOV = 1;
		static float DesiredFOV = 1;
		static float OrthoWidth = 1;
		static float OrthoNearClipPlane = 1;
		static float OrthoFarClipPlane = 1;
		static float PerspectiveNearClipPlane = 1;
		static float AspectRatio2 = 1;
		float Green = 1;
		float FresnelGlow = 1;
		float Blue = 1;
		float HandChamsGlow = 1;
		float rim_power = 0;
		float Rim_Multiply = 0;
		float OuterEdgeThickness2 = 0;
		float sRed = 1;
		float sGreen = 1;
		float sBlue = 1;
		inline int niggamawee = 0;
		inline int outline = 0;
		inline bool fresnel = false;
		inline bool fresnelself = false;
		inline bool FadeChams = false;
		inline bool SelfFadeChams = false;
		inline bool GalaxyHand = false;
		inline bool NebulaChamsHand = false;
		inline bool NebulaChams3p = false;
		inline bool NebulaChamsEnemy = false;
		inline bool GalaxySelf = false;
		inline bool CoolChams = false;
		inline bool CoolChams3p = false;
		inline bool GalaxyEnemy = false;
		inline bool fresnelrainbow = false;
		inline bool FresnelHand = false;
		inline bool Fresnel3p = false;
		inline bool WireFrameEnemy = false;
		inline bool big_gun_3p = false;
		inline bool Spinbotserversided = false;
		inline bool third_person_2wireframe = false;
		inline float big_gun_float = 2.0f;
		inline float big_gun_float_3 = 4.0f;
		inline float fov_changer_float = 15.0f;
		inline float glow_float = 1.0f;
		inline bool MeshCrouchModifed = false;
	}
	namespace buddy {
		inline bool enabled = false;
		inline int index = 0;
	}
	namespace il {
		static bool init = false;

		inline bool enable = false;
		inline bool random_agent = false;
		inline int lock_agent = 0;
	}
}