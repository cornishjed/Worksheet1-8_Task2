#include <iostream>
#include "AndGate.h"
#include "OrGate.h"
#include "NotGate.h"
#include "XORGate.h"
using namespace std;

void task2TruthTable(bool &, bool &);
void validateTruthTable(const bool &, const bool &);
void boolToChar(const bool &);

int main()
{
	char negation = 170;
	cout << "Z = (" << negation << "A^B)v(A^" << negation << "B)" << endl;

	cout << endl;
	cout << "\tA\t|\tB\t|\t(" << negation << "A^B)\t|\t(A^"<< negation << "B)\t|\tZ" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;

	//first row
	bool a = true;
	bool b = true;
	task2TruthTable(a, b);

	//second row
	a = true;
	b = false;
	task2TruthTable(a, b);

	//third row
	a = false;
	b = true;
	task2TruthTable(a, b);

	//fourth row
	a = false;
	b = false;
	task2TruthTable(a, b);

	cout << endl;

	//using XOR to validate truth table
	cout << "Z = A XOR B" << endl;

	cout << endl;
	cout << "\tA\t|\tB\t|\tZ" << endl;
	cout << "------------------------------------------------" << endl;

	//first row
	a = true;
	b = true;
	validateTruthTable(a, b);

	//second row
	a = true;
	b = false;
	validateTruthTable(a, b);

	//third row
	a = false;
	b = true;
	validateTruthTable(a, b);

	//fourth row
	a = false;
	b = false;
	validateTruthTable(a, b);

	cout << endl;

	return 0;
}

void task2TruthTable(bool &a, bool &b)
{
	AndGate ag;
	NotGate ng;
	OrGate og;
	bool a1 = a; //original value

	//initial values
	cout << "\t";
	boolToChar(a);
	cout << "\t|\t";
	boolToChar(b);

	//first AndGate
	ng.setPin(a);
	a = ng.performGateLogic(); //'a' is negated
	ag.setPinA(a);
	ag.setPinB(b);
	bool and1 = ag.performGateLogic();
	cout << "\t|\t";
	boolToChar(and1);

	//second AndGate
	ng.setPin(b);
	b = ng.performGateLogic();
	ag.setPinA(a1); //original (non-negated) value of 'a'
	ag.setPinB(b);
	bool and2 = ag.performGateLogic();
	cout << "\t|\t";
	boolToChar(and2);

	//OrGate
	og.setPinA(and1);
	og.setPinB(and2);
	bool z = og.performGateLogic();

	//result
	cout << "\t|\t";
	boolToChar(z);
	cout << endl;
}

void validateTruthTable(const bool &a, const bool &b)
{
	XORGate xog;

	//initial values
	cout << "\t";
	boolToChar(a);
	cout << "\t|\t";
	boolToChar(b);

	//XORGate
	xog.setPinA(a);
	xog.setPinB(b);
	bool z = xog.performGateLogic();

	//result
	cout << "\t|\t";
	boolToChar(z);
	cout << endl;
}

void boolToChar(const bool &n)
{
	if (n == true)
		cout << "T";
	else
		cout << "F";
}