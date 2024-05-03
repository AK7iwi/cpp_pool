/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:39:01 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 20:25:44 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>

class FileReplacer
{
	public:
		FileReplacer(std::string const &filename, std::string const &s1, std::string const &s2);
		FileReplacer(FileReplacer const &cpy);
		~FileReplacer();
		FileReplacer& operator=(FileReplacer const &rhs);

    	void	replace_and_save();

	private:
    	std::string _filename;
    	std::string _s1;
    	std::string _s2;
};