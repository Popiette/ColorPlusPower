#ifndef DEF_COLOR
#define DEF_COLOR

enum ColorIndex { 
	DEFAULT, BLACK, RED, GREEN, YELLOW, 
	BLUE, MAGENTA, CYAN, LIGHT_GRAY, DARK_GRAY, 
	LIGHT_RED, LIGHT_GREEN, LIGHT_YELLOW, 
	LIGHT_BLUE, LIGHT_MAGENTA, LIGHT_CYAN, WHITE
	};

static const char * const COLORS [] = { 
	"\e[39m", "\e[30m", "\e[31m", "\e[32m", "\e[33m", 
	"\e[34m", "\e[35m", "\e[36m", "\e[37m", "\e[90m", 
	"\e[91m","\e[92m", "\e[93m", "\e[94m", "\e[95m", 
	"\e[96m", "\e[97m" 
	};

static const char * const BACKGROUNDS [] = { 
	"\e[49m", "\e[40m", "\e[41m", "\e[42m", "\e[43m", 
	"\e[44m", "\e[45m", "\e[46m", "\e[47m", "\e[100m", 
	"\e[101m","\e[102m", "\e[103m", "\e[104m", "\e[105m", 
	"\e[106m", "\e[107m" 
	};

const char * color(enum ColorIndex);
const char * background(enum ColorIndex);

#endif
