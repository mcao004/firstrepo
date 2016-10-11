#ifndef __SUB_HH__
#define __SUB_HH__

#include "Base.h"

class Sub : public Base {
	protected: 
		Base* a, b;
	public:
		Sub(Base* x, Base* y) : a(x), b(y) {}
		double evaluate() { return (a->evaluate()) - (b->evaluate()); };
};
#endif
