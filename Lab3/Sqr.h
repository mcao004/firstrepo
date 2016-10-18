#ifndef __SQR_HH__
#define __SQR_HH__

#include "Base.h"

class Sqr : public Base {
	protected:
		Base* a;
	public:
		Sqr(Base* x);
		double evaluate();
};
#endif
