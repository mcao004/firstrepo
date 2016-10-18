#ifndef __CONTAINER_HH__
#define __CONTAINER_HH__

#include "Base.h"
class Sort;
#include <exception>
#include <iostream>

using namespace std;

class Container {
	protected:
		Sort* sort_function;

	public:
		/* Constructors*/
		Container() : sort_function(NULL) {};
		Container(Sort* function) : sort_function(function) {};

		/* Non Virtual Functions */
		void set_sort_function(Sort* sort_function) {
			this->sort_function = sort_function;
		}
		// set the type of the sorting algorithm

		/* Pure Virtual Functions */
		// push the top pointer ofthe tree into container
		virtual void add_element(Base* element) = 0;
		// iterate throught trees and output values
		virtual void print() = 0;
		// calss on the previously set sorting-algorithm. Chekcs if sort_function is not null, throw exception if otheriwse
		virtual void sort() = 0;

		/* Essentially the only functions needed to sort */
		//switch tree locations
		virtual void swap(int i, int j) = 0;
		// get top ptr of tree at index i
		virtual Base* at(int i) = 0;
		// return container size
		virtual int size() = 0;
};
#endif
