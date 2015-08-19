#include <iostream>

int main() {

	//std::cout << "this is a concatenated \n"
	//	"string literal, otherwise "
	//	"called \na multiline string "
	//	"literal." << std::endl;

	//ascii code, written in hex and octal escape sequences

	std::cout << "\x47\141\x62\142\x79\041" << std::endl;
	std::cout << 1E-3F << std::endl;
	std::cout << u8"hi!" << std::endl; 
	std::cout << "\x32\115\n" << std::endl;
	std::cout << "\x32\t\115\n" << std::endl;
	system("PAUSE");
	return 0;
}