#ifndef DEF_BACKGROUND
#define DEF_BACKGROUND

#include <iostream>
#include "enum.h"

static const char * const BACKGROUNDS [] = { "\e[49m", "\e[40m", "\e[41m", "\e[42m", "\e[43m", "\e[44m", "\e[45m", "\e[46m", "\e[47m", 
	"\e[100m", "\e[101m","\e[102m", "\e[103m", "\e[104m", "\e[105m", "\e[106m", "\e[107m" };


class Background{

	public:
		Background(ColorIndex index);
		friend std::ostream & operator << (std::ostream & out, const Background & background);

	protected:
		ColorIndex backgroundIndex;
};

#endif
