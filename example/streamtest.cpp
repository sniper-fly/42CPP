#include <sstream>
#include <iostream>

class hoge
{
	public:
		std::string aa(void)
		{
			std::stringstream ss;

			ss << this << "\n0x" << std::hex << std::uppercase << (uintptr_t)this;
			return (ss.str());
		}
};

int main(void)
{
	hoge a;

	std::cout << a.aa() << std::endl;

	return (0);
}
