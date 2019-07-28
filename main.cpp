#include <iostream>
#include <cstring>
#include <string>
#include <tclap/CmdLine.h>
using namespace std;

#include "Color.h"
#include "Background.h"
#include "Effect.h"
#include "ResetEffect.h"

const int colorNumber = 17;
const string colors[] = { "default", "black", "red", "green", 
	"yellow", "blue", "magenta", "cyan", "lgray", "dgray", "lred", 
	"lgreen", "lyellow", "lblue", "lmagenta", "lcyan", "white"
	};

const ColorIndex colorIndexTab[] = { DEFAULT, BLACK, RED, GREEN, 
		YELLOW, BLUE, MAGENTA, CYAN, LIGHT_GRAY, 
		DARK_GRAY, LIGHT_RED, LIGHT_GREEN, LIGHT_YELLOW, 
		LIGHT_BLUE, LIGHT_MAGENTA, LIGHT_CYAN, WHITE};

const int effectNumber = 8;
const string effects[] = { "bold", "dim", "italic", "underlined",
	"blink", "inverted", "hidden", "all"
	};

const EffectIndex effectIndexTab[] = {BOLD, DIM, ITALIC, 
		UNDERLINED, BLINK, INVERTED, HIDDEN, ALL};



void setColor(const string &strColor)
{
	int i = 0;
	while(i < colorNumber && strColor != colors[i])
	{ ++i; }
	if(i < colorNumber)
		cout << Color(colorIndexTab[i]);	
}

void setBackground(const string &strColor)
{
	int i = 0;
	while(i < colorNumber && strColor != colors[i])
	{ ++i; }
	if(i < colorNumber)
		cout << Background(colorIndexTab[i]);
}

void setEffect(const string &strEffect)
{
	int i = 0;
	while(i < effectNumber && strEffect != effects[i])
	{ ++i; }
	if(i < effectNumber)
		cout << Effect(effectIndexTab[i]);
}

void resetEffect(const string &strReset)
{
	int i = 0;
	while(i < effectNumber && strReset != effects[i])
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
	TCLAP::CmdLine command("ColorPlusPower !", ' ', "0.9");
	TCLAP::ValueArg<string> colorArg("c", 
				"color", 
				"color to set", 
				false, 
				"default", 
				"string");
	command.add(colorArg);

	TCLAP::ValueArg<string> backgroundArg("b",
				"background",
				"background color to set",
				false,
				"default",
				"string");
	command.add(backgroundArg);

	TCLAP::ValueArg<string> effectArg("e",
				"effect",
				"effect to put on text",
				false,
				"default",
				"string");
	command.add(effectArg);

	TCLAP::ValueArg<string> resetEffectArg("r",
				"reset",
				"remove effect from text",
				false,
				"default",
				"string");
	command.add(resetEffectArg);

	TCLAP::SwitchArg resetTermSwitch("z",
				"noreset",
				"don't reset terminal properties when command finished",
				command,
				false);

	TCLAP::SwitchArg dontEndlSwitch("n",
				"noendl",
				"don't no line return when command finish",
				command,
				false);

	TCLAP::UnlabeledValueArg<string> textArg ("text", 
						"text to print",
						false,
						"default text",
						"nameString");

	command.add(textArg);

	command.parse(argc, argv);	
	//Do we need to reset parameters at the end of the program ?
	bool resetTerminal = ! resetTermSwitch.getValue();
	bool doEndl = ! dontEndlSwitch.getValue();

	string color = colorArg.getValue();
	string background = backgroundArg.getValue();
	string effect = effectArg.getValue();
	string resetEff = resetEffectArg.getValue();
	
	string text = textArg.getValue();

	setColor(color);
	setBackground(background);
	setEffect(effect);
	resetEffect(resetEff);
	
	cout << text;
	
	if(resetTerminal)
		reset();
	if(doEndl)
		cout << endl;
}
