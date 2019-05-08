#include <iostream>

using namespace std;

#include "effect.h"

const char * effect(enum EffectIndex index)
{
	return EFFECTS[index];
}

const char * reset_effect(enum EffectIndex index)
{
	return RESET_EFFECTS[index];
}
