#include "geo_header.h"

const GeoLayout starhole[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, starhole_node_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, starhole_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
