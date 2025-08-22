/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:23:49 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 21:55:21 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int verifInputFile(std::string filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Failed to open file: " << filename << std::endl;
		return (1);
	}
	return (0);
}

void replaceString(std::string &newline, std::string &line, size_t &start, size_t &s1_pos, std::string &s1, std::string &s2)
{
	newline += line.substr(start, s1_pos - start);
	newline += s2;
	start = s1_pos + s1.length();
	s1_pos = line.find(s1, start);
}

int sedFile(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file(filename);
	std::string line;
	std::string newline;
	size_t s1_pos;
	size_t start;
	
	std::string outFileName = filename + ".replace";
	std::ofstream outfile(outFileName);
	if (!outfile.is_open())
	{
		std::cerr << "Failed to open file: " << outFileName << std::endl;
		return (1);
	}
	while (std::getline(file, line))
	{
		newline = "";
    	start = 0;
		s1_pos = line.find(s1, start);
		while (s1_pos != std::string::npos)
			replaceString(newline, line, start, s1_pos, s1, s2);
		newline += line.substr(start);
		outfile << newline << std::endl;
	}
	return (0);
}
