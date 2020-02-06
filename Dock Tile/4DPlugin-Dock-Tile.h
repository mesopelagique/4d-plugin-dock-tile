/* --------------------------------------------------------------------------------
 #
 #	4DPlugin-Dock-Tile.h
 #	source generated by 4D Plugin Wizard
 #	Project : Dock Tile
 #	author : miyako
 #	2020/02/06
 #  
 # --------------------------------------------------------------------------------*/

#ifndef PLUGIN_DOCK_TILE_H
#define PLUGIN_DOCK_TILE_H

#include "4DPluginAPI.h"
#include "C_TEXT.h"
#import <Cocoa/Cocoa.h>

#pragma mark -

void DOCK_Get_badge(PA_PluginParameters params);
void DOCK_SET_BADGE(PA_PluginParameters params);
void DOCK_CANCEL_BOUNCE(PA_PluginParameters params);
void DOCK_Bounce(PA_PluginParameters params);
void DOCK_SET_ICON(PA_PluginParameters params);
void DOCK_Get_icon(PA_PluginParameters params);
void DOCK_GET_SIZE(PA_PluginParameters params);
void DOCK_GET_SCREEN_FRAME(PA_PluginParameters params);

#endif /* PLUGIN_DOCK_TILE_H */