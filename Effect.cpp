#include "Effect.h"

using namespace std;

Effect::Effect(EffectIndex index) : effectIndex(index) { }

ostream & operator << (ostream & out, const Effect & effect)
{
	out << EFFECTS[effect.effectIndex];
	return out;
}
