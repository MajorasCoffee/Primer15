#include <iostream>

int main() {

	//int i = 0, &r = i;
	//auto a = r;

	//const int ci = i, &cr = ci;

	//auto b = ci;
	//auto c = cr;
	//auto d = &i;
	//auto e = &ci;

	//auto &g = ci;


	//a = 42;
	//b = 42;
	//c = 42;

	////d = 42;
	////e = 42;
	////g = 42;


	//const int i = 42;

	/*
	//auto j = i;
	//const auto &k = i;
	//auto *p = &i;
	//const auto j2 = i, &k2 = i;
	*/

	//int j = i;
	//const int &k = i;
	//int const *p = &i;
	//const int j2 = i, &k2 = i;

	/*int a = 7;

	decltype(a) b = a;

	std::cout << typeid(b).name() << std::endl;*/

	//int i = 42, *p = &i, &r = i;
	//using decltype is different to what we're use to, decltype(r) yields a reference instead of the object to which is references
	//decltype(r) b; //r is a reference so b needs to be initialized
	//decltype(*p) c; //*p points to a reference therefore c is of type int& and needs initialization.

	//int i = 42;

	//decltype(i) a; // i is a variable and is treated as such because of the single parentheses
	//decltype((i)) b; // i in this case is treated as a reference because of the double parentheses and therefore needs initialization

	//int a = 5;

	//decltype(a) b = a;
	//decltype((a)) c = a;

	//++b;
	//++c;

	//std::cout << b << c << std::endl;
	/*int a = 5;
	decltype (a) b;*/

	system("PAUSE");
	return 0;
}