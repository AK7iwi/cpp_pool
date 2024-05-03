/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:34:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 16:50:22 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, EXIT_FAILURE);
		
	for (int i = 1; argv[i]; i++)
        for (int j = 0; argv[i][j]; j++)
            std::cout << (char)std::toupper(argv[i][j]);
	std::cout << std::endl;
	
	return (EXIT_SUCCESS);
}