
#include "Div.h"

Div::Div(Base* x, Base* y)
: a(x), b(y)
{}

double Div::evaluate() {
	return (a->evaluate()) / (b->evaluate());
}
