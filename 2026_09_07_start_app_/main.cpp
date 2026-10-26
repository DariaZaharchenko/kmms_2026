#include <iostream>
#include <string>

int main() {
	std::cout << "Привет, мир!";
	std::string str;
	std::getline(std::cin, str);
	std::cout << str << std::endl;
}