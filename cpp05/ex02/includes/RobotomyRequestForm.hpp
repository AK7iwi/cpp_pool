/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:45:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/02 08:57:28 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <AForm.hpp>
#include <iostream>
#include <ctime>
#include <string>
#include <stdexcept>
#include <stdint.h>

class  RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string	target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

		bool	execute(Bureaucrat const &bureaucrat) const;

	private:
		std::string     _target;
    	
};