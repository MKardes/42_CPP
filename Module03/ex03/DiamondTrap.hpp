/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:37:07 by mkardes           #+#    #+#             */
/*   Updated: 2022/12/21 15:37:08 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
    private:
        std::string name;

    public:
        DiamondTrap(std::string _name);
        DiamondTrap(const DiamondTrap& t);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& t);

        using ScavTrap::attack;
        void    whoAmI();
};

#endif
