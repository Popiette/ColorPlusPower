#ifndef DEF_EFFECT
#define DEF_EFFECT

enum EffectIndex {
		BOLD, DIM, ITALIC, UNDERLINED, 
		BLINK, INVERTED, HIDDEN, ALL
	};

static const char * const EFFECTS [] = 
	{ 
		"\e[1m", "\e[2m", "\e[3m", "\e[4m", "\e[5m", 
		"\e[7m", "\e[8m", "\e[1m\e[2m\e[4m\e[5m\e[7m\e[8m" 
	};

static const char * const RESET_EFFECTS [] = 
	{ 
		"\e[21m", "\e[22m", "\e[23m", "\e[24m","\e[25m", 
		"\e[27m", "\e[28m", "\e[0m" 
	};

const char * effect(enum EffectIndex);
const char * reset_effect(enum EffectIndex);

#endif
