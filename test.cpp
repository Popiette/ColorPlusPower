#include <iostream>
using namespace std;

#include "color.h"

void test()
{
	ColorIndex colorIndexTab[] = { DEFAULT, BLACK, RED, GREEN, 
		YELLOW, BLUE, MAGENTA, CYAN, LIGHT_GRAY, 
		DARK_GRAY, LIGHT_RED, LIGHT_GREEN, LIGHT_YELLOW, 
		LIGHT_BLUE, LIGHT_MAGENTA, LIGHT_CYAN, WHITE};

	const char * colors[] = { 
					"default", "black", "red", "green", "yellow",
					"blue", "magenta", "cyan", "light_gray",
					"dark_gray", "light_red", "light_green",
					"light_yellow", "light_blue", 
					"light_magenta", "light_cyan", "white"
				};
	cout << "Colors :" << endl;
	for(unsigned int i = 0; i < 17; ++i)
	{
		cout << color(DEFAULT) << i << " : " 
			<< color(colorIndexTab[i]) << "color" 
			<< color(DEFAULT)
			<< "\t" << background(colorIndexTab[i]) << "color"
			<< background(DEFAULT) << " : " << colors[i]
			<< endl;
	}

	cout << background(DEFAULT) << endl;
	
	EffectIndex effectIndexTab[] = {BOLD, DIM, ITALIC, 
		UNDERLINED, BLINK, INVERTED, HIDDEN, ALL};

	const char * effects[] = { "bold", "dim", "italic",
		"underlined", "blink", "inverted", "hidden", "all"};

	cout << "Effects :" << endl;
	for(unsigned int i = 0; i < 8; ++i)
	{
		cout << effect(effectIndexTab[i]) << i << " : "
		       << effects[i] 
		       << reset_effect(effectIndexTab[i]) 
		       << endl;
	}

	cout << endl;
}

int main(int argc, char ** argv)
{
	test();
	return 0;
}
