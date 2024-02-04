/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:01:08 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:10:25 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <string>
#include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual	~ICharacter() {}
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;
		virtual std::string const&	get_name() const = 0;
};