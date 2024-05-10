/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:45:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/10 18:54:59 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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

		bool	execute(Bureaucrat const &bureaucrat) const;

	private:
		std::string	_target;
};