/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:54:15 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 18:36:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Character
{

    public:
        Character();
		Character(Character const &cpy);
        virtual ~Character();
		Character&	operator=(Character const &rhs);
    
	protected:
};