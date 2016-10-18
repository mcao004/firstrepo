
#include "BubbleSort.h"

void BubbleSort::sort(Container* container) {
	if (container->size() > 1) {// sortable container
		int j = 1;
		bool swapped = false;
		do {
			swapped = false;
			for(int i = 0; i+1 < container->size(); i++) {
				j = i + 1;	
				// end initialization

				if (container->at(i)->evaluate() > container->at(j)->evaluate() ) { 
					container->swap(i,j);
					if (!swapped)
						swapped = true;
				}
			}
		// continue to sort until no longer need to swap	
		} while (swapped);
	}
}

