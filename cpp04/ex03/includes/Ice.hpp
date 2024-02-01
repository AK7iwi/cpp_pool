/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:53:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 13:39:34 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{

    public:
        Ice(std::string const &type);
		Ice(Ice const &cpy);
        virtual ~Ice();
		Ice&	operator=(Ice const &rhs);
        
    	std::string const &getType() const; //Returns the materia type
		
    	virtual Ice* clone() const = 0;
    	virtual void use(ICharacter& target);
    
	protected:
};