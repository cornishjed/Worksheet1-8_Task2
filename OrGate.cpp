#include "OrGate.h"

OrGate::OrGate()
{
}

OrGate::OrGate(bool pinA, bool pinB)
{
	setPinA(pinA);
	setPinB(pinB);
}

bool OrGate::performGateLogic()
{
	if (pinA == false && pinB == false)
		return false;
	else
		return true;
}
