
#include "SelectionSort.h"

/*SelectionSort::SelectionSort()
:Sort()
{}*/

void SelectionSort::sort(Container* container) {
	for (int i = 0; i < container->size(); i++ ) {
		double smallestVal = (container->at(i))->evaluate();
		int smallestIndex = i;

		for (int j = i+1; j < container->size(); j++) {
			if( smallestVal > container->at(j)->evaluate()) {
				// update the value and index of smallest
				smallestVal = container->at(j)->evaluate();
				smallestIndex = j;
			}
		}
		container->swap(i, smallestIndex);
	}
}

