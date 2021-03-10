#include "XORGate.h"

XORGate::XORGate()
{
}

XORGate::XORGate(bool pinA, bool pinB)
{
	setPinA(pinA);
	setPinB(pinB);
}

bool XORGate::performGateLogic()
{
	if (pinA == pinB)
		return false;
	else if ((pinA || pinB) == false)
		return false;
	else
		return true;
}