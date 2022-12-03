#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);
};

Zombie*	ZombieHorde(int N, std::string name);

#endif
