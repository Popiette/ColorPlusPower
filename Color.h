#ifndef DEF_COLOR
#define DEF_COLOR

#include <iostream>

#include "enum.h"

static const char * const COLORS [] = { "\e[39m", "\e[30m", "\e[31m", "\e[32m", "\e[33m", "\e[34m", "\e[35m", "\e[36m", "\e[37m", 
	"\e[90m", "\e[91m","\e[92m", "\e[93m", "\e[94m", "\e[95m", "\e[96m", "\e[97m" };

class Color{
	
	public:
		Color(ColorIndex color);
		friend std::ostream & operator << ( std::ostream & out, const Color & color);

	private:
		ColorIndex colorIndex;



};

#endif
