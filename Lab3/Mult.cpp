#ifndef __MULT__HH__
#define __MULT__HH__

#include "Base.h"

class Mult: public Base {
	protected:
		Base* a, b;
	public:
		Mult(Base* x, Base* y) : a(x), b(y) {};
		double evaluate() { return (a->evaluate()) * (b->evaluate()); };
};

#endif
