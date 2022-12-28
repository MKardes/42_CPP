/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:36:49 by mkardes           #+#    #+#             */
/*   Updated: 2022/12/21 15:36:50 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;

    std::cout << "< FragTrap > - " << this->name << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& t)
{
    std::cout << "< FragTrap > - " << this->name << " copied." << std::endl;
    *this = t;
}

FragTrap::~FragTrap()
{
    std::cout << "< FragTrap > - " << this->name << " destructed." << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (this->HitPoints == 0)
        return ;
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << "'s energy point run out!!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->name << "(" << this->HitPoints << ") high fives to everybody :: " << std::endl;
    this->EnergyPoints--;
}

FragTrap&   FragTrap::operator=(const FragTrap& old)
{
    this->name = old.name;
    this->HitPoints = old.HitPoints;
    this->EnergyPoints = old.EnergyPoints;
    this->AttackDamage = old.AttackDamage;
    return *this;
}
