#include <iostream>

using namespace std;

#include "color.h"

const char * color(enum ColorIndex index)
{
	return COLORS[index];
}

const char * background(enum ColorIndex index)
{
	return BACKGROUNDS[index];
}

const char * effect(enum EffectIndex index)
{
	return EFFECTS[index];
}

const char * reset_effect(enum EffectIndex index)
{
	return RESET_EFFECTS[index];
}

const char * clear(enum ClearIndex index)
{
	return CLEAR_CODES[index];
}

