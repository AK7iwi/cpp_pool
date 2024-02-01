/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:58:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 18:38:45 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class MateriaSource
{
    public:
        MateriaSource();
		MateriaSource(MateriaSource const &cpy);
        virtual ~MateriaSource();
		MateriaSource&	operator=(MateriaSource const &rhs);
    
	protected:
};