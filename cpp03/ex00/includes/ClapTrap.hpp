/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:26:47 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 09:46:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap 
{
    public:
        ClapTrap(std::string const &name);
        ClapTrap(ClapTrap const &cpy);
        ~ClapTrap();
		ClapTrap&	operator=(ClapTrap const &rhs);

        void    attack(const std::string& target);
        void    take_damage(unsigned int amount);
        void    be_repaired(unsigned int amount);
        
    private:
        std::string     _name;
        unsigned int    _hit_points;
        unsigned int    _energy_points;
        unsigned int    _attack_damage;
};