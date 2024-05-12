/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:46:05 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/12 19:31:40 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

#include <AForm.hpp>

class  PresidentialPardonForm : public AForm
{
	public:
		/*Constructors & operators*/
		
		PresidentialPardonForm(std::string	target);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(PresidentialPardonForm const &rhs);

		/*Execute method*/
		
		void	execute(Bureaucrat const &bureaucrat) const;

	private:
		std::string const	_target;
    	
};

#endif /* PRESIDENTIAL_PARDON_FORM_H */