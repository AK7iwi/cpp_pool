/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:26:47 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/05 11:33:49 by mfeldman         ###   ########.fr       */
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
        virtual ~ClapTrap();
		ClapTrap& operator=(ClapTrap const &rhs);

        virtual	void    attack(std::string const &target);
        void    		take_damage(unsigned int amount);
        void			be_repaired(unsigned int amount);
        
    protected:
        std::string     _name;
        unsigned int    _hit_points;
        unsigned int    _energy_points;
        unsigned int    _attack_damage;
};