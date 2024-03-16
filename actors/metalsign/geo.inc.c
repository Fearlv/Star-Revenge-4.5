#include "custom.model.inc.h"

const GeoLayout metalsign[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
                GEO_SHADOW(1, 200, 60),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, metalsign_node_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, metalsign_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
