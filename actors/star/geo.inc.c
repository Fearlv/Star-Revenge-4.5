#include "custom.model.inc.h"

const GeoLayout star_geo[]= {
	GEO_SHADOW(1, 155, 100),
	GEO_OPEN_NODE(),
		GEO_SCALE(0, 16384),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, DL_star_geo_0x302b870),
			GEO_DISPLAY_LIST(4, DL_star_geo_0x302ba18),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};