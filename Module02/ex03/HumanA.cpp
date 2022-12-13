#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _weap): weap(_weap)
{
	this->name = _name;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weap.getType() << std::endl;
}
