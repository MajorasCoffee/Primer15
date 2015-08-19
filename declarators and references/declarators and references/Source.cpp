#include <iostream>

int main() {
	//int a = 5;
	//int b = 6;

	//int& c = a;
	//int* d = &c;// Ignore the pointers

	//std::cout << a << std::endl;
	//std::cout << c << std::endl;

	//std::cout << "Memory address = " << d << std::endl;

	//c = b;
	//d = &a;

	//std::cout << "Memory address = " << d << std::endl;

	//std::cout << c << std::endl;
	//std::cout << a << std::endl;

	int a = 5, &b = a;
	double c = 0, &d = c;
	d = b;
	a = d;
	b = c;

	std::cout << c << std::endl;
	std::cout << a << std::endl;

	system("PAUSE");
	return 0;
}