/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:54:15 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/23 21:14:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(std::string const &name);
		Character(Character const &cpy);
        ~Character();
		Character& operator=(Character const &rhs);

    	void				equip(AMateria *m);
    	void				unequip(uint8_t idx);
    	void				use(uint8_t idx, ICharacter &target);
		std::string const&	get_name() const;
	
	private:
		std::string	_name;
    	AMateria* 	_inventory[4];
};