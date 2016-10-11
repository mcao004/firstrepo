#ifndef __ADD_HH__
#define __ADD_HH__

#include "Base.h"

class Add : public Base {
	protected:
		Base* a, b;
	public:
		Add(Base* x, Base* y) : a(x), b(y) {}
		double evaluate() { return a->evaluate() + b->evaluate(); };
};
#endif
