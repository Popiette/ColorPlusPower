#include "ResetEffect.h"

using namespace std;

ResetEffect::ResetEffect(EffectIndex index) : effectIndex(index) { }

ostream & operator << (ostream & out, const ResetEffect & reset)
{
	cout << RESET_EFFECTS[reset.effectIndex];

	return out;
}
