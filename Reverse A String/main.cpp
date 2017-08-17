#include <iostream>
#include <string>

int main() {

	int option;

	std::cout << "====================================" << std::endl;
	std::cout << "=       Reverse String Menu		=" << std::endl;
	std::cout << "====================================" << std::endl;
	std::cout << std::endl;

	std::string word;
	int lenght;
	std::cout << std::endl;
	std::cout << "Enter String: ";
	std::cin >> word;
	lenght = word.length()-1;
		

	std::cout << "Reversed word: ";
	for (int i = 0; i < word.length(); i++) {
	std::cout << word[lenght];
	lenght--;
	}


	return 0;
}