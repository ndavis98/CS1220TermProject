// Author:  Alex McNeil
// Date:    4/10/2018
// Purpose: Header file for Wire class
#include <string>
#include "GateClass.h"
#ifndef WIRE_H
#define WIRE_H
using namespace std;

class Wire{
	public:
		Wire();
		Wire(int value, string name, int index, Gate *history, vector <Gate *>);
		int setValue(const int &value);
		string setName(const string &name);
		int setIndex(const int &index);
		Gate setHistory(const Gate &history);
		vector setOutPut(const Gate &Gate)
	protected:

	private:
		int value;
		string name;
		int index;
		Gate* history; //this is the input to the wire
		vector <Gate *> out;
};
#endif //WIRE_H
