#ifndef DEF_RESETEFFECT
#define DEF_RESETEFFECT

#include <iostream>

#include "enum.h"

static const char * const RESET_EFFECTS [] = { "\e[21m", "\e[22m", "\e[23m", "\e[24m","\e[25m", "\e[27m", "\e[28m", "\e[0m" };

class ResetEffect{
	
	public:
		ResetEffect(EffectIndex index);
		friend std::ostream & operator << (std::ostream & out, const ResetEffect & reset);
	
	private:
		EffectIndex effectIndex;
};

#endif
