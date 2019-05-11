#ifndef DEF_EFFECT
#define DEF_EFFECT

#include <iostream>

#include "enum.h"

static const char * const EFFECTS [] = { "\e[1m", "\e[2m", "\e[3m", "\e[4m", "\e[5m", "\e[7m", "\e[8m", "\e[1m\e[2m\e[4m\e[5m\e[7m\e[8m" };

class Effect{
	
	public:
		Effect(EffectIndex index);
		friend std::ostream & operator << (std::ostream & out, const Effect & effect);
	
	protected:
		EffectIndex effectIndex;		
};

#endif
