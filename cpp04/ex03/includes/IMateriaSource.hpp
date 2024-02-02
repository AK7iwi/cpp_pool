/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:01:01 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/02 15:00:02 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <string>
#include <iostream>

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learn_materia(AMateria*) = 0;
		virtual AMateria* create_materia(std::string const & type) = 0;
};