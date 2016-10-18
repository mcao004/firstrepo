
#include "Sqr.h"

Sqr::Sqr(Base* x)
: a(x)
{}

double Sqr::evaluate() {
	return (a->evaluate() * a->evaluate());
}
