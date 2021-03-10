#ifndef ANDGATE_H
#define ANDGATE_H

#include "BinaryGate.h"

class AndGate : public BinaryGate
{
public:
	AndGate();
	AndGate(bool, bool);
	virtual bool performGateLogic();
};

#endif // !ANDGATE_H