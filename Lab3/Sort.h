#ifndef __SORT_HH__
#define __SORT_HH__

class Container;

class Sort {
	public:
		/* Constructors */
		//Sort();

		/* Pure Virtual Function */
		virtual void sort(Container* container) = 0;
};
#endif
