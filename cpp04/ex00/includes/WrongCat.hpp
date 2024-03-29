/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:10:55 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/23 21:06:16 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	public:
    	WrongCat();
        WrongCat(WrongCat const &cpy);
        ~WrongCat();
		WrongCat& operator=(WrongCat const &rhs);

		void	make_sound() const;
};