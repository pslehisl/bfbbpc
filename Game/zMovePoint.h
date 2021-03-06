#ifndef ZMOVEPOINT_H
#define ZMOVEPOINT_H

#include "xMovePoint.h"

struct zMovePoint : xMovePoint
{
};

struct zScene;

zMovePoint *zMovePoint_GetMemPool(int cnt);
void zMovePointInit(zMovePoint *m, xMovePointAsset *asset);
zMovePoint *zMovePoint_GetInst(int n);
void zMovePointSetup(zMovePoint *mvpt, zScene *scn);

#endif