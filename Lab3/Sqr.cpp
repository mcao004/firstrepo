#ifndef __SQR_HH__
#define __SQR_HH__

#include "Base.h"
#include <cmath>

class Sqr : public Base {
	protected:
		Base* a;
	public:
		Sqr(Base* x) : a(x) {};
		double evaluate() { return sqrt(*a); };
};
#endif
