/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:34:21 by mkardes           #+#    #+#             */
/*   Updated: 2022/12/21 15:34:22 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "< ClapTrap > default constructer called" << std::endl;
} 

ClapTrap::ClapTrap(std::string _name): name(_name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "< ClapTrap > - " << this->name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old)
{
    *this = old;
    std::cout << "< ClapTrap > - " << this->name << " copied." << std::endl;

}

ClapTrap::~ClapTrap()
{
    std::cout << "< ClapTrap > - " << this->name << " destructed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& old)
{
    this->name = old.name;
    this->HitPoints = old.HitPoints;
    this->EnergyPoints = old.EnergyPoints;
    this->AttackDamage = old.AttackDamage;
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0)
        return ;
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << "'s energy point run out!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << "(" << this->HitPoints << ") attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    this->EnergyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints == 0)
        return ;
    if (this->HitPoints <= amount )
    {
        std::cout << this->name << " is Dead :(" << std::endl;
        this->HitPoints = 0;
        return ;
    }
    std::cout << "ClapTrap " << this->name << "(" << this->HitPoints << ") takes " << amount << " points of damage!!" << std::endl;
    this->HitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoints == 0)
        return ;
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << "'s energy point run out!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << "(" << this->HitPoints << ") is repaird " << amount << " hitpoints points!" << std::endl;
    this->HitPoints += amount;
    this->EnergyPoints--;
}
