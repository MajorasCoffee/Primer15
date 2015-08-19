#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, int> ages;
	
	ages["bob"] = 15;
	ages["dylan"] = 21;
	ages["vikky"] = 21;

	std::cout << ages["dylan"] << std::endl;

	std::map<std::string, int>::iterator it;
	it = ages.find("dylan");

	if (it != ages.end()) {
		std::cout << it->first << std::endl;
		ages.erase(it);
	}
	else {
		std::cout << "Key not found" << std::endl;
	}

	for (std::map <std::string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		std::cout << it->first << ": " << it->second << std::endl;
	}

	system("PAUSE");
	return 0;
}