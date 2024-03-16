#include "geo_header.h"

Lights1 starhole_mat1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 starhole_mat0_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx starhole__1_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 starhole__1_rgba16[] = {
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	0x07, 0xbd, 0x07, 0x7d, 0x06, 0xfd, 0x06, 0x7d, 
	0x06, 0x3d, 0x05, 0xbd, 0x05, 0x3d, 0x04, 0xbd, 
	0x04, 0x7d, 0x03, 0xfd, 0x03, 0x7d, 0x02, 0xfd, 
	0x0a, 0x7d, 0x0a, 0x3d, 0x09, 0xbd, 0x09, 0x3d, 
	0x08, 0xbd, 0x08, 0x3d, 0x08, 0x7d, 0x08, 0xfd, 
	0x09, 0x7d, 0x09, 0xfd, 0x0a, 0x7d, 0x0a, 0xbd, 
	0x0b, 0x3d, 0x03, 0xbd, 0x04, 0x3d, 0x04, 0xbd, 
	0x04, 0xfd, 0x05, 0x7d, 0x05, 0xfd, 0x06, 0x7d, 
	
};

Gfx starhole__0_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 starhole__0_rgba16[] = {
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x04, 0x3d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x02, 0xbd, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x3d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x05, 0xbd, 
	0x00, 0x01, 0x00, 0x01, 0x08, 0x3d, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x05, 0xbd, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x08, 0x3d, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x01, 0x3d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x01, 0x3d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x07, 0xbd, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x03, 0x7d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x08, 0x3d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x04, 0x3d, 
	0x00, 0x01, 0x00, 0x01, 0x07, 0xbd, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x03, 0x7d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x02, 0xbd, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x08, 0x3d, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x03, 0x7d, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x08, 0x3d, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x04, 0x3d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x07, 0xbd, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x08, 0x3d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x08, 0x3d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x03, 0x7d, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x05, 0xbd, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x02, 0xbd, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x08, 0x3d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x07, 0xbd, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x02, 0xbd, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x03, 0x7d, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x04, 0x3d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x02, 0xbd, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x01, 0x3d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x04, 0x3d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x08, 0x3d, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x05, 0xbd, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x02, 0xbd, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x08, 0x3d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x08, 0x3d, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x02, 0xbd, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x07, 0xbd, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x03, 0x7d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x03, 0x7d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x03, 0x7d, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x05, 0xbd, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x05, 0xbd, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x08, 0x3d, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x03, 0x7d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x01, 0x3d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x08, 0x3d, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x04, 0x3d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x07, 0xbd, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x02, 0xbd, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x02, 0xbd, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x08, 0x3d, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x03, 0x7d, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x04, 0x3d, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x01, 0x3d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x01, 0x3d, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x07, 0xbd, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x04, 0x3d, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x08, 0x3d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x05, 0xbd, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x05, 0xbd, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x02, 0xbd, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x02, 0xbd, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x03, 0x7d, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x08, 0x3d, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	
};

Vtx starhole_node_mesh_layer_1_vtx_0[42] = {
	{{ {-60, 16, 34}, 0, {-1650, 2099}, {80, 96, 231, 255} }},
	{{ {-194, 0, -48}, 0, {-1748, 2844}, {228, 124, 247, 255} }},
	{{ {-85, 0, 42}, 0, {-1754, 2165}, {194, 109, 21, 255} }},
	{{ {-138, 14, -30}, 0, {-1645, 2584}, {2, 127, 254, 255} }},
	{{ {-60, 5, 34}, 0, {-1650, 2099}, {121, 0, 217, 255} }},
	{{ {-85, 14, 132}, 0, {-2084, 1894}, {1, 127, 255, 255} }},
	{{ {-119, 0, 179}, 0, {-2362, 1876}, {239, 124, 24, 255} }},
	{{ {0, 0, 104}, 0, {-1722, 1662}, {0, 108, 67, 255} }},
	{{ {0, 16, 79}, 0, {-1628, 1740}, {0, 96, 173, 255} }},
	{{ {85, 14, 132}, 0, {-1563, 1264}, {255, 127, 255, 255} }},
	{{ {119, 0, 179}, 0, {-1632, 994}, {17, 124, 24, 255} }},
	{{ {85, 0, 42}, 0, {-1235, 1537}, {62, 109, 21, 255} }},
	{{ {60, 16, 34}, 0, {-1280, 1651}, {176, 96, 231, 255} }},
	{{ {194, 0, -48}, 0, {-567, 1414}, {28, 124, 247, 255} }},
	{{ {138, 14, -30}, 0, {-803, 1564}, {254, 127, 254, 255} }},
	{{ {52, 0, -57}, 0, {-965, 1962}, {39, 109, 203, 255} }},
	{{ {138, 14, -30}, 0, {-803, 1564}, {254, 127, 254, 255} }},
	{{ {52, 0, -57}, 0, {-965, 1962}, {39, 109, 203, 255} }},
	{{ {37, 16, -36}, 0, {-1087, 1954}, {207, 96, 67, 255} }},
	{{ {0, 14, -131}, 0, {-854, 2380}, {0, 127, 1, 255} }},
	{{ {0, 0, -189}, 0, {-638, 2558}, {0, 123, 226, 255} }},
	{{ {-52, 0, -57}, 0, {-1286, 2350}, {217, 109, 203, 255} }},
	{{ {-37, 16, -36}, 0, {-1316, 2231}, {49, 96, 67, 255} }},
	{{ {-138, 14, -30}, 0, {-1645, 2584}, {2, 127, 254, 255} }},
	{{ {-194, 0, -48}, 0, {-1748, 2844}, {228, 124, 247, 255} }},
	{{ {-37, 5, -36}, 0, {-1316, 2231}, {75, 0, 103, 255} }},
	{{ {-138, 10, -30}, 0, {-1645, 2584}, {121, 0, 39, 255} }},
	{{ {-60, 5, 34}, 0, {-1650, 2099}, {121, 0, 217, 255} }},
	{{ {0, 10, -131}, 0, {-854, 2380}, {0, 0, 127, 255} }},
	{{ {37, 5, -36}, 0, {-1087, 1954}, {181, 0, 103, 255} }},
	{{ {138, 10, -30}, 0, {-803, 1564}, {135, 0, 39, 255} }},
	{{ {60, 16, 34}, 0, {-1280, 1651}, {176, 96, 231, 255} }},
	{{ {60, 16, 34}, 0, {-1280, 1651}, {176, 96, 231, 255} }},
	{{ {138, 10, -30}, 0, {-803, 1564}, {135, 0, 39, 255} }},
	{{ {60, 5, 34}, 0, {-1280, 1651}, {135, 0, 217, 255} }},
	{{ {85, 14, 132}, 0, {-1563, 1264}, {255, 127, 255, 255} }},
	{{ {85, 10, 132}, 0, {-1563, 1264}, {181, 0, 153, 255} }},
	{{ {0, 16, 79}, 0, {-1628, 1740}, {0, 96, 173, 255} }},
	{{ {0, 5, 79}, 0, {-1628, 1740}, {0, 0, 129, 255} }},
	{{ {-85, 14, 132}, 0, {-2084, 1894}, {1, 127, 255, 255} }},
	{{ {-85, 10, 132}, 0, {-2084, 1894}, {75, 0, 153, 255} }},
	{{ {-60, 5, 34}, 0, {-1650, 2099}, {121, 0, 217, 255} }},
};

Gfx starhole_node_mesh_layer_1_tri_0[] = {
	gsSPVertex(starhole_node_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(2, 5, 0, 0),
	gsSP1Triangle(2, 6, 5, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(8, 5, 7, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(10, 9, 7, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(11, 12, 9, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(starhole_node_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 3, 1, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(7, 9, 6, 0),
	gsSP1Triangle(9, 7, 10, 0),
	gsSP1Triangle(7, 11, 10, 0),
	gsSP1Triangle(9, 3, 6, 0),
	gsSP1Triangle(3, 9, 12, 0),
	gsSP1Triangle(13, 3, 12, 0),
	gsSP1Triangle(3, 13, 2, 0),
	gsSP1Triangle(14, 2, 13, 0),
	gsSP1Triangle(2, 14, 0, 0),
	gsSP1Triangle(14, 15, 0, 0),
	gsSPVertex(starhole_node_mesh_layer_1_vtx_0 + 32, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSPEndDisplayList(),
};

Vtx starhole_node_mesh_layer_1_vtx_1[10] = {
	{{ {-37, 5, -36}, 0, {-148, 1621}, {1, 127, 2, 255} }},
	{{ {-138, 10, -30}, 0, {-978, 1861}, {6, 127, 2, 255} }},
	{{ {-60, 5, 34}, 0, {-539, 1112}, {2, 127, 0, 255} }},
	{{ {60, 5, 34}, 0, {438, 766}, {254, 127, 0, 255} }},
	{{ {0, 5, 79}, 0, {-176, 584}, {0, 127, 253, 255} }},
	{{ {-85, 10, 132}, 0, {-1017, 401}, {4, 127, 251, 255} }},
	{{ {85, 10, 132}, 0, {360, -88}, {252, 127, 251, 255} }},
	{{ {37, 5, -36}, 0, {455, 1407}, {255, 127, 2, 255} }},
	{{ {138, 10, -30}, 0, {1250, 1070}, {250, 127, 2, 255} }},
	{{ {0, 10, -131}, 0, {423, 2275}, {0, 127, 6, 255} }},
};

Gfx starhole_node_mesh_layer_1_tri_1[] = {
	gsSPVertex(starhole_node_mesh_layer_1_vtx_1 + 0, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(3, 4, 6, 0),
	gsSP1Triangle(7, 3, 8, 0),
	gsSP1Triangle(0, 3, 7, 0),
	gsSP1Triangle(9, 0, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_starhole_mat1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, starhole__1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(starhole_mat1_lights),
	gsSPEndDisplayList(),
};

Gfx mat_starhole_mat0[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, starhole__0_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(starhole_mat0_lights),
	gsSPEndDisplayList(),
};

Gfx starhole_node_mesh_layer_1[] = {
	gsSPDisplayList(mat_starhole_mat1),
	gsSPDisplayList(starhole_node_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_starhole_mat0),
	gsSPDisplayList(starhole_node_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx starhole_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
