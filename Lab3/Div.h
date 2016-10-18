#ifndef __DIV_HH__
#define __DIV_HH__

#include "Base.h"

class Div : public Base {
	protected:
		Base* a;
		Base* b;
	public:
		Div (Base* x, Base* y);
		double evaluate();
};
#endif
