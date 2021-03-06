#ifndef IPAD_H
#define IPAD_H

struct _tagiPad
{
    int port;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct _tagxPad;
struct _tagxRumble;

int iPadInit();
_tagxPad *iPadEnable(_tagxPad *pad, short port);
int iPadUpdate(_tagxPad *pad, unsigned int *on);
void iPadRumbleFx(_tagxPad *p, _tagxRumble *r, float time_passed);
void iPadStopRumble(_tagxPad *pad);
void iPadStartRumble(_tagxPad *pad, _tagxRumble *rumble);

#endif