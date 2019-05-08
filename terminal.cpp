#include <iostream>
using namespace std;

#include "terminal.h"

const char * clear(enum ClearIndex index)
{
	return CLEAR_CODES[index];
}
