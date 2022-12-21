/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:37:03 by mkardes           #+#    #+#             */
/*   Updated: 2022/12/21 15:37:04 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name): ScavTrap(_name), FragTrap(_name)
{
    this->name = _name;
    this->ClapTrap::name = _name + "_clab_name";
    
    FragTrap::HitPoints = 100;
    ScavTrap::EnergyPoints = 50;
    FragTrap::AttackDamage = 30;
    
    std::cout << "< DiamondTrap > - " << this->name << " constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& old): ScavTrap(old.name), FragTrap(old.name)
{
    std::cout << "< DiamondTrap > - " << this->name << " copied." << std::endl;
    *this = old;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "< DiamondTrap > - " << this->name << " destructed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& t)
{
    this->FragTrap::operator=(t);
    this->ScavTrap::operator=(t);
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am a DiamondTrap named " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}
