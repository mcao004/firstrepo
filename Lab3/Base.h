#ifndef __BASE_HH__
#define __BASE_HH__

class Base {
public:
	/* Constructors */
	Base() { };

	/*Pure Virtual Functions */
	virtual double evaluate() = 0;
};
#endif
