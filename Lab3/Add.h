#ifndef __ADD_HH__
#define __ADD_HH__

#include "Base.h"

class Add: public Base {
	protected:
		Base* a;
		Base* b;
	public:
		Add(Base* x, Base* y);
		double evaluate();
};
#endif
