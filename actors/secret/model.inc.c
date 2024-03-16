#include "geo_header.h"

Lights1 secret_Mat1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 secret_Mat0_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx secret__1_ci4_aligner[] = {gsSPEndDisplayList()};
u8 secret__1_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
	0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x66, 
	0x66, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x66, 
	0x66, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 
	0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 
	0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 
	0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 
	0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x66, 
	0x66, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x66, 
	0x66, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
	0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx secret__1_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 secret__1_ci4_pal_rgba16[] = {
	0x6b, 0x01, 0x94, 0x41, 0xb5, 0x01, 0xcd, 0xc1, 
	0xde, 0x41, 0xee, 0xc1, 0xf7, 0x03, 0xf7, 0x09, 
	
};

Gfx secret__0_ci4_aligner[] = {gsSPEndDisplayList()};
u8 secret__0_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
	0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x66, 
	0x66, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x66, 
	0x66, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 
	0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 
	0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 
	0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 
	0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x66, 
	0x66, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x66, 
	0x66, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x00, 
	0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
	0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx secret__0_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 secret__0_ci4_pal_rgba16[] = {
	0x01, 0xeb, 0x02, 0x75, 0x02, 0xbd, 0x13, 0x3d, 
	0x23, 0xbd, 0x3b, 0xfd, 0x4c, 0x7d, 0x64, 0xbd, 
	
};

Vtx secret_node_mesh_layer_1_vtx_0[60] = {
	{{ {7, 15, 0}, 0, {-486, 1467}, {2, 55, 115, 255} }},
	{{ {0, 5, 5}, 0, {-538, 1395}, {2, 55, 115, 255} }},
	{{ {26, 14, 0}, 0, {-347, 1458}, {2, 55, 115, 255} }},
	{{ {-7, 15, 0}, 0, {-590, 1467}, {255, 35, 134, 255} }},
	{{ {0, 5, -3}, 0, {-538, 1395}, {255, 35, 134, 255} }},
	{{ {-26, 14, 0}, 0, {-729, 1458}, {255, 35, 134, 255} }},
	{{ {0, 5, -3}, 0, {-538, 1395}, {219, 10, 135, 255} }},
	{{ {-16, -16, 0}, 0, {-656, 1234}, {219, 10, 135, 255} }},
	{{ {-11, 1, 0}, 0, {-622, 1368}, {219, 10, 135, 255} }},
	{{ {26, 14, 0}, 0, {-347, 1458}, {23, 229, 134, 255} }},
	{{ {11, 1, 0}, 0, {-454, 1368}, {23, 229, 134, 255} }},
	{{ {0, 5, -3}, 0, {-538, 1395}, {23, 229, 134, 255} }},
	{{ {-26, 14, 0}, 0, {-729, 1458}, {233, 229, 134, 255} }},
	{{ {0, 5, -3}, 0, {-538, 1395}, {233, 229, 134, 255} }},
	{{ {-11, 1, 0}, 0, {-622, 1368}, {233, 229, 134, 255} }},
	{{ {0, 5, -3}, 0, {-538, 1395}, {236, 223, 135, 255} }},
	{{ {16, -16, 0}, 0, {-420, 1234}, {236, 223, 135, 255} }},
	{{ {0, -6, 0}, 0, {-538, 1307}, {236, 223, 135, 255} }},
	{{ {0, 33, 0}, 0, {-538, 1597}, {223, 13, 134, 255} }},
	{{ {0, 5, -3}, 0, {-538, 1395}, {223, 13, 134, 255} }},
	{{ {-7, 15, 0}, 0, {-590, 1467}, {223, 13, 134, 255} }},
	{{ {0, 33, 0}, 0, {-538, 1597}, {33, 13, 134, 255} }},
	{{ {7, 15, 0}, 0, {-486, 1467}, {33, 13, 134, 255} }},
	{{ {0, 5, -3}, 0, {-538, 1395}, {33, 13, 134, 255} }},
	{{ {7, 15, 0}, 0, {-486, 1467}, {1, 35, 134, 255} }},
	{{ {26, 14, 0}, 0, {-347, 1458}, {1, 35, 134, 255} }},
	{{ {0, 5, -3}, 0, {-538, 1395}, {1, 35, 134, 255} }},
	{{ {0, 5, -3}, 0, {-538, 1395}, {20, 223, 135, 255} }},
	{{ {0, -6, 0}, 0, {-538, 1307}, {20, 223, 135, 255} }},
	{{ {-16, -16, 0}, 0, {-656, 1234}, {20, 223, 135, 255} }},
	{{ {0, 5, -3}, 0, {-538, 1395}, {37, 10, 135, 255} }},
	{{ {11, 1, 0}, 0, {-454, 1368}, {37, 10, 135, 255} }},
	{{ {16, -16, 0}, 0, {-420, 1234}, {37, 10, 135, 255} }},
	{{ {0, 5, 5}, 0, {-538, 1395}, {57, 16, 112, 255} }},
	{{ {16, -16, 0}, 0, {-420, 1234}, {57, 16, 112, 255} }},
	{{ {11, 1, 0}, 0, {-454, 1368}, {57, 16, 112, 255} }},
	{{ {-26, 14, 0}, 0, {-729, 1458}, {220, 214, 114, 255} }},
	{{ {-11, 1, 0}, 0, {-622, 1368}, {220, 214, 114, 255} }},
	{{ {0, 5, 5}, 0, {-538, 1395}, {220, 214, 114, 255} }},
	{{ {26, 14, 0}, 0, {-347, 1458}, {36, 214, 114, 255} }},
	{{ {0, 5, 5}, 0, {-538, 1395}, {36, 214, 114, 255} }},
	{{ {11, 1, 0}, 0, {-454, 1368}, {36, 214, 114, 255} }},
	{{ {0, 5, 5}, 0, {-538, 1395}, {32, 205, 112, 255} }},
	{{ {-16, -16, 0}, 0, {-656, 1234}, {32, 205, 112, 255} }},
	{{ {0, -6, 0}, 0, {-538, 1307}, {32, 205, 112, 255} }},
	{{ {-7, 15, 0}, 0, {-590, 1467}, {254, 55, 115, 255} }},
	{{ {-26, 14, 0}, 0, {-729, 1458}, {254, 55, 115, 255} }},
	{{ {0, 5, 5}, 0, {-538, 1395}, {254, 55, 115, 255} }},
	{{ {0, 33, 0}, 0, {-538, 1597}, {204, 20, 114, 255} }},
	{{ {-7, 15, 0}, 0, {-590, 1467}, {204, 20, 114, 255} }},
	{{ {0, 5, 5}, 0, {-538, 1395}, {204, 20, 114, 255} }},
	{{ {0, 5, 5}, 0, {-538, 1395}, {224, 205, 112, 255} }},
	{{ {0, -6, 0}, 0, {-538, 1307}, {224, 205, 112, 255} }},
	{{ {16, -16, 0}, 0, {-420, 1234}, {224, 205, 112, 255} }},
	{{ {0, 5, 5}, 0, {-538, 1395}, {199, 16, 112, 255} }},
	{{ {-11, 1, 0}, 0, {-622, 1368}, {199, 16, 112, 255} }},
	{{ {-16, -16, 0}, 0, {-656, 1234}, {199, 16, 112, 255} }},
	{{ {0, 33, 0}, 0, {-538, 1597}, {52, 20, 114, 255} }},
	{{ {0, 5, 5}, 0, {-538, 1395}, {52, 20, 114, 255} }},
	{{ {7, 15, 0}, 0, {-486, 1467}, {52, 20, 114, 255} }},
};

Gfx secret_node_mesh_layer_1_tri_0[] = {
	gsSPVertex(secret_node_mesh_layer_1_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_0 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_0 + 30, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_0 + 45, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPEndDisplayList(),
};

Vtx secret_node_mesh_layer_1_vtx_1[240] = {
	{{ {18, 31, 0}, 0, {-403, 1583}, {87, 34, 86, 255} }},
	{{ {0, 64, 5}, 0, {-538, 1828}, {87, 34, 86, 255} }},
	{{ {15, 26, 5}, 0, {-427, 1549}, {87, 34, 86, 255} }},
	{{ {0, 64, 5}, 0, {-538, 1828}, {86, 33, 88, 255} }},
	{{ {18, 31, 0}, 0, {-403, 1583}, {86, 33, 88, 255} }},
	{{ {0, 77, 0}, 0, {-538, 1921}, {86, 33, 88, 255} }},
	{{ {-27, -31, 0}, 0, {-737, 1124}, {94, 232, 83, 255} }},
	{{ {-24, -2, 5}, 0, {-717, 1339}, {94, 232, 83, 255} }},
	{{ {-34, -41, 5}, 0, {-790, 1051}, {94, 232, 83, 255} }},
	{{ {-24, -2, 5}, 0, {-717, 1339}, {93, 232, 83, 255} }},
	{{ {-27, -31, 0}, 0, {-737, 1124}, {93, 232, 83, 255} }},
	{{ {-19, 0, 0}, 0, {-680, 1351}, {93, 232, 83, 255} }},
	{{ {0, -25, 0}, 0, {-538, 1168}, {49, 178, 87, 255} }},
	{{ {-34, -41, 5}, 0, {-790, 1051}, {49, 178, 87, 255} }},
	{{ {-41, -51, 0}, 0, {-845, 977}, {49, 178, 87, 255} }},
	{{ {-34, -41, 5}, 0, {-790, 1051}, {48, 181, 90, 255} }},
	{{ {0, -25, 0}, 0, {-538, 1168}, {48, 181, 90, 255} }},
	{{ {0, -19, 5}, 0, {-538, 1208}, {48, 181, 90, 255} }},
	{{ {27, -31, 0}, 0, {-339, 1124}, {51, 79, 86, 255} }},
	{{ {0, -19, 5}, 0, {-538, 1208}, {51, 79, 86, 255} }},
	{{ {34, -41, 5}, 0, {-286, 1051}, {51, 79, 86, 255} }},
	{{ {0, -19, 5}, 0, {-538, 1208}, {52, 82, 82, 255} }},
	{{ {27, -31, 0}, 0, {-339, 1124}, {52, 82, 82, 255} }},
	{{ {0, -14, 0}, 0, {-538, 1248}, {52, 82, 82, 255} }},
	{{ {0, -19, 5}, 0, {-538, 1208}, {205, 79, 86, 255} }},
	{{ {-27, -31, 0}, 0, {-737, 1124}, {205, 79, 86, 255} }},
	{{ {-34, -41, 5}, 0, {-790, 1051}, {205, 79, 86, 255} }},
	{{ {-27, -31, 0}, 0, {-737, 1124}, {204, 82, 82, 255} }},
	{{ {0, -19, 5}, 0, {-538, 1208}, {204, 82, 82, 255} }},
	{{ {0, -14, 0}, 0, {-538, 1248}, {204, 82, 82, 255} }},
	{{ {34, -41, 5}, 0, {-286, 1051}, {207, 178, 87, 255} }},
	{{ {0, -25, 0}, 0, {-538, 1168}, {207, 178, 87, 255} }},
	{{ {41, -51, 0}, 0, {-231, 977}, {207, 178, 87, 255} }},
	{{ {0, -25, 0}, 0, {-538, 1168}, {208, 181, 90, 255} }},
	{{ {34, -41, 5}, 0, {-286, 1051}, {208, 181, 90, 255} }},
	{{ {0, -19, 5}, 0, {-538, 1208}, {208, 181, 90, 255} }},
	{{ {-34, -41, 5}, 0, {-790, 1051}, {163, 23, 84, 255} }},
	{{ {-29, -3, 0}, 0, {-756, 1326}, {163, 23, 84, 255} }},
	{{ {-41, -51, 0}, 0, {-845, 977}, {163, 23, 84, 255} }},
	{{ {-29, -3, 0}, 0, {-756, 1326}, {165, 23, 86, 255} }},
	{{ {-34, -41, 5}, 0, {-790, 1051}, {165, 23, 86, 255} }},
	{{ {-24, -2, 5}, 0, {-717, 1339}, {165, 23, 86, 255} }},
	{{ {67, 28, 0}, 0, {-41, 1560}, {63, 179, 79, 255} }},
	{{ {24, -2, 5}, 0, {-359, 1339}, {63, 179, 79, 255} }},
	{{ {29, -3, 0}, 0, {-320, 1326}, {63, 179, 79, 255} }},
	{{ {24, -2, 5}, 0, {-359, 1339}, {60, 185, 87, 255} }},
	{{ {67, 28, 0}, 0, {-41, 1560}, {60, 185, 87, 255} }},
	{{ {55, 24, 5}, 0, {-130, 1531}, {60, 185, 87, 255} }},
	{{ {67, 28, 0}, 0, {-41, 1560}, {4, 94, 86, 255} }},
	{{ {15, 26, 5}, 0, {-427, 1549}, {4, 94, 86, 255} }},
	{{ {55, 24, 5}, 0, {-130, 1531}, {4, 94, 86, 255} }},
	{{ {15, 26, 5}, 0, {-427, 1549}, {5, 88, 92, 255} }},
	{{ {67, 28, 0}, 0, {-41, 1560}, {5, 88, 92, 255} }},
	{{ {18, 31, 0}, 0, {-403, 1583}, {5, 88, 92, 255} }},
	{{ {24, -2, 5}, 0, {-359, 1339}, {162, 232, 83, 255} }},
	{{ {27, -31, 0}, 0, {-339, 1124}, {162, 232, 83, 255} }},
	{{ {34, -41, 5}, 0, {-286, 1051}, {162, 232, 83, 255} }},
	{{ {27, -31, 0}, 0, {-339, 1124}, {163, 232, 83, 255} }},
	{{ {24, -2, 5}, 0, {-359, 1339}, {163, 232, 83, 255} }},
	{{ {19, 0, 0}, 0, {-397, 1351}, {163, 232, 83, 255} }},
	{{ {55, 24, 5}, 0, {-130, 1531}, {197, 71, 88, 255} }},
	{{ {19, 0, 0}, 0, {-397, 1351}, {197, 71, 88, 255} }},
	{{ {24, -2, 5}, 0, {-359, 1339}, {197, 71, 88, 255} }},
	{{ {19, 0, 0}, 0, {-397, 1351}, {196, 72, 86, 255} }},
	{{ {55, 24, 5}, 0, {-130, 1531}, {196, 72, 86, 255} }},
	{{ {43, 20, 0}, 0, {-216, 1503}, {196, 72, 86, 255} }},
	{{ {29, -3, 0}, 0, {-320, 1326}, {93, 23, 84, 255} }},
	{{ {34, -41, 5}, 0, {-286, 1051}, {93, 23, 84, 255} }},
	{{ {41, -51, 0}, 0, {-231, 977}, {93, 23, 84, 255} }},
	{{ {34, -41, 5}, 0, {-286, 1051}, {91, 23, 86, 255} }},
	{{ {29, -3, 0}, 0, {-320, 1326}, {91, 23, 86, 255} }},
	{{ {24, -2, 5}, 0, {-359, 1339}, {91, 23, 86, 255} }},
	{{ {-24, -2, 5}, 0, {-717, 1339}, {193, 179, 79, 255} }},
	{{ {-67, 28, 0}, 0, {-1035, 1560}, {193, 179, 79, 255} }},
	{{ {-29, -3, 0}, 0, {-756, 1326}, {193, 179, 79, 255} }},
	{{ {-67, 28, 0}, 0, {-1035, 1560}, {196, 185, 87, 255} }},
	{{ {-24, -2, 5}, 0, {-717, 1339}, {196, 185, 87, 255} }},
	{{ {-55, 24, 5}, 0, {-946, 1531}, {196, 185, 87, 255} }},
	{{ {-19, 0, 0}, 0, {-680, 1351}, {59, 71, 88, 255} }},
	{{ {-55, 24, 5}, 0, {-946, 1531}, {59, 71, 88, 255} }},
	{{ {-24, -2, 5}, 0, {-717, 1339}, {59, 71, 88, 255} }},
	{{ {-55, 24, 5}, 0, {-946, 1531}, {60, 72, 86, 255} }},
	{{ {-19, 0, 0}, 0, {-680, 1351}, {60, 72, 86, 255} }},
	{{ {-43, 20, 0}, 0, {-860, 1503}, {60, 72, 86, 255} }},
	{{ {-34, -41, -3}, 0, {-790, 1051}, {36, 198, 149, 255} }},
	{{ {0, -25, 0}, 0, {-538, 1168}, {36, 198, 149, 255} }},
	{{ {-41, -51, 0}, 0, {-845, 977}, {36, 198, 149, 255} }},
	{{ {0, -25, 0}, 0, {-538, 1168}, {35, 202, 147, 255} }},
	{{ {-34, -41, -3}, 0, {-790, 1051}, {35, 202, 147, 255} }},
	{{ {0, -19, -3}, 0, {-538, 1208}, {35, 202, 147, 255} }},
	{{ {34, -41, -3}, 0, {-286, 1051}, {70, 17, 151, 255} }},
	{{ {29, -3, 0}, 0, {-320, 1326}, {70, 17, 151, 255} }},
	{{ {41, -51, 0}, 0, {-231, 977}, {70, 17, 151, 255} }},
	{{ {29, -3, 0}, 0, {-320, 1326}, {67, 17, 149, 255} }},
	{{ {34, -41, -3}, 0, {-286, 1051}, {67, 17, 149, 255} }},
	{{ {24, -2, -3}, 0, {-359, 1339}, {67, 17, 149, 255} }},
	{{ {-24, -2, -3}, 0, {-717, 1339}, {70, 238, 152, 255} }},
	{{ {-27, -31, 0}, 0, {-737, 1124}, {70, 238, 152, 255} }},
	{{ {-34, -41, -3}, 0, {-790, 1051}, {70, 238, 152, 255} }},
	{{ {-27, -31, 0}, 0, {-737, 1124}, {70, 238, 151, 255} }},
	{{ {-24, -2, -3}, 0, {-717, 1339}, {70, 238, 151, 255} }},
	{{ {-19, 0, 0}, 0, {-680, 1351}, {70, 238, 151, 255} }},
	{{ {-55, 24, -3}, 0, {-946, 1531}, {43, 52, 148, 255} }},
	{{ {-19, 0, 0}, 0, {-680, 1351}, {43, 52, 148, 255} }},
	{{ {-24, -2, -3}, 0, {-717, 1339}, {43, 52, 148, 255} }},
	{{ {-19, 0, 0}, 0, {-680, 1351}, {44, 53, 149, 255} }},
	{{ {-55, 24, -3}, 0, {-946, 1531}, {44, 53, 149, 255} }},
	{{ {-43, 20, 0}, 0, {-860, 1503}, {44, 53, 149, 255} }},
	{{ {-29, -3, 0}, 0, {-756, 1326}, {186, 17, 151, 255} }},
	{{ {-34, -41, -3}, 0, {-790, 1051}, {186, 17, 151, 255} }},
	{{ {-41, -51, 0}, 0, {-845, 977}, {186, 17, 151, 255} }},
	{{ {-34, -41, -3}, 0, {-790, 1051}, {189, 17, 149, 255} }},
	{{ {-29, -3, 0}, 0, {-756, 1326}, {189, 17, 149, 255} }},
	{{ {-24, -2, -3}, 0, {-717, 1339}, {189, 17, 149, 255} }},
	{{ {15, 26, -3}, 0, {-427, 1549}, {252, 183, 152, 255} }},
	{{ {43, 20, 0}, 0, {-216, 1503}, {252, 183, 152, 255} }},
	{{ {11, 22, 0}, 0, {-451, 1517}, {252, 183, 152, 255} }},
	{{ {43, 20, 0}, 0, {-216, 1503}, {253, 187, 149, 255} }},
	{{ {15, 26, -3}, 0, {-427, 1549}, {253, 187, 149, 255} }},
	{{ {55, 24, -3}, 0, {-130, 1531}, {253, 187, 149, 255} }},
	{{ {-18, 31, 0}, 0, {-673, 1583}, {192, 25, 149, 255} }},
	{{ {0, 64, -3}, 0, {-538, 1828}, {192, 25, 149, 255} }},
	{{ {-15, 26, -3}, 0, {-649, 1549}, {192, 25, 149, 255} }},
	{{ {0, 64, -3}, 0, {-538, 1828}, {193, 24, 148, 255} }},
	{{ {-18, 31, 0}, 0, {-673, 1583}, {193, 24, 148, 255} }},
	{{ {0, 77, 0}, 0, {-538, 1921}, {193, 24, 148, 255} }},
	{{ {0, -19, -3}, 0, {-538, 1208}, {38, 58, 149, 255} }},
	{{ {27, -31, 0}, 0, {-339, 1124}, {38, 58, 149, 255} }},
	{{ {34, -41, -3}, 0, {-286, 1051}, {38, 58, 149, 255} }},
	{{ {27, -31, 0}, 0, {-339, 1124}, {39, 62, 152, 255} }},
	{{ {0, -19, -3}, 0, {-538, 1208}, {39, 62, 152, 255} }},
	{{ {0, -14, 0}, 0, {-538, 1248}, {39, 62, 152, 255} }},
	{{ {-67, 28, 0}, 0, {-1035, 1560}, {253, 69, 149, 255} }},
	{{ {-15, 26, -3}, 0, {-649, 1549}, {253, 69, 149, 255} }},
	{{ {-55, 24, -3}, 0, {-946, 1531}, {253, 69, 149, 255} }},
	{{ {-15, 26, -3}, 0, {-649, 1549}, {253, 64, 146, 255} }},
	{{ {-67, 28, 0}, 0, {-1035, 1560}, {253, 64, 146, 255} }},
	{{ {-18, 31, 0}, 0, {-673, 1583}, {253, 64, 146, 255} }},
	{{ {19, 0, 0}, 0, {-397, 1351}, {213, 52, 148, 255} }},
	{{ {55, 24, -3}, 0, {-130, 1531}, {213, 52, 148, 255} }},
	{{ {24, -2, -3}, 0, {-359, 1339}, {213, 52, 148, 255} }},
	{{ {55, 24, -3}, 0, {-130, 1531}, {212, 53, 149, 255} }},
	{{ {19, 0, 0}, 0, {-397, 1351}, {212, 53, 149, 255} }},
	{{ {43, 20, 0}, 0, {-216, 1503}, {212, 53, 149, 255} }},
	{{ {0, 52, 0}, 0, {-538, 1737}, {196, 234, 146, 255} }},
	{{ {15, 26, -3}, 0, {-427, 1549}, {196, 234, 146, 255} }},
	{{ {11, 22, 0}, 0, {-451, 1517}, {196, 234, 146, 255} }},
	{{ {15, 26, -3}, 0, {-427, 1549}, {189, 230, 151, 255} }},
	{{ {0, 52, 0}, 0, {-538, 1737}, {189, 230, 151, 255} }},
	{{ {0, 64, -3}, 0, {-538, 1828}, {189, 230, 151, 255} }},
	{{ {-15, 26, -3}, 0, {-649, 1549}, {3, 187, 149, 255} }},
	{{ {-43, 20, 0}, 0, {-860, 1503}, {3, 187, 149, 255} }},
	{{ {-55, 24, -3}, 0, {-946, 1531}, {3, 187, 149, 255} }},
	{{ {-43, 20, 0}, 0, {-860, 1503}, {4, 183, 152, 255} }},
	{{ {-15, 26, -3}, 0, {-649, 1549}, {4, 183, 152, 255} }},
	{{ {-11, 22, 0}, 0, {-626, 1517}, {4, 183, 152, 255} }},
	{{ {15, 26, -3}, 0, {-427, 1549}, {3, 69, 149, 255} }},
	{{ {67, 28, 0}, 0, {-41, 1560}, {3, 69, 149, 255} }},
	{{ {55, 24, -3}, 0, {-130, 1531}, {3, 69, 149, 255} }},
	{{ {67, 28, 0}, 0, {-41, 1560}, {3, 64, 146, 255} }},
	{{ {15, 26, -3}, 0, {-427, 1549}, {3, 64, 146, 255} }},
	{{ {18, 31, 0}, 0, {-403, 1583}, {3, 64, 146, 255} }},
	{{ {-67, 28, 0}, 0, {-1035, 1560}, {207, 196, 155, 255} }},
	{{ {-24, -2, -3}, 0, {-717, 1339}, {207, 196, 155, 255} }},
	{{ {-29, -3, 0}, 0, {-756, 1326}, {207, 196, 155, 255} }},
	{{ {-24, -2, -3}, 0, {-717, 1339}, {212, 203, 149, 255} }},
	{{ {-67, 28, 0}, 0, {-1035, 1560}, {212, 203, 149, 255} }},
	{{ {-55, 24, -3}, 0, {-946, 1531}, {212, 203, 149, 255} }},
	{{ {0, -25, 0}, 0, {-538, 1168}, {220, 198, 149, 255} }},
	{{ {34, -41, -3}, 0, {-286, 1051}, {220, 198, 149, 255} }},
	{{ {41, -51, 0}, 0, {-231, 977}, {220, 198, 149, 255} }},
	{{ {34, -41, -3}, 0, {-286, 1051}, {221, 202, 147, 255} }},
	{{ {0, -25, 0}, 0, {-538, 1168}, {221, 202, 147, 255} }},
	{{ {0, -19, -3}, 0, {-538, 1208}, {221, 202, 147, 255} }},
	{{ {-15, 26, -3}, 0, {-649, 1549}, {60, 234, 146, 255} }},
	{{ {0, 52, 0}, 0, {-538, 1737}, {60, 234, 146, 255} }},
	{{ {-11, 22, 0}, 0, {-626, 1517}, {60, 234, 146, 255} }},
	{{ {0, 52, 0}, 0, {-538, 1737}, {67, 230, 151, 255} }},
	{{ {-15, 26, -3}, 0, {-649, 1549}, {67, 230, 151, 255} }},
	{{ {0, 64, -3}, 0, {-538, 1828}, {67, 230, 151, 255} }},
	{{ {27, -31, 0}, 0, {-339, 1124}, {186, 238, 152, 255} }},
	{{ {24, -2, -3}, 0, {-359, 1339}, {186, 238, 152, 255} }},
	{{ {34, -41, -3}, 0, {-286, 1051}, {186, 238, 152, 255} }},
	{{ {24, -2, -3}, 0, {-359, 1339}, {186, 238, 151, 255} }},
	{{ {27, -31, 0}, 0, {-339, 1124}, {186, 238, 151, 255} }},
	{{ {19, 0, 0}, 0, {-397, 1351}, {186, 238, 151, 255} }},
	{{ {-27, -31, 0}, 0, {-737, 1124}, {218, 58, 149, 255} }},
	{{ {0, -19, -3}, 0, {-538, 1208}, {218, 58, 149, 255} }},
	{{ {-34, -41, -3}, 0, {-790, 1051}, {218, 58, 149, 255} }},
	{{ {0, -19, -3}, 0, {-538, 1208}, {217, 62, 152, 255} }},
	{{ {-27, -31, 0}, 0, {-737, 1124}, {217, 62, 152, 255} }},
	{{ {0, -14, 0}, 0, {-538, 1248}, {217, 62, 152, 255} }},
	{{ {24, -2, -3}, 0, {-359, 1339}, {49, 196, 155, 255} }},
	{{ {67, 28, 0}, 0, {-41, 1560}, {49, 196, 155, 255} }},
	{{ {29, -3, 0}, 0, {-320, 1326}, {49, 196, 155, 255} }},
	{{ {67, 28, 0}, 0, {-41, 1560}, {44, 203, 149, 255} }},
	{{ {24, -2, -3}, 0, {-359, 1339}, {44, 203, 149, 255} }},
	{{ {55, 24, -3}, 0, {-130, 1531}, {44, 203, 149, 255} }},
	{{ {0, 64, -3}, 0, {-538, 1828}, {64, 25, 149, 255} }},
	{{ {18, 31, 0}, 0, {-403, 1583}, {64, 25, 149, 255} }},
	{{ {15, 26, -3}, 0, {-427, 1549}, {64, 25, 149, 255} }},
	{{ {18, 31, 0}, 0, {-403, 1583}, {63, 24, 148, 255} }},
	{{ {0, 64, -3}, 0, {-538, 1828}, {63, 24, 148, 255} }},
	{{ {0, 77, 0}, 0, {-538, 1921}, {63, 24, 148, 255} }},
	{{ {0, 52, 0}, 0, {-538, 1737}, {83, 226, 91, 255} }},
	{{ {-15, 26, 5}, 0, {-649, 1549}, {83, 226, 91, 255} }},
	{{ {-11, 22, 0}, 0, {-626, 1517}, {83, 226, 91, 255} }},
	{{ {-15, 26, 5}, 0, {-649, 1549}, {89, 221, 84, 255} }},
	{{ {0, 52, 0}, 0, {-538, 1737}, {89, 221, 84, 255} }},
	{{ {0, 64, 5}, 0, {-538, 1828}, {89, 221, 84, 255} }},
	{{ {43, 20, 0}, 0, {-216, 1503}, {250, 159, 82, 255} }},
	{{ {15, 26, 5}, 0, {-427, 1549}, {250, 159, 82, 255} }},
	{{ {11, 22, 0}, 0, {-451, 1517}, {250, 159, 82, 255} }},
	{{ {15, 26, 5}, 0, {-427, 1549}, {252, 162, 86, 255} }},
	{{ {43, 20, 0}, 0, {-216, 1503}, {252, 162, 86, 255} }},
	{{ {55, 24, 5}, 0, {-130, 1531}, {252, 162, 86, 255} }},
	{{ {-15, 26, 5}, 0, {-649, 1549}, {252, 94, 86, 255} }},
	{{ {-67, 28, 0}, 0, {-1035, 1560}, {252, 94, 86, 255} }},
	{{ {-55, 24, 5}, 0, {-946, 1531}, {252, 94, 86, 255} }},
	{{ {-67, 28, 0}, 0, {-1035, 1560}, {251, 88, 92, 255} }},
	{{ {-15, 26, 5}, 0, {-649, 1549}, {251, 88, 92, 255} }},
	{{ {-18, 31, 0}, 0, {-673, 1583}, {251, 88, 92, 255} }},
	{{ {0, 64, 5}, 0, {-538, 1828}, {169, 34, 86, 255} }},
	{{ {-18, 31, 0}, 0, {-673, 1583}, {169, 34, 86, 255} }},
	{{ {-15, 26, 5}, 0, {-649, 1549}, {169, 34, 86, 255} }},
	{{ {-18, 31, 0}, 0, {-673, 1583}, {170, 33, 88, 255} }},
	{{ {0, 64, 5}, 0, {-538, 1828}, {170, 33, 88, 255} }},
	{{ {0, 77, 0}, 0, {-538, 1921}, {170, 33, 88, 255} }},
	{{ {-43, 20, 0}, 0, {-860, 1503}, {4, 162, 86, 255} }},
	{{ {-15, 26, 5}, 0, {-649, 1549}, {4, 162, 86, 255} }},
	{{ {-55, 24, 5}, 0, {-946, 1531}, {4, 162, 86, 255} }},
	{{ {-15, 26, 5}, 0, {-649, 1549}, {6, 159, 82, 255} }},
	{{ {-43, 20, 0}, 0, {-860, 1503}, {6, 159, 82, 255} }},
	{{ {-11, 22, 0}, 0, {-626, 1517}, {6, 159, 82, 255} }},
	{{ {15, 26, 5}, 0, {-427, 1549}, {173, 226, 91, 255} }},
	{{ {0, 52, 0}, 0, {-538, 1737}, {173, 226, 91, 255} }},
	{{ {11, 22, 0}, 0, {-451, 1517}, {173, 226, 91, 255} }},
	{{ {0, 52, 0}, 0, {-538, 1737}, {167, 221, 84, 255} }},
	{{ {15, 26, 5}, 0, {-427, 1549}, {167, 221, 84, 255} }},
	{{ {0, 64, 5}, 0, {-538, 1828}, {167, 221, 84, 255} }},
};

Gfx secret_node_mesh_layer_1_tri_1[] = {
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 30, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 45, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 60, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 75, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 90, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 105, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 120, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 135, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 150, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 165, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 180, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 195, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 210, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(secret_node_mesh_layer_1_vtx_1 + 225, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPEndDisplayList(),
};


Gfx mat_secret_Mat1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, secret__1_ci4_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(7, 7),
	gsDPLoadSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, secret__1_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(secret_Mat1_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_secret_Mat1[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_secret_Mat0[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, secret__0_ci4_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(7, 7),
	gsDPLoadSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, secret__0_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(secret_Mat0_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_secret_Mat0[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx secret_node_mesh_layer_1[] = {
	gsSPDisplayList(mat_secret_Mat1),
	gsSPDisplayList(secret_node_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_secret_Mat1),
	gsSPDisplayList(mat_secret_Mat0),
	gsSPDisplayList(secret_node_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_secret_Mat0),
	gsSPEndDisplayList(),
};

Gfx secret_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
