/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:39:01 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 14:00:13 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class FileReplacer
{
	public:
		FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2);
		FileReplacer(const FileReplacer &cpy);
		~FileReplacer();
		FileReplacer &operator=(const FileReplacer &rhs);

    	void replace_and_save();

	private:
    	std::string _filename;
    	std::string _s1;
    	std::string _s2;
};