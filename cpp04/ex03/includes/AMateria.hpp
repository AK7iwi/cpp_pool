/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:50:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:09:29 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <string>
#include <iostream>
#include <stdint.h>

class ICharacter;

class AMateria
{
    public:
        AMateria(std::string const &type);
		AMateria(AMateria const &cpy);
        virtual	~AMateria();
		AMateria& operator=(AMateria const &rhs);
        
    	virtual AMateria*	clone() const = 0;
    	virtual void		use(ICharacter &target);
    	std::string const&	get_type() const;
    
	protected:
		std::string _type;	
};