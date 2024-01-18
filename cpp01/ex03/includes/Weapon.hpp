/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:44:26 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/18 13:29:39 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon 
{
    public:
		Weapon(std::string type);
		Weapon(Weapon const &cpy);
		~Weapon();
		Weapon	&operator=(Weapon const &rhs);
		
		const std::string	&getType() const;
		void				setType(std::string type);

	private:
		std::string	_type;
};
