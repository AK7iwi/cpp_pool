/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:58:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/02 15:04:56 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
		MateriaSource(MateriaSource const &cpy);
        virtual ~MateriaSource();
		MateriaSource&	operator=(MateriaSource const &rhs);

		void learn_materia(AMateria* m);
    	AMateria* create_materia(const std::string& type);
		
	private:
    	AMateria* _learned_materias[4];
};