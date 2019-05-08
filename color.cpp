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

