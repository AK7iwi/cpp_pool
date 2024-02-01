/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:58:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 13:38:40 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class MateriaSource
{
    public:
        MateriaSource(std::string const &type);
		MateriaSource(MateriaSource const &cpy);
        virtual ~MateriaSource();
		MateriaSource&	operator=(MateriaSource const &rhs);
    
	protected:
};