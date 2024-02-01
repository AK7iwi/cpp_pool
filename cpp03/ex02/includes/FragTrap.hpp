/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:14:52 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 13:43:12 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
    public:
        FragTrap(std::string const &name);
        FragTrap(FragTrap const &cpy);
        ~FragTrap();
        FragTrap&	operator=(FragTrap const &rhs);
        
        void    high_fives_guys();
};