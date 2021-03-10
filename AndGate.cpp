#include "AndGate.h"

AndGate::AndGate()
{
}

AndGate::AndGate(bool pinA, bool pinB)
{
	setPinA(pinA);
	setPinB(pinB);
}

bool AndGate::performGateLogic()
{
	if ((pinA && pinB) == true)
		return true;
	else if ((pinA && pinB) == false)
		return false;
	else
		return false;
}