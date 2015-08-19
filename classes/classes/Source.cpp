#include <iostream>
#include "Sales_item.h"

int main() {

	Sales_item book1, book2;
	std::cin >> book1 >> book2;

	/*
	/* We're using a member function or "method" as some call it here.
	/* The left operand must be an object of type class, followed by the '.' operator.
	/* Then the right operand is the member function, followed by the Call operator '()'.
	/* The call operator is a possibly empty list of arguments, meaning you call list arguments if needed.
	*/

	if (book1.isbn() == book2.isbn()) {
		std::cout << book1 + book2 << std::endl;
	}
	else {
		std::cerr << "Error: ISBN numbers must match." << std::endl;
		system("PAUSE");
		return -1;
	}

	system("PAUSE");
	return 0;
}