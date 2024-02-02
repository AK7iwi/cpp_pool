/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:53:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/02 16:08:09 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
		Ice(Ice const &cpy);
        virtual ~Ice();
		Ice&	operator=(Ice const &rhs);
		
    	Ice*	clone() const;
    	void	use(ICharacter &target);
};