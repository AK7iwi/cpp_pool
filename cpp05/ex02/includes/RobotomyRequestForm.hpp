/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:45:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/12 19:32:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#include <AForm.hpp>
#include <cstdlib>
#include <ctime>

class  RobotomyRequestForm : public AForm
{
	public:
		/*Constructors & operators*/
		
		RobotomyRequestForm(std::string	target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const &rhs);

		/*Execute method*/
		
		void	execute(Bureaucrat const &bureaucrat) const;

	private:
		std::string	const	_target;
    	
};

#endif /* ROBOTOMY_REQUEST_FORM_H */