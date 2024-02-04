/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:12:51 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 14:27:14 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return(0);
	}

	std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    FileReplacer file_replacer(filename, s1, s2);
    file_replacer.replace_and_save();

	return (0);
}