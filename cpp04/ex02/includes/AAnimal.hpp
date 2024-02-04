/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:58:37 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:58:49 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stdint.h>

class AAnimal 
{
	public:
    	AAnimal();
		AAnimal(std::string const &type);
        AAnimal(AAnimal const &cpy);
        virtual ~AAnimal();
		AAnimal& operator=(AAnimal const &rhs);

		virtual void	make_sound(void) const = 0;
		std::string		get_type() const;

	protected:
    	std::string		_type;
};