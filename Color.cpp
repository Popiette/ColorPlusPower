#include "Color.h"

using namespace std;

Color::Color(ColorIndex color) : colorIndex(color) { }

ostream & operator << (ostream & out, const Color & color)
{
	out << COLORS[color.colorIndex];
       	return out;	
}
