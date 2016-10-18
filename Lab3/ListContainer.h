#ifndef __LISTCONTAINER_HH__
#define __LISTCONTAINER_HH__

#include "Container.h"

struct Tree {
	Base* data;
	Tree* next;
	Tree* prev;

	/*constructor*/
	Tree (Base* r) : data(r), next(0), prev(0) {}
};

class ListContainer : public Container {
	private:
		Tree* begin;
		Tree* end;
		int sz;
	public:
		/*constructors*/
		ListContainer();
		~ListContainer();
		void add_element(Base* element);
		void print();
		void sort();
		void swap(int i, int j); 
		Base* at(int i);
		int size();
};
#endif
