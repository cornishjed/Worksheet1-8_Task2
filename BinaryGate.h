#ifndef BINARYGATE_H
#define BINARYGATE_H

#include "LogicGate.h"

class BinaryGate : public LogicGate
{
public:
	void setPinA(bool);
	void setPinB(bool);

protected:
	bool pinA;
	bool pinB;
};

#endif // !BINARYGATE_H