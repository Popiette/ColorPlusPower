#ifndef DEF_TERMINAL
#define DEF_TERMINAL

enum ClearIndex { CLEAR_SCREEN, CLEAR_LINE };
const char * const CLEAR_CODES[] = { "\e[2J", "\e[K" };

const char * clear(enum ClearIndex);

#endif
