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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_wf_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
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
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(13, kedama_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x2d81700),
TERRAIN(col_wf_1_0xe0ee290),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,-7060,-1125,5989,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(13,-7543,434,-866,0,-154,0,0x240000, bhvBobombBuddy,1),
OBJECT_WITH_ACTS(122,2065,-546,6628,0,180,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-6100,-1843,-1844,0,0,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,9767,2322,8854,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-8166,876,-580,0,0,0,0x0, bhvHiddenStar,1),
OBJECT_WITH_ACTS(194,-1135,-2031,5360,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(0,7124,86,-175,0,0,0,0x0, bhvHiddenStarTrigger,1),
OBJECT_WITH_ACTS(100,-4291,-2276,5527,0,52,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,1989,-2276,5230,0,180,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-741,-2276,-2981,0,-90,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,7939,-2276,9430,0,126,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-5223,-2276,10326,0,48,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(123,-903,-1296,-1757,0,0,0,0x320000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(137,3717,-895,-11990,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(123,8705,-211,7995,0,0,0,0x8c0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,10764,-848,6723,0,0,0,0x460000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,-1710,-1296,4450,0,0,0,0x320000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(212,-1047,-1212,-8978,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(201,-2188,1552,-9856,0,-90,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(37,11047,-205,-7523,0,-90,0,0x2410000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,11047,-205,-7373,0,90,0,0x2410000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(137,11156,258,-2295,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,3839,-25,-7330,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(13,7138,3,-512,0,-105,0,0x270000, bhvBobombBuddy,62),
OBJECT_WITH_ACTS(13,-7543,434,-866,0,-154,0,0x280000, bhvBobombBuddy,62),
OBJECT_WITH_ACTS(0,-8326,-1645,5894,0,0,0,0x140a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-8326,-1645,6110,0,0,0,0x140a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-10772,-2285,-6802,0,0,0,0x14280000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-10981,-2285,-6802,0,0,0,0x14280000, bhvWarp,31),
OBJECT_WITH_ACTS(0,10623,237,-7451,0,90,0,0x7c0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-10889,-1868,-6082,0,180,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-10889,-1858,-6082,0,0,0,0x2d0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(124,-8016,-1645,5641,0,90,0,0x200000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-10539,-2285,-6490,0,0,0,0x2b0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,10946,-205,-7214,0,-90,0,0x330000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-7280,-1005,10251,0,90,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-5398,-1052,10776,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-5198,-852,10776,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4998,-652,10776,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4798,-452,10776,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4598,-252,10776,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4398,-52,10776,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4198,148,10776,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3998,348,10776,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3798,548,10776,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3598,548,10776,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(146,-1925,435,11951,-90,90,0,0x32820000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,2278,426,10849,-90,180,0,0x32820000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,1225,430,6695,-90,-90,0,0x32820000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-2943,428,7821,-90,0,0,0x32820000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,7136,-628,-4676,-90,-17,0,0x5a960000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-3453,6,-1311,-90,180,0,0x50dc0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,418,-515,6508,-90,142,0,0x78f00000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(152,10776,-704,5167,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,10776,-704,5687,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,8204,-840,3375,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(137,6932,-935,9127,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-6725,-1328,-6326,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-9280,1071,-8249,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4733,-848,-11128,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2576,112,-6808,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3128,-1808,-2972,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2492,-528,-10330,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2091,431,-8893,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-8011,-528,-8250,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,1756,-5,-3300,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1402,-636,3450,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9358,-2164,-2015,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,10838,-84,-9706,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4096,-1524,-4088,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,7796,-2164,7349,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-361,-2164,12846,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,7729,-2164,-11161,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,11645,-2228,1336,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3826,-2164,-7928,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7561,-3124,-10572,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5608,-3124,-4089,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(188,-3507,-1005,-5229,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-6333,-1485,-5186,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-5441,594,-8497,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-6937,-685,-8228,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-5413,-45,-9976,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-3179,594,-7930,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-3133,-1965,-2981,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-6642,-1645,7305,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-944,-2285,4616,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,6361,-2285,-2825,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3827,-2285,-6427,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,7940,-2285,4291,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4830,-2285,10327,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,10086,-205,-5859,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,10336,-205,-8887,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-5080,-2285,-1796,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(100,-1098,-2285,-3373,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,1590,-2285,-1932,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-3264,-2285,5403,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,1156,-2285,5574,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-5122,-2285,8984,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-4661,-2285,10101,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-1521,-2285,-8040,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,6188,-2285,-1966,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,7784,-2285,5781,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,7868,-2285,8363,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-6885,-2285,-1148,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,7834,-2285,-356,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(0,-4991,-2221,11973,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,6619,-2285,11923,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,11457,-2243,6151,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,10055,-2221,-1978,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4922,-2285,-12536,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,-9800,-2285,-1597,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,3194,-2230,12691,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,1516,559,11114,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-394,-2285,-11231,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-11127,-2285,-3917,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(220,-7441,-362,10621,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,2763,-2091,312,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4802,-2091,2313,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7697,-569,-5515,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,9575,-11,-7459,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1149,-2091,6119,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6273,-551,3442,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,9747,707,6047,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5617,-2091,2320,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,9727,-811,-2838,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8328,-171,-4060,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(195,-6030,-1645,5172,0,0,0,0x2a0000, bhvBobombBuddy,1),
OBJECT_WITH_ACTS(223,3920,-106,-11424,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,4502,-748,11396,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(140,-7996,-2285,-90,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-5129,-2285,-1448,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-5119,-2285,-312,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-5702,-2285,390,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-6844,-2285,340,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,-10892,-1871,-6087,0,0,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,10620,216,-7443,0,-90,0,0x3c0000, bhvSpinAirborneWarp,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,24,0),
WARP_NODE(60,24,1,60,0),
WARP_NODE(65,7,1,10,0),
WARP_NODE(40,5,1,10,0),
WARP_NODE(45,24,1,45,0),
WARP_NODE(240,6,1,21,0),
WARP_NODE(241,6,1,22,0),
WARP_NODE(124,24,1,124,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
