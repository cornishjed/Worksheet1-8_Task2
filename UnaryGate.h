#ifndef UNARYGATE_H
#define UNARYGATE_H

#include "LogicGate.h"

class UnaryGate : public LogicGate
{
public:
	void setPin(bool);

protected:
	bool pin;
};

#endif // !UNARYGATE_H