/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/15 18:03:08 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class BitcoinExchange 
{
	public:
		BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
		BitcoinExchange&	operator=(BitcoinExchange const &rhs);

	private:
};

