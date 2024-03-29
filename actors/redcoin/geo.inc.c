#include "geo_header.h"

const GeoLayout red_coin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
                GEO_SHADOW(0, 180, 50),
                GEO_ASM(0, geo_rotate_coin),
                GEO_ROTATION_NODE(0, 0, 0, 0)
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, redcoin_node_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, redcoin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
