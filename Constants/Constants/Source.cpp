#include <iostream>
//#include "test.h"

//extern const int a = 5;

int main() {
	/*test a;

	const int b = 5;
	const int &c = b;*/

	//const int &a = 5;
	//int b = 6;
	//const int &c = b;
	////c = 8;//illegal
	//int &d = b;
	//d = 8;//legal
	////int &d = a; illegal
	//const int &e = d;

	//const double pi = 3.14;

	//// double *pO = &pi; //not constant

	//const double *cPO = &pi;

	//// *cPO = 0;//illegal, can't modify constant object

	int a = 5;

	const int *b = &a;



	std::cout << *b << std::endl;
	a = 10;
	std::cout << *b << std::endl;

	system("PAUSE");
	return 0;
}