#ifndef __OP_HH__
#define __OP_HH__

#include "Base.h"

class Op: public Base {
	protected:
		double value;
	public: 
		Op(double v) : value(v) {};
		double evaluate() {
			return value;
		};
};
#endif
