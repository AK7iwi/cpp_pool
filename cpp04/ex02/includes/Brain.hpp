/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:54:53 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/23 21:09:16 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"

class Brain
{
	public:
    	Brain();
        Brain(Brain const &cpy);
        ~Brain();
		Brain& operator=(Brain const &rhs);

		std::string	get_ideas(uint8_t idx) const;
		void		set_ideas(uint8_t idx, std::string ideas);

	private:
		std::string	_ideas[100];
};