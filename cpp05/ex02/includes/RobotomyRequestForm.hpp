/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:45:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/11 19:51:58 by mfeldman         ###   ########.fr       */
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

		/*Execute method*/
		
		void	execute(Bureaucrat const &bureaucrat) const;

	private:
		std::string	_target;
    	
};