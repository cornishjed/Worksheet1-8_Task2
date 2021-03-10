#include "NotGate.h"

NotGate::NotGate()
{
}

NotGate::NotGate(bool pin)
{
	setPin(pin);
}

bool NotGate::performGateLogic()
{
	if (pin == true)
		return false;
	else
		return true;
}