#include "Background.h"

using namespace std;

Background::Background(ColorIndex index) : backgroundIndex(index) { }

ostream & operator << (ostream & out, const Background & background)
{
	out << BACKGROUNDS[background.backgroundIndex];
	return out;
}
