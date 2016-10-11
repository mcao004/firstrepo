// Authors: Marvin Cao, Tamir Habari

#include <iostream>
#include "Sqr.cpp"
#include "Sub.cpp"
#include "Add.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Op.cpp"

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
	cout << "7 * 4 = " << A.evaluate() << endl;
	Add* B = new Add(op3, A);
	cout << " + 3 = " << B.evaluate() << endl;
	Sub* C = new Sub(B, op2);
	cout << " - 2 = " << C.evaluate() << endl;
	Sqr* D = new Sqr(C);
	cout << "Sqrt( RESULT) = " << D.evaluate() << endl;

	//1+2*3-4 = 3
	Mult* E = new Mult(op2, op3);
	Add* F = new Add(op1, E);
	Sub* G = new Sub(F, op4);
	cout << "1+2*3-4 =" << G.evaluate() << endl;
	
	/*VectorContainer* container = new VectorContainer();
	container->add_element(A);
	container->add_element(B);
	container->add_element(C);
	container->add_element(D);

	cout << "Container Before Sort: " << endl;
	container->print();

	cout << "Container After Sort: " << endl;
	container->set_sort_function(new SelectionSort());
	container->sort();
	container->print();*/
};
