#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
	int		i = 0;
	Zombie		*z = new Zombie[N];
	while (i < N)
	{
		z[i].setName(name);
		i++;
	}
	return z;
}
