#pragma once

#include <stdbool.h>
#include <opencv2/core/core_c.h>

#ifdef __cplusplus
extern "C"
{
#endif

IplImage* render_terrain( float view_lat, float view_lon, float* elevation, bool do_bgr );
bool render_terrain_to_window( float view_lat, float view_lon );


#ifdef __cplusplus
}
#endif
