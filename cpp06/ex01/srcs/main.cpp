/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 06:16:41 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 18:58:02 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data = {42, 42.42, "fourty two"};	
	uintptr_t data_serialized = Serializer::serialize(&data);
	
	std::cout << "\nSerialize Data: " << std::endl;
	std::cout << data_serialized  << std::endl;

	Data *data_deserialized = Serializer::deserialize(data_serialized);
	
	std::cout << "DESERIALIZED DATA: " << std::endl;
	std::cout << "Adress: "  		<< data_deserialized  << std::endl;
	std::cout << "data_int: "  		<< data_deserialized->data_int << std::endl;
	std::cout << "data_double: "	<< data_deserialized->data_double  << std::endl;
	std::cout << "data_str: "  		<< data_deserialized->data_str  << std::endl << std::endl;

	std::cout  << "ORIGINAL DATA: " << std::endl;
	std::cout << "Adress: " 		<< &data  << std::endl;
	std::cout << "data_int: " 		<< data.data_int << std::endl;
	std::cout << "data_double: "	<< data.data_double  << std::endl;
	std::cout << "data_str: "    	<< data.data_str  << std::endl;

	return (EXIT_SUCCESS);
}