/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:34:27 by mkardes           #+#    #+#             */
/*   Updated: 2022/12/21 15:34:29 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string     name;
        unsigned int    HitPoints;
        unsigned int    EnergyPoints;
        unsigned int    AttackDamage;
    
    public:
        ClapTrap();
        ClapTrap(const ClapTrap& old);
        ClapTrap(std::string _name);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap& old);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
