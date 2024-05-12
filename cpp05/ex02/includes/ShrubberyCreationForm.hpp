/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:42:58 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/12 19:33:13 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_CREATION_FORM_H
#define SHRUBERRY_CREATION_FORM_H

#include <AForm.hpp>
#include <fstream>

class  ShrubberyCreationForm : public AForm
{
	public:
		/*Constructors & operators*/
		
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &rhs);

		/*Execute method*/
		
		void	execute(Bureaucrat const &bureaucrat) const;

	private:
		std::string	const	_target;
};

#endif /* SHRUBERRY_CREATION_FORM_H */