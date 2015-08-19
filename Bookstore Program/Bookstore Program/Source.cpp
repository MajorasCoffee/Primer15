#include <iostream>
#include "Sales_item.h"

int main() {

	Sales_item total; // stores first and books of the same ISBN.
	
	if (std::cin >> total) {//get first book object.
		std::cout << "Next" << std::endl;
		Sales_item trans;
		while (std::cin >> trans) {// get line of book objects.
			if (total.isbn() == trans.isbn()) { // if the first book isbn = the first book object in the line, add them.
				total += trans;
			}
			else { // otherwise, print the first book object, and then make the first object = the first book object in the line, and then loop.
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl; // when loop exits, print the books added.
	}
	else { // error checking, make sure that a data type is entered.
		std::cerr << "Bad input, please restart the program." << std::endl;
		return -1;
		system("PAUSE");
	}
	
	system("PAUSE");
	return 0;
}