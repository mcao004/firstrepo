
#include "VectorContainer.h"

VectorContainer::VectorContainer()
:Container()
{}

VectorContainer::VectorContainer(Sort* function)
:Container(function)
{}

void VectorContainer::add_element(Base* element) {
	v.push_back(element);
}

void VectorContainer::print() {
	for(int i = 0; i < v.size(); i++) {
		cout << v.at(i)->evaluate();
		if (i != v.size() -1)
			cout << ", ";
	} cout << endl;
}

void VectorContainer::sort() {
	try {
		if (!sort_function)
			throw std::invalid_argument( "Error: No Sort Function");
		sort_function->sort(this);
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
}

void VectorContainer::swap( int i , int j) {
	if (i != j) {
		Base* temp = v.at(i);
		v.at(i) = v.at(j);
		v.at(j) = temp;
	}
}

Base* VectorContainer::at(int i ) {
	return v.at(i);
}

int VectorContainer::size() {
	return v.size();
}
