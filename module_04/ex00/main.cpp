#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Buddy.hpp"

void foo(void)
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	Buddy *bart = new Buddy("Bart");
	Victim *buddy = new Buddy("Buddy");

	std::cout << robert << jim << joe << *bart << *buddy;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(*bart);
	robert.polymorph(*buddy);

	delete bart;
	delete buddy;
}

int main(void)
{
	foo();
	while (1);

	return (0);
}