#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon&		weap;
		std::string	name;

	public:
		HumanA(std::string name, Weapon& weap);
		void	attack();
};

#endif
