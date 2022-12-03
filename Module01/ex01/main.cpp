#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie *zom = ZombieHorde(20,"Zombie");
	
	int i = 0;
	while(i < 20)
	{
		zom[i].announce();
		i++;
	}
	delete [] zom;
}
