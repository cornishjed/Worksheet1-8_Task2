#ifndef ORGATE_H
#define ORGATE_H
#include "BinaryGate.h"

class OrGate : public BinaryGate
{
public:
	OrGate();
	OrGate(bool, bool);
	virtual bool performGateLogic();
};

#endif // ! ORGATE_H