#include <iostream>

int main() {
	int num = 0;
	int total = 0;
	std::cout << "Enter some numbers: " << std::flush;
	while (std::cin >> num) {
		total += num;
	}
	std::cout << total << std::endl;
}