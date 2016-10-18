
#include "Op.h"

Op::Op(double v)
:value(v)
{}

double Op::evaluate() {
	return value;
}
