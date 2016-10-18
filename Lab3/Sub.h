#ifndef __SUB_HH__
#define __SUB_HH__

#include "Base.h"

class Sub: public Base {
	protected:
		Base* a;
		Base* b;
	public:
		Sub(Base* x, Base* y);
		double evaluate();
};
#endif
