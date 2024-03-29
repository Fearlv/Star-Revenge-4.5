#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"

#include "areas/2/custom.model.inc.h"

#include "levels/ttm/header.h"
#include "levels/rr/header.h"

extern u8 _ttm_segment_ESegmentRomStart[];
extern u8 _ttm_segment_ESegmentRomEnd[];

const LevelScript level_ttm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
	LOAD_RAW(0x0E, _ttm_segment_ESegmentRomStart, _ttm_segment_ESegmentRomEnd),
	LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom63438528_skybox_mio0SegmentRomStart, _SkyboxCustom63438528_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
	LOAD_RAW(12, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd),
	LOAD_MIO0(6, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
	LOAD_RAW(13, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	// Level Specific Models
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
	    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
	// Unspecified Models
	LOAD_MODEL_FROM_GEO(22,  warp_pipe_geo),
	LOAD_MODEL_FROM_GEO(23,  bubbly_tree_geo),
	LOAD_MODEL_FROM_GEO(24,  spiky_tree_geo),
	LOAD_MODEL_FROM_GEO(25,  snow_tree_geo),
	LOAD_MODEL_FROM_GEO(27,  palm_tree_geo),
	LOAD_MODEL_FROM_GEO(31,  metal_door_geo),
	LOAD_MODEL_FROM_GEO(32,  hazy_maze_door_geo),
	LOAD_MODEL_FROM_GEO(34,  castle_door_0_star_geo),
	LOAD_MODEL_FROM_GEO(35,  castle_door_1_star_geo),
	LOAD_MODEL_FROM_GEO(36,  castle_door_3_stars_geo),
	LOAD_MODEL_FROM_GEO(37,  key_door_geo),
	LOAD_MODEL_FROM_GEO(38,  castle_door_geo),
	LOAD_MODEL_FROM_GEO(12,  starspawn),
	LOAD_MODEL_FROM_GEO(13,  metalsign),
	LOAD_MODEL_FROM_GEO(14,  kedama_geo),
	// LOAD_MODEL_FROM_GEO(88, 0x0500c778),
	// LOAD_MODEL_FROM_DL(132, 0x08025f08, 4),
	// LOAD_MODEL_FROM_DL(158, 0x0302c8a0, 4),
	// LOAD_MODEL_FROM_DL(159, 0x0302bcd0, 4),
	// LOAD_MODEL_FROM_DL(161, 0x0301cb00, 4),
	// LOAD_MODEL_FROM_DL(164, 0x04032a18, 4),
	// LOAD_MODEL_FROM_DL(201, 0x080048e0, 4),
	// LOAD_MODEL_FROM_DL(218, 0x08024bb8, 4),
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_12),
	JUMP_LINK(script_func_global_18),
	JUMP_LINK(local_area_ttm_1_),
	JUMP_LINK(local_area_ttm_2_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_ttm_1_[] = {
	AREA(1, Geo_ttm_1_0x3b41700),
	TERRAIN(col_ttm_1_0xe094e38),
	SET_BACKGROUND_MUSIC(0, 51),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_ttm_1_),
	JUMP_LINK(local_warps_ttm_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_ttm_1_[] = {
	OBJECT_WITH_ACTS(0, -8508, -3657, 256, 0, 56, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(12, -9122, 2405, -1721, 0, 45, 0, 0x2000000,  bhvHiddenStar, 31),
	OBJECT_WITH_ACTS(122, -3720, 3794, 12970, 0, 0, 0, 0x3000000,  bhvStar, 31),
	OBJECT_WITH_ACTS(12, 6058, -2214, 201, 0, 119, 0, 0x4000000,  bhvFlipswitch_Panel_StarSpawn_MOP, 31),
	OBJECT_WITH_ACTS(217, -4386, -3513, -1960, 0, 0, 0, 0x0,  bhvPushableMetalBox, 1),
	OBJECT_WITH_ACTS(0, -4386, -3449, -1952, 0, -135, 0, 0x330000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 3220, -839, -11313, 0, -47, 0, 0x340000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 6841, 1965, -14450, 0, -22, 0, 0x1e0000,  bhvAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, 7083, 1945, -14997, 0, -22, 0, 0x14140000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(42, 10215, -2568, -3973, 0, 180, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, 7504, -2568, -350, 0, -90, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, 4456, -2568, 4232, 0, -32, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(140, -4060, -895, 9073, 0, 63, 0, 0x0,  bhvBlueCoinSwitch, 31),
	OBJECT_WITH_ACTS(118, -3496, -839, 9379, 0, 0, 0, 0x0,  bhvHiddenBlueCoin, 31),
	OBJECT_WITH_ACTS(118, -2708, -773, 9120, 0, 0, 0, 0x0,  bhvHiddenBlueCoin, 31),
	OBJECT_WITH_ACTS(118, -2093, -704, 8778, 0, 0, 0, 0x0,  bhvHiddenBlueCoin, 31),
	OBJECT_WITH_ACTS(118, -1354, -546, 8583, 0, 0, 0, 0x0,  bhvHiddenBlueCoin, 31),
	OBJECT_WITH_ACTS(118, -528, -389, 8976, 0, 0, 0, 0x0,  bhvHiddenBlueCoin, 31),
	OBJECT_WITH_ACTS(0, -4811, -3103, -1034, 0, 0, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(0, 1773, -1958, -953, 0, -73, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(0, 9903, 1096, -3635, 0, 58, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(0, 7737, -73, -10045, 0, 0, 0, 0x20000,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(0, -1398, 1096, -10833, 0, 0, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(0, -4029, -403, 6471, 0, 0, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(0, 2877, 1996, 11057, 0, 0, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(0, -5989, 1996, 16153, 0, 0, 0, 0x20000,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(0, 10310, 1846, 5473, 0, 0, 0, 0x110000,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(137, -861, 1835, 3174, 0, 0, 0, 0x2d0000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 7027, 1385, -3051, 0, 0, 0, 0x50000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2054, 2875, 15225, 30, 0, 30, 0x7080000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 5249, 1835, 1269, 0, 0, 0, 0x1f0000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 6905, 1600, -11581, 0, 0, 0, 0x120000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(0, -3984, -93, 1884, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 31),
        OBJECT_WITH_ACTS(0, -3984, -93, 1884, 0, 0, 0, 0x0,  id_bhvCustomSecrets, 31),
	OBJECT_WITH_ACTS(84, -6794, 2010, 593, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(84, 4488, 2010, -1092, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(84, -862, 1860, 6500, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(84, -3366, 3920, 14879, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(84, 5099, 2460, 8182, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(84, -4868, -2939, -2590, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(84, 7617, -2039, 1475, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(84, 2695, -389, -10499, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(0, 1519, 281, -729, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, -2155, -468, 5804, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, -7634, -3768, -234, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, 6860, 730, -3633, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, 9039, 1031, 4453, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, 2375, 1931, 9474, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, -5964, 1931, 11107, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(101, 7196, 197, -8007, 0, 0, 0, 0x0,  bhvScuttlebug, 31),
	OBJECT_WITH_ACTS(101, -149, -1818, -418, 0, 0, 0, 0x0,  bhvScuttlebug, 31),
	OBJECT_WITH_ACTS(101, 293, -468, 8923, 0, 0, 0, 0x0,  bhvScuttlebug, 31),
	OBJECT_WITH_ACTS(101, 8946, 1421, -510, 0, 0, 0, 0x0,  bhvScuttlebug, 31),
	OBJECT_WITH_ACTS(101, -10409, 881, -1633, 0, 0, 0, 0x0,  bhvScuttlebug, 31),
	OBJECT_WITH_ACTS(101, -34, -168, -11259, 0, 0, 0, 0x0,  bhvScuttlebug, 31),
	OBJECT_WITH_ACTS(101, 5885, 1031, 2619, 0, 0, 0, 0x0,  bhvScuttlebug, 31),
	OBJECT_WITH_ACTS(101, 408, 1931, 15783, 0, 0, 0, 0x0,  bhvScuttlebug, 31),
	OBJECT_WITH_ACTS(122, -4456, 369, 7585, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(122, 7956, 2170, 5774, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(122, -550, 3524, 12478, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(122, -5606, 3524, 13340, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(122, -844, 1720, 3124, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(122, -4819, -2929, 7, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(122, 7869, -2329, 3243, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(122, 5833, -2329, 5007, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(122, -10243, 820, 328, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(122, 784, -379, 320, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(220, 7276, 1823, -11768, 0, 0, 0, 0x10000,  bhvFlyGuy, 31),
	OBJECT_WITH_ACTS(220, 285, -791, 2631, 0, 0, 0, 0x10000,  bhvFlyGuy, 31),
	OBJECT_WITH_ACTS(124, 10116, 1421, -1268, 0, -114, 0, 0x4d0000,  bhvMessagePanel, 31),
	OBJECT_WITH_ACTS(124, -8537, -3918, -505, 0, 0, 0, 0x400000,  bhvMessagePanel, 31),
	OBJECT_WITH_ACTS(0, -8954, -3918, -457, 0, -38, 0, 0x14730000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, -9063, -3918, -314, 0, -38, 0, 0x14730000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, 10553, 1421, -1675, 0, -24, 0, 0x14870000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, 10485, 1421, -1511, 0, -24, 0, 0x14870000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, 10119, 1845, -1776, 0, -113, 0, 0x820000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(188, 2716, 1931, 12242, 0, 0, 0, 0x0,  bhvBobomb, 31),
	OBJECT_WITH_ACTS(188, -1313, 1931, 12196, 0, 0, 0, 0x0,  bhvBobomb, 31),
	OBJECT_WITH_ACTS(188, -1349, 1931, 14963, 0, 0, 0, 0x0,  bhvBobomb, 31),
	OBJECT_WITH_ACTS(188, -4667, 1931, 14887, 0, 0, 0, 0x0,  bhvBobomb, 31),
	OBJECT_WITH_ACTS(188, -4751, 1931, 12178, 0, 0, 0, 0x0,  bhvBobomb, 31),
	OBJECT_WITH_ACTS(188, -6018, 1931, 16166, 0, 0, 0, 0x0,  bhvBobomb, 31),
	OBJECT_WITH_ACTS(100, 4586, -1683, -753, 0, 0, 0, 0x0,  bhvSwoop, 31),
	OBJECT_WITH_ACTS(100, 1622, -1215, -954, 0, 0, 0, 0x0,  bhvSwoop, 31),
	OBJECT_WITH_ACTS(13, -7267, -3768, 390, 0, -90, 0, 0x390000,  bhvMessagePanel, 31),
	OBJECT_WITH_ACTS(195, -1735, 1031, -10364, 0, 41, 0, 0x550000,  bhvBobombBuddy, 31),
	OBJECT_WITH_ACTS(0, 32, 4, 354, 0, 0, 0, 100,  editor_Scroll_Texture, 31),
	RETURN()
};

const LevelScript local_warps_ttm_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(20, 36, 2, 10, 0),
	WARP_NODE(30, 36, 1, 30, 0),
	WARP_NODE(51, 36, 1, 52, 0),
	WARP_NODE(52, 36, 1, 52, 0),
	WARP_NODE(115, 11, 1, 120, 0),
	WARP_NODE(135, 13, 1, 10, 0),
	WARP_NODE(130, 36, 1, 130, 0),
	WARP_NODE(7, 9, 1, 10, 0),
	WARP_NODE(8, 9, 1, 10, 0),
	WARP_NODE(9, 9, 1, 10, 0),
	WARP_NODE(100, 9, 1, 10, 0),
	WARP_NODE(11, 9, 1, 10, 0),
	WARP_NODE(12, 9, 1, 10, 0),
	WARP_NODE(13, 9, 1, 10, 0),
	WARP_NODE(14, 9, 1, 10, 0),
	WARP_NODE(15, 9, 1, 10, 0),
	WARP_NODE(16, 9, 1, 10, 0),
	WARP_NODE(17, 9, 1, 10, 0),
	WARP_NODE(18, 9, 1, 10, 0),
	WARP_NODE(240, 6, 1, 121, 0),
	WARP_NODE(241, 6, 1, 122, 0),
	RETURN()
};

const LevelScript local_area_ttm_2_[] = {
	AREA(2, Geo_ttm_2_0x3b418f0),
	TERRAIN(col_ttm_2_0xe0ea830),
	SET_BACKGROUND_MUSIC(0, 52),
	TERRAIN_TYPE(4),
	JUMP_LINK(local_objects_ttm_2_),
	JUMP_LINK(local_warps_ttm_2_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_ttm_2_[] = {
	OBJECT_WITH_ACTS(0, -2507, -2403, -6, 0, -90, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, -1984, -2675, 6, 0, 0, 0, 0x14370000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, 4048, -2700, 8, 0, 180, 0, 0x3d0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, -4048, 1889, 1, 0, 214, 0, 0x3e0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 4057, 1625, 0, 0, 0, 0, 0x10000,  bhvMrI, 31),
	OBJECT_WITH_ACTS(123, -4045, -2677, -7, 0, 0, 0, 0x460000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(123, 3744, 533, -741, 0, 0, 0, 0x320000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(212, -4044, 2663, 1504, 0, 0, 0, 0x0,  bhv1Up, 31),
	OBJECT_WITH_ACTS(14, -5311, -2700, -168, 0, 0, 0, 0x510000,  bhvBobombBuddy, 31),
	OBJECT_WITH_ACTS(180, -2989, -368, 1063, 0, 0, 0, 0x0,  bhvFireSpitter, 31),
	OBJECT_WITH_ACTS(180, -4764, -1418, -11, 0, 0, 0, 0x0,  bhvFireSpitter, 31),
	OBJECT_WITH_ACTS(180, -3224, 1131, 8, 0, 0, 0, 0x0,  bhvFireSpitter, 31),
	OBJECT_WITH_ACTS(180, 4050, -2131, 994, 0, 0, 0, 0x0,  bhvFireSpitter, 31),
	OBJECT_WITH_ACTS(180, 4845, -1325, -811, 0, 0, 0, 0x0,  bhvFireSpitter, 31),
	OBJECT_WITH_ACTS(180, 3285, 592, 282, 0, 0, 0, 0x0,  bhvFireSpitter, 31),
	OBJECT_WITH_ACTS(0, 4051, -2700, -986, 0, 0, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(0, -4701, -2700, 4, 0, 90, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(192, -4836, -450, 818, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, -4294, 1049, -280, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 1921, -2700, 2094, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 6153, -2700, -2089, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(206, 4046, -764, 39, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(0, -4050, -2645, 1510, 0, 0, 0, 0x0,  bhvMrI, 31),
	OBJECT_WITH_ACTS(0, -4043, -2645, -1495, 0, 0, 0, 0x0,  bhvMrI, 31),
	OBJECT_WITH_ACTS(122, 3319, 1746, 0, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(122, 4798, 1746, 0, 0, 0, 0, 0x0,  bhvSnufit, 31),
	OBJECT_WITH_ACTS(137, 4056, 1980, 756, 0, 0, 0, 0x40000,  bhvExclamationBox, 31),
	RETURN()
};

const LevelScript local_warps_ttm_2_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(55, 36, 1, 30, 0),
	WARP_NODE(61, 36, 2, 62, 0),
	WARP_NODE(62, 36, 2, 61, 0),
	WARP_NODE(3, 36, 1, 10, 0),
	WARP_NODE(4, 36, 1, 10, 0),
	WARP_NODE(5, 9, 1, 10, 0),
	WARP_NODE(6, 9, 1, 10, 0),
	WARP_NODE(7, 9, 1, 10, 0),
	WARP_NODE(8, 9, 1, 10, 0),
	WARP_NODE(9, 9, 1, 10, 0),
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 9, 1, 10, 0),
	WARP_NODE(12, 9, 1, 10, 0),
	WARP_NODE(13, 9, 1, 10, 0),
	WARP_NODE(240, 6, 1, 121, 0),
	WARP_NODE(241, 6, 1, 122, 0),
	RETURN()
};