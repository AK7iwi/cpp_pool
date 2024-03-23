/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:58:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/23 21:15:09 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
		MateriaSource(MateriaSource const &cpy);
        ~MateriaSource();
		MateriaSource& operator=(MateriaSource const &rhs);

		void		learn_materia(AMateria *m);
    	AMateria*	create_materia(std::string const &type);
		
	private:
    	AMateria* _learned_materias[4];
};