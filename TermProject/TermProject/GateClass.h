// Author:  Alex McNeil
// Date:    4/10/2018
// Purpose: Header file for Gate class
#include <string>
#include "WireClass.h"
#ifndef Gate_H
#define Gate_H
using namespace std;

class Gate {
	public:
		Gate();//default constructor
		Gate(string name, int Delay, Wire In1, Wire In2, Wire outPut); //specified constructor
		string setName(const string name);
		int  setDelay(const int delay);
		char setIn1(const char in1);
		char setIn2(const char in1);
		char setOutPut(const char outPut);


	protected:

	private:
		string type;
		int delay;
		Wire in1;
		Wire in2;
		Wire outPut;


};
#endif //Gate_H
