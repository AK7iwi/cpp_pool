/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:12:51 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 20:48:01 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "Wrong number of arguments" << std::endl, EXIT_FAILURE);

	std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    FileReplacer file_replacer(filename, s1, s2);
    file_replacer.replace_and_save();

	return (EXIT_SUCCESS);
}