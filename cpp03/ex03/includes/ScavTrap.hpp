/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:19:31 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/05 11:35:38 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap 
{
    public:
        ScavTrap(std::string const &name);
        ScavTrap(ScavTrap const &other);
        virtual ~ScavTrap();
        ScavTrap& operator=(ScavTrap const &rhs);

        void    attack(std::string const &target);
        void    guard_gate();
};