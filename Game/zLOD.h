#ifndef ZLOD_H
#define ZLOD_H

#include "xModelBucket.h"
#include "xEnt.h"

struct zLODTable
{
	xModelBucket **baseBucket;
	float noRenderDist;
	xModelBucket **lodBucket[3];
	float lodDist[3];
};

void zLOD_Setup();
void zLOD_Update(unsigned int percent_update);
zLODTable *zLOD_Get(xEnt *ent);

#endif