#ifndef XORGATE_H
#define XORGATE_H

#include "BinaryGate.h"

class XORGate : public BinaryGate
{
public:
	XORGate();
	XORGate(bool, bool);
	virtual bool performGateLogic();
};

#endif // !XORGATE_H
