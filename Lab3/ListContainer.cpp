
#include "ListContainer.h"

ListContainer::ListContainer()
:begin(0), end(0), sz(0)
{}

void ListContainer::add_element(Base* element) {
	Tree* temp = new Tree(element);
	if (begin == 0) // if first in list of trees, or empty trees
		begin = temp;
	else { // at least one tree already in list
		end->next = temp;
		temp->prev = end;
	}
	end = temp;
	sz++;
}

ListContainer::~ListContainer() {
	Tree* currTree = begin;
	Tree* next = 0;
	while (currTree != 0) {
		// since currTree is not 0, it has next
		next = currTree->next;
		
		delete currTree;

		currTree = next;
	}
}

void ListContainer::print() {
	if (begin == 0) {
		cout << "Nothing in tree" << endl;
		return;
	}
	Tree* temp = begin;
	while (temp != 0) {
		cout << temp->data ->evaluate();
		if (temp != end)
			cout << ", ";
		temp = temp->next;
	}cout << endl;
}

void ListContainer::sort() {
	sort_function->sort(this);
}

void ListContainer::swap(int i, int j) {
	if (i >= 0 && j >= 0 && i < size() && j < size() && i != j) { 
		// if non-negative and within the size and not equal
		Tree* ptrI = 0;
		Tree* ptrJ = 0;

		Tree* temp = begin; // pointer to current index
		int g = 0; // current index
		while (temp != 0) {
			if ( g == i)
				ptrI = temp;
			if ( g == j)
				ptrJ = temp;
			g++;
			temp = temp->next;
		}
		// swap the data between tree I and J
		Base* tempB = ptrI->data; // too lazy to make a distinctive name for temp
		ptrI->data = ptrJ->data;
		ptrJ->data = tempB;
		//done
	}
}

Base* ListContainer::at(int i ) {
	if (i < size()) {
		Tree* temp = begin;
		int j = 0;
		while (temp != 0) {
			if (j == i)
				return temp->data;
			j++;
			temp = temp->next;
		}
	}
}

int ListContainer::size() {
	return sz;
}

