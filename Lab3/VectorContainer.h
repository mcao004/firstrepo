#ifndef __VECTORCONTAINER_HH__
#define __VECTORCONTAINER_HH__

#include <vector>
#include "Container.h"

class VectorContainer: public Container {
	protected:
		vector<Base*> v;
		// Sort* sort_function (how it will be sorted)
	public:
		VectorContainer();
		VectorContainer(Sort* function);
		void add_element(Base* element);
		void print();
		void sort();
		void swap(int i, int j);
		Base* at(int i );
		int size();
};
#endif
