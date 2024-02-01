/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:50:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 12:50:46 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class AMateria
{

    public:
        AMateria(std::string const &type);
        
    	std::string const & getType() const; //Returns the materia type
		
    	virtual AMateria* clone() const = 0;
    	virtual void use(ICharacter& target);
    
	protected:
};