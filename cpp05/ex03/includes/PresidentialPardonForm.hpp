/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:46:05 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/06 03:12:16 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <AForm.hpp>

class  PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string	target);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

		bool	execute(Bureaucrat const &bureaucrat) const;

	private:
		std::string     _target;
    	
};