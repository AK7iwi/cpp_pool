/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:53:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 13:39:31 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{

    public:
        Cure(std::string const &type);
		Cure(Cure const &cpy);
        virtual ~Cure();
		Cure&	operator=(Cure const &rhs);
        
    	std::string const &getType() const; //Returns the materia type
		
    	virtual Cure* clone() const = 0;
    	virtual void use(ICharacter& target);
    
	protected:
};