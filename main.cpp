#include <iostream>
#include <cstring>
using namespace std;

#include "Color.h"
#include "Background.h"
#include "Effect.h"
#include "ResetEffect.h"

const int colorNumber = 17;
const char * const colors[] = { "default", "black", "red", "green", 
	"yellow", "blue", "magenta", "cyan", "lgray", "dgray", "lred", 
	"lgreen", "lyellow", "lblue", "lmagenta", "lcyan", "white"
	};

const ColorIndex colorIndexTab[] = { DEFAULT, BLACK, RED, GREEN, 
		YELLOW, BLUE, MAGENTA, CYAN, LIGHT_GRAY, 
		DARK_GRAY, LIGHT_RED, LIGHT_GREEN, LIGHT_YELLOW, 
		LIGHT_BLUE, LIGHT_MAGENTA, LIGHT_CYAN, WHITE};

const int effectNumber = 8;
const char * const effects[] = { "bold", "dim", "italic", "underlined",
	"blink", "inverted", "hidden", "all"
	};

const EffectIndex effectIndexTab[] = {BOLD, DIM, ITALIC, 
		UNDERLINED, BLINK, INVERTED, HIDDEN, ALL};



void setColor(char * strColor)
{
	int i = 0;
	while(i < colorNumber && strcmp(strColor, colors[i]) != 0)
	{ ++i; }
	if(i < colorNumber)
		cout << Color(colorIndexTab[i]);	
}

void setBackground(char * strColor)
{
	int i = 0;
	while(i < colorNumber && strcmp(strColor, colors[i]) != 0)
	{ ++i; }
	if(i < colorNumber)
		cout << Background(colorIndexTab[i]);
}

void setEffect(char * strEffect)
{
	int i = 0;
	while(i < effectNumber && strcmp(strEffect, effects[i]) != 0)
	{ ++i; }
	if(i < effectNumber)
		cout << Effect(effectIndexTab[i]);
}

void resetEffect(char * strReset)
{
	int i = 0;
	while(i < effectNumber && strcmp(strReset, effects[i]) != 0)
	{ ++i; }
	if(i < effectNumber)
		cout << ResetEffect(effectIndexTab[i]);
}

void reset()
{
	cout << Color(DEFAULT) << Background(DEFAULT)
		<< ResetEffect(ALL);
}

int main(int argc, char ** argv)
{
	//Do we need to reset parameters at the end of the program ?
	bool resetTerminal = true;
	bool doEndl = true;
	for(int i = 1; i < argc; ++i)
	{
		if(strcmp(argv[i], "--noreset") == 0)
		{
			resetTerminal = false;
		}
		else if(strcmp(argv[i], "--noendl") == 0)
		{
			doEndl = false;
		}
		else if(strcmp(argv[i], "-c") == 0 && i < argc - 1)
		{
			setColor(argv[++i]);	
		}
		else if(strcmp(argv[i], "-b") == 0 && i < argc - 1)
		{
			setBackground(argv[++i]);
		}
		else if(strcmp(argv[i], "-e") == 0 && i < argc - 1)
		{
			setEffect(argv[++i]);
		}
		else if(strcmp(argv[i], "-r") == 0 && i < argc - 1)
		{
			resetEffect(argv[++i]);
		}
		else
		{
			cout << argv[i];
		}
	}
	if(resetTerminal)
		reset();
	if(doEndl)
		cout << endl;
}
