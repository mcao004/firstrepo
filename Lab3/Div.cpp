#ifndef __DIV_HH__
#define __DIV_HH__

#include "Base.h"

class Div : public Base {
	protected:
		Base* a, b;
	public:
		Div(Base* x, Base* y) : a(x), b(y) {};
		double evaluate() { return (a->evaluate()) / (b->evaluate()); };
};

#endif
