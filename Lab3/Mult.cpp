
#include "Mult.h"

Mult::Mult(Base* x, Base* y)
: a(x), b(y)
{}

double Mult::evaluate() {
	return (a->evaluate()) * (b->evaluate());
}
