/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:19:31 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:57:39 by mfeldman         ###   ########.fr       */
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

        void    attack(const std::string& target);
        void    guard_gate();
};