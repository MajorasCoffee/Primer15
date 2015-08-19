#include <iostream>

int b;

int main() {
	//int a(0);
	//int a = 0;
	//int a{ 0 };
	//int a = { 0 };

	long double a = 3.1415926536;
	int b(a), c = a;
	std::cout << ::b << std::endl;//scope operator
	std::cout << b << std::endl;

	double salary, wage;
	salary = wage = 9999.99;
	system("PAUSE");
	return 0;
}