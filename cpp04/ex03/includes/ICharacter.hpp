/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:01:08 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/07 15:11:23 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <string>
#include <iostream>
#include <stdint.h>

class AMateria;

class ICharacter
{
	public:
		virtual	~ICharacter() {}
		virtual void				equip(AMateria *m) = 0;
		virtual void				unequip(uint8_t idx) = 0;
		virtual void				use(uint8_t idx, ICharacter &target) = 0;
		virtual std::string const&	get_name() const = 0;
};