/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:46:05 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/10 18:53:56 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <AForm.hpp>

class  PresidentialPardonForm : public AForm
{
	public:
		/*Constructors & operators*/
		
		PresidentialPardonForm(std::string	target);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(PresidentialPardonForm const &rhs);

		void	execute(Bureaucrat const &bureaucrat) const;

	private:
		std::string     _target;
    	
};