#ifndef __MULT__HH__
#define __MULT__HH__

#include "Base.h"

class Mult: public Base {
	protected:
		Base* a;
		Base* b;
	public:
		Mult(Base* x, Base* y);
		double evaluate();
};

#endif
