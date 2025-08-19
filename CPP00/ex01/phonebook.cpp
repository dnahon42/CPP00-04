/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 11:00:44 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/19 21:03:42 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string Contact::getFirstname() const
{
	return (_firstname);
}

std::string Contact::getLastname() const
{
	return (_lastname);
}

std::string Contact::getNickname() const
{
	return (_nickname);
}

std::string Contact::getPhonenumber() const
{
	return (_phonenumber);
}

std::string Contact::getDarkestsecret() const
{
	return (_darkestsecret);
}

void Contact::setFirstname(const std::string &firstname)
{
	this->_firstname = firstname;
}

void Contact::setLastname(const std::string &lastname)
{
	this->_lastname = lastname;
}

void Contact::setNickname(const std::string &nickname)
{
	this->_nickname = nickname;
}

void Contact::setPhonenumber(const std::string &phonenumber)
{
	this->_phonenumber = phonenumber;
}

void Contact::setDarkestsecret(const std::string &darkestsecret)
{
	this->_darkestsecret = darkestsecret;
}

PhoneBook::PhoneBook()
{
	this->_index = 0;
}

void PhoneBook::AddContact()
{
	std::string variable;
	int i = -1;

	std::cout << "Enter a First Name : ";
	std::getline(std::cin, variable);
	if (std::cin.eof())
		exit(1);
	while (variable.size() == 0)
	{
		std::cout << "Enter a First Name : ";
		std::getline(std::cin, variable);
		if (std::cin.eof())
			exit(1);
	}
	_contacts[_index].setFirstname(variable);
	std::cout << "Enter a Last Name : ";
	std::getline(std::cin, variable);
	if (std::cin.eof())
		exit(1);
	while (variable.size() == 0)
	{
		std::cout << "Enter a Last Name : ";
		std::getline(std::cin, variable);
		if (std::cin.eof())
			exit(1);
	}
	_contacts[_index].setLastname(variable);
	std::cout << "Enter a Nickname : ";
	std::getline(std::cin, variable);
	if (std::cin.eof())
		exit(1);
	while (variable.size() == 0)
	{
		std::cout << "Enter a Nickname : ";
		std::getline(std::cin, variable);
		if (std::cin.eof())
			exit(1);
	}
	_contacts[_index].setNickname(variable);
	std::cout << "Enter a Phone Number : ";
	std::getline(std::cin, variable);
	if (std::cin.eof())
		exit(1);
	while (variable.size() == 0)
	{
		std::cout << "Enter a Phone Number : ";
		std::getline(std::cin, variable);
		if (std::cin.eof())
			exit(1);
	}
	while (variable[++i])
	{
		if (std::isdigit(variable[i]) == 0)
		{
			std::cout << "Invalid Phone Number" << std::endl;
			std::cout << "Enter a Phone Number : ";
			std::getline(std::cin, variable);
			if (std::cin.eof())
				exit(1);
			i = -1;
			continue ;
		}
	}
	_contacts[_index].setPhonenumber(variable);
	std::cout << "Enter your darkest secret : ";
	std::getline(std::cin, variable);
	if (std::cin.eof())
		exit(1);
	while (variable.size() == 0)
	{
		std::cout << "Enter your darkest secret : ";
		std::getline(std::cin, variable);
		if (std::cin.eof())
			exit(1);
	}
	_contacts[_index].setDarkestsecret(variable);
	std::cout << "Contact " << _index << " successfully added" << std::endl;
	
	if (_index == 7)
		_index = 0;
	else
		_index++;
}

void PhoneBook::SearchContact() const
{
	int i = -1;
	int index = 0;
	std::string variable;
	std::string number;
	
	
	std::cout << "Index     |First Name| Last Name| Nickname |" <<std::endl;
	while (++i < 8)
	{
		std::string Firstname = _contacts[i].getFirstname();
		if (Firstname.size() > 10)
		{
			Firstname.erase(10);
			Firstname[9] = '.';
		}
		std::string LastName = _contacts[i].getLastname();
		if (LastName.size() > 10)
		{
			LastName.erase(10);
			LastName[9] = '.';
		}
		std::string Nickname = _contacts[i].getNickname();
		if (Nickname.size() > 10)
		{
			Nickname.erase(10);
			Nickname[9] = '.';
		}
		std::cout << std::setw(10) << i <<  "|"  << std::setw(10) << Firstname << "|"  << std::setw(10) << LastName << "|" << std::setw(10) << Nickname << "|" <<std::endl;
	}
	std::cout << "Enter the index of the contact you want the info from : ";
	std::getline(std::cin, variable);
	if (std::cin.eof())
		exit(1);
	while (variable.size() == 0)
	{
		std::cout << "Enter the index of the contact you want the info from : ";
		std::getline(std::cin, variable);
		if (std::cin.eof())
			exit(1);
	}
	try
	{
   		index = std::stoi(variable);
	}
	catch (const std::invalid_argument& e)
	{
    std::cout << "Invalid input: not a number" << std::endl;
    return;
	}
	catch (const std::out_of_range& e)
	{
    std::cout << "Invalid input: number out of range" << std::endl;
    return;
	}
	if (index >= 0 && index <= 7)
	{
		std::cout << "First Name : " << _contacts[index].getFirstname() << std::endl;
		std::cout << "Last Name : " << _contacts[index].getLastname() << std::endl;
		std::cout << "Nickname : " << _contacts[index].getNickname() << std::endl;
		std::cout << "Phone Number : " << _contacts[index].getPhonenumber() << std::endl;
		std::cout << "Darkest secret : " << _contacts[index].getDarkestsecret() << std::endl;
	}
	else
		std::cout << "Invalid index"<< std::endl;

}

int main()
{
	PhoneBook pb;
	std::string variable;

	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, variable);
		if (std::cin.eof())
			exit(1);
		if (variable == "ADD")
			pb.AddContact();
		else if (variable == "SEARCH")
			pb.SearchContact();
		else if (variable == "EXIT")
		 	break;
		else
			continue ;
	}
	return (0);
}
