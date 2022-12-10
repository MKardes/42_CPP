#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}

std::string	Weapon::getType(void)
{
	return (this->type);
}
