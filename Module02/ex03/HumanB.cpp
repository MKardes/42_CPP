#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	this->name = _name;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weap->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& _weap)
{
	this->weap = &_weap;
}
