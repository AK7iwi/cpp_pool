/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:47:44 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/20 15:31:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer(std::string const &filename, std::string const &s1, std::string const &s2)
	: _filename(filename), _s1(s1), _s2(s2) {}
	
FileReplacer::FileReplacer(FileReplacer const &cpy)
{
	_filename = cpy._filename;
	_s1 = cpy._s1;
	_s2 = cpy._s2;
}

FileReplacer::~FileReplacer() {}

FileReplacer&   FileReplacer::operator=(FileReplacer const &rhs)
{	
	if (this != &rhs)
	{
		_filename = rhs._filename;
		_s1 = rhs._s1;
		_s2 = rhs._s2;
	}
	return (*this);
}

void    FileReplacer::replace_and_save()
{
	std::ifstream input_file(_filename.c_str());
    
    if (!input_file.is_open()) 
	{
        std::cout << "Error: Unable to open input file: " << _filename << std::endl;
        return ;
    }

    // Read the content of the file into a string
    std::stringstream buffer;
    buffer << input_file.rdbuf();
    std::string content = buffer.str();

    size_t pos = 0;
    while ((pos = content.find(_s1, pos)) != std::string::npos)
	{
        content = content.substr(0, pos) + _s2 + content.substr(pos + _s1.length());
        pos += _s2.length();
    }

    std::string output_filename = _filename + ".replace";
    // Open the output file
    std::ofstream output_file(output_filename.c_str());

    if (!output_file.is_open())
	{
        std::cout << "Error: Unable to open output file: " << output_filename << std::endl;
        return ;
    }

    output_file << content;
    
    std::cout << "Replacement completed. Output saved to: " << output_filename << std::endl;
}