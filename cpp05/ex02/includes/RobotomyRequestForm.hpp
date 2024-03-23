/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:45:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/23 20:14:50 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <AForm.hpp>
#include <iostream>
#include <string>
#include <stdexcept>
#include <stdint.h>

class  RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

	private:
    	
};