/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:14:52 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 06:36:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
    public:
        FragTrap(std::string const &name);
        FragTrap(FragTrap const &cpy);
        virtual ~FragTrap();
        FragTrap&	operator=(FragTrap const &rhs);
		
        void    highFivesGuys();
};