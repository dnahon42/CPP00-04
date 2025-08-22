/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:23:48 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 21:56:09 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int sedFile(std::string filename, std::string s1, std::string s2);
void replaceString(std::string &newline, std::string &line, size_t &start, size_t &s1_pos, std::string &s1, std::string &s2);
int verifInputFile(std::string filename);