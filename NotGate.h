#ifndef NOTGATE_H
#define NOTGATE_H
#include "UnaryGate.h"

class NotGate : public UnaryGate
{
public:
	NotGate();
	NotGate(bool);
	virtual bool performGateLogic();
};

#endif // !NOTGATE_H