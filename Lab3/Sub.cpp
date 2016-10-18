
#include "Sub.h"

Sub::Sub(Base* x, Base* y)
: a(x), b(y)
{}

double Sub::evaluate()
{ 
	return (a->evaluate()) - (b->evaluate());
};

