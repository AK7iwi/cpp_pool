/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:53:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 14:04:56 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
		Cure(Cure const &cpy);
        virtual ~Cure();
		Cure&	operator=(Cure const &rhs);
		
    	Cure*	clone() const;
    	void	use(ICharacter &target);
    
};