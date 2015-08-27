#include <iostream>

int main() {
	/* It is good a good programming convention to write points like shown below
	/* where the '*' point-to operator is placed next to the variable name so as
	/* to not mislead people into thinking the that the whole statement is of that
	/* type. So -- MISLEADING (int* a = nullptr, b = 5, * c = &b;)	*/

	/*int a = 5, *b = &a, **c = &b, ***d = &c, ****e = &d, *****f = &e;
	*****f = *****f * *****f;

	std::cout << "Yo dawg, I heard you like pointers \n\n"
		"So we made your pointer point to a pointer that\n"
		"points to a pointer that points to a pointer that\n"
		"points to a pointer.\n" << std::endl;
	
	if (b) {
		std::cout << a << std::endl;
	}*/

	int a = 5, *b = &a, **c = &b, ***d = &c, *&e = **d;

	std::cout << *e << std::endl;

	system("PAUSE");
	return 0;
}