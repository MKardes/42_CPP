/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:34:37 by mkardes           #+#    #+#             */
/*   Updated: 2022/12/21 15:34:38 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;

    std::cout << "< ScavTrap > - " << this->name << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& t)
{
    std::cout << "< ScavTrap > - " << this->name << " copied." << std::endl;
    *this = t;
}

ScavTrap::~ScavTrap()
{
    std::cout << "< ScavTrap > - " << this->name << " destructed." << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0)
        return ;
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << "'s energy point run out!!" << std::endl;
        return ;
    }
    std::cout << "SlapTrap " << this->name << "(" << this->HitPoints << ") attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    this->EnergyPoints--;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& old)
{
    this->name = old.name;
    this->HitPoints = old.HitPoints;
    this->EnergyPoints = old.EnergyPoints;
    this->AttackDamage = old.AttackDamage;
    return *this;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " (" << this->HitPoints << ") is now in Gate keeper mode." << std::endl;
}
