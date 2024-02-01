/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:50:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 13:32:30 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <string>

class AMateria
{

    public:
        AMateria(std::string const &type);
		AMateria(AMateria const &cpy);
        virtual ~AMateria();
		AMateria&	operator=(AMateria const &rhs);
        
    	std::string const &getType() const; //Returns the materia type
		
    	virtual AMateria* clone() const = 0;
    	virtual void use(ICharacter& target);
    
	protected:
};