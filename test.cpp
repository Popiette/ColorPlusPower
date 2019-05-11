#include <iostream>
using namespace std;

#include "Color.h"
#include "Background.h"
#include "Effect.h"
#include "ResetEffect.h"

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
		cout << Color(DEFAULT) << i << " : " 
			<< Color(colorIndexTab[i]) << "color" 
			<< Color(DEFAULT)
			<< "\t" << Background(colorIndexTab[i]) << "color"
			<< Background(DEFAULT) << " : " << colors[i]
			<< endl;
	}

	cout << Background(DEFAULT) << endl;
	
	EffectIndex effectIndexTab[] = {BOLD, DIM, ITALIC, 
		UNDERLINED, BLINK, INVERTED, HIDDEN, ALL};

	const char * effects[] = { "bold", "dim", "italic",
		"underlined", "blink", "inverted", "hidden", "all"};

	cout << "Effects :" << endl;
	for(unsigned int i = 0; i < 8; ++i)
	{
		cout << Effect(effectIndexTab[i]) << i << " : "
		       << effects[i] 
		       << ResetEffect(effectIndexTab[i]) 
		       << endl;
	}

	cout << endl;
}

int main(int argc, char ** argv)
{
	test();
	return 0;
}
