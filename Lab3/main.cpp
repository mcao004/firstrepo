// Authors: Marvin Cao, Tamir Habari

#include <iostream>
#include "Sqr.cpp"
#include "Sub.cpp"
#include "Add.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Op.cpp"
#include "SelectionSort.cpp"
#include "BubbleSort.cpp"
#include "VectorContainer.cpp"
#include "ListContainer.cpp"

using namespace std;

int main() {
	Op* op7 = new Op(7);
	Op* op6 = new Op(6);
	Op* op5 = new Op(5);
	Op* op4 = new Op(4);
	Op* op3 = new Op(3);
	Op* op2 = new Op(2);
	Op* op1 = new Op(1);

	Mult* A = new Mult(op7, op4);
	cout << "7 * 4 = " << A->evaluate() << endl;
	Add* B = new Add(op3, A);
	cout << " + 3 = " << B->evaluate() << endl;
	Sub* C = new Sub(B, op2);
	cout << " - 2 = " << C->evaluate() << endl;
	Sqr* D = new Sqr(C);
	cout << "Sqrt( RESULT) = " << D->evaluate() << endl;

	//1+2*3-4 = 3
	Mult* E = new Mult(op2, op3);
	cout << "2 * 3 = " << E->evaluate() << endl;
	Add* F = new Add(op1, E);
	cout << " + 1 = " << F->evaluate() << endl;
	Sub* G = new Sub(F, op4);
	cout << " - 4 = " << G->evaluate() << endl;
	Div* H = new Div(G, op3);
	cout << " / 3 = " << H->evaluate() << endl;
	
	VectorContainer* container = new VectorContainer();
	container->add_element(A);
	container->add_element(B);
	container->add_element(C);
	container->add_element(D);
	container->add_element(E);
	container->add_element(F);
	container->add_element(G);
	container->add_element(H);

	cout << "Container Before Sort: " << endl;
	container->print();

	cout << "Container After Sort: " << endl;
	container->set_sort_function(new BubbleSort());
	container->sort();
	container->print();
};
