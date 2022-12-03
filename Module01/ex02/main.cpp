#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie *a = newZombie("Musab");
	Zombie *b = newZombie("Hafsa");
	Zombie *c = newZombie("Apo");

	a->announce();
	b->announce();
	c->announce();
	randomChump("Gulcin");
	delete a;
	delete b;
	delete c;
}
