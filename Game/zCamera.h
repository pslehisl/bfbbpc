#ifndef ZCAMERA_H
#define ZCAMERA_H

#include "xCamera.h"
#include "zCamMarker.h"

extern float zcam_pad_pyaw_scale;
extern float zcam_pad_pitch_scale;
extern float zcam_near_d;
extern float zcam_near_h;
extern float zcam_near_pitch;
extern float zcam_far_d;
extern float zcam_far_h;
extern float zcam_far_pitch;
extern float zcam_wall_d;
extern float zcam_wall_h;
extern float zcam_wall_pitch;
extern float zcam_above_d;
extern float zcam_above_h;
extern float zcam_above_pitch;
extern float zcam_below_d;
extern float zcam_below_h;
extern float zcam_below_pitch;
extern float zcam_highbounce_d;
extern float zcam_highbounce_h;
extern float zcam_highbounce_pitch;
extern float zcam_overrot_min;
extern float zcam_overrot_mid;
extern float zcam_overrot_max;
extern float zcam_overrot_rate;
extern float zcam_overrot_tstart;
extern float zcam_overrot_tend;
extern float zcam_overrot_velmin;
extern float zcam_overrot_velmax;
extern float zcam_overrot_tmanual;
extern float zcam_overrot_tmr;
extern xCamera zcam_backupcam;
extern xCamera zcam_backupconvers;
extern int zcam_near;
extern int zcam_mode;
extern int zcam_bbounce;
extern int zcam_lbbounce;
extern int zcam_convers;
extern int zcam_lconvers;
extern int zcam_longbounce;
extern int zcam_highbounce;
extern int zcam_cutscene;
extern int zcam_reward;
extern xVec3 *zcam_playervel;
extern float zcam_mintgtheight;
extern int zcam_fly;
extern int zcam_flypaused;
extern void *zcam_flydata;
extern unsigned int zcam_flysize;
extern float zcam_flytime;
extern unsigned int zcam_flyasset_current;
extern xCamAsset *zcam_dest;
extern xQuat zcam_quat;
extern float zcam_tmr;
extern float zcam_ttm;
extern float zcam_fovcurr;
extern float zcam_fovdest;

void zCameraReset(xCamera *cam);

#endif