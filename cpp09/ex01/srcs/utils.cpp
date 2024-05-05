/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:17:47 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 21:22:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	is_valid_char(char c)
{return ((c == ' ') || (c == '+' || c == '-' || c == '/' || c == '*') || (c >= '0' && c <= '9'));}

bool	 is_operator(char c)
{return (c == '+' || c == '-' || c == '/' || c == '*');}