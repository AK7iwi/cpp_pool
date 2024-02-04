/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:54:15 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:59:25 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(std::string const &name);
		Character(Character const &cpy);
        virtual ~Character();
		Character& operator=(Character const &rhs);

    	void				equip(AMateria* m);
    	void				unequip(int idx);
    	void				use(int idx, ICharacter &target);
		std::string const&	get_name() const;
	
	private:
		std::string	_name;
    	AMateria* 	_inventory[4];
};