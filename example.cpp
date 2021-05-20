#include <iomanip>
#include <iostream>

void set_example(void)
{
	std::string greeting = "hello_world!!!hey_hey!!";

	std::cout << "[" << std::setw(20) << "hello" << "]" << std::endl;
	std::cout << "[" << std::setw(20) << std::setfill('0') << "hello" << "]" << std::endl;
	std::cout << "[" << std::left << std::setw(20) << std::setfill('0') 
	<< "hello" << "]" << std::endl;
	std::cout << greeting.substr(0, 9) << ".";
}

int main(void)
{
	set_example();
}
