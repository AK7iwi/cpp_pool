/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:53:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/23 21:15:02 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
		Ice(Ice const &cpy);
        ~Ice();
		Ice& operator=(Ice const &rhs);
		
    	Ice*	clone() const;
    	void	use(ICharacter &target);
};