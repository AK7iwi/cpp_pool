/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:46:05 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/23 20:15:03 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <AForm.hpp>
#include <iostream>
#include <string>
#include <stdexcept>
#include <stdint.h>

class  PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

	private:
    	
};