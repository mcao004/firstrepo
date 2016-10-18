
#include "Add.h"	

Add::Add(Base* x, Base* y)
: a(x), b(y) 
{}

double Add::evaluate() {
	return a->evaluate() + b->evaluate();
}

