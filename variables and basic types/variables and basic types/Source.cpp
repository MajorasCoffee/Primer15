#include <iostream>

int main() {

	//const int a = 5;
	//const int b = 10;
	//int c = 15;
	//int d = 20;

	//const int *e = &a;
	//e = &b;//Can't modify a pointer that is const.

	//const int *const f = &a;
	////f = &b;//Can't modify a pointer that is const.

	//int *g = &c;
	//g = &d;//Can't modify a pointer that is const.

	//int *const h = &c;
	////h = &d;//Can't modify a pointer that is const.

	//const int a = 5, b = 10;//Both A and B's base type are of type const int.
	//const int a = 5, *b = &a;//Both A and B's base type are of type const int, B can point to other objects of base type const int.
	//int a = 5, const b = 10; //Invalid, const b is not valid declarator.
	//int const a = 10; //Vaild because it is part of the declarator.
	//int a = 10, *const b = &a;//Vaild because *const together forms a const pointer
	//int a = 5;

	//const int *const b = &a;
	//const int *c = b;

	//const int d = 5;
	//int e = d;

	int a = 5;
	int *c = &a;
	const int *b = c;

	


	system("PAUSE");
	return 0;
}