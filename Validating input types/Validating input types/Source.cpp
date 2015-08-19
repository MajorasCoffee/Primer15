#include <iostream>
#include <string>

int main() {
	auto age = 0;
	std::string name;
	std::string food;

	std::cout << "Please enter your name: " << std::flush;
	while (!(std::getline(std::cin, name))) {
		std::cout << "Please enter a name: " << std::flush;
		std::cin.clear();
		std::cin.ignore(sizeof(name), '\n');
	}
	
	std::cout << "Please enter your age: " << std::flush;
	while (!(std::cin >> age)) {
		std::cout << "Please enter a number: " << std::flush;
		std::cin.clear();
		std::cin.ignore(sizeof(age), '\n');
	}
	std::cin.ignore();

	std::cout << "Please enter your favourite food: " << std::flush;
	while (!(std::getline(std::cin, food))) {
		std::cout << "Please enter a type of food: " << std::flush;
		std::cin.clear();
		std::cin.ignore(sizeof(food), '\n');
	}

	std::cout << "your name is " << name << " " << std::endl;
	std::cout << "your age is " << age << " " << std::endl;
	std::cout << "your favourite food is " << food << " " << std::endl;

	system("PAUSE");
	return 0;
}