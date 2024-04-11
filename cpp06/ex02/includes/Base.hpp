/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 06:37:40 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/11 07:08:23 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <ctime>
# include <cstdlib>

class Base
{
	public:
		virtual ~Base();
	private:
};

class A : public Base {};

class B : public Base {};

class C : public Base {};