#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "pointer: " << *ptr << std::endl;
	std::cout << "reference: " << ref << std::endl;

	// ref = "str has changed by ref!";
	// std::cout << str << std::endl;

	// *ptr = "str has changed by ptr!";
	// std::cout << str << std::endl;
}
