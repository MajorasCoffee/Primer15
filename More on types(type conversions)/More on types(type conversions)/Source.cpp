#include <iostream>

int main() {

	//bool a = 42;
	//int i = a;
	//std::cout << i << std::endl;
	//i = 3.14;
	//double pi = i;
	//std::cout << pi << std::endl;
	//unsigned char l = -1;
	//std::cout << (int)l << std::endl;
	//signed char n = 256;//undefined result as a char can only hold values of 0 - 255
	//std::cout << (int)n << std::endl;// this results in an error, but it is not known by the compiler
	//system("PAUSE");
	//return 0;

	//int a = 0;
	//if (a)
	//	std::cout << "f" << std::endl;

	/*int a = -42;
	unsigned b = 10;
	std::cout << a + a << std::endl;
	std::cout << b + a << std::endl;*/
	unsigned int a = 10, b = 42;
	int c = 10, d = 42;

	std::cout << a - b << std::endl;//converts int to unsigned and wraps 
	std::cout << c - a << std::endl;
	std::cout << a - c << std::endl;
	system("PAUSE");
	return 0;
}