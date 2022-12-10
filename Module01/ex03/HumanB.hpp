#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon*		weap;
		std::string	name;

	public:
		HumanB(std::string _name);
		void	attack();
		void	setWeapon(Weapon& a);
};

#endif
