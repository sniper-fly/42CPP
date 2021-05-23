#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony	*teio;
	teio = new Pony("Tokai Teio", "Spica");
	teio->introduce();
	delete teio;
}

void ponyOnTheStack(void)
{
	Pony	double_jet("Twin Turbo", "Canopus");
	double_jet.introduce();
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
