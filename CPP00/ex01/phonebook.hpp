/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 11:00:58 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/19 14:04:24 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cctype>

class Contact 
{
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkestsecret;
		
	public:
		std::string getFirstname() const;
		std::string getLastname() const;
		std::string getNickname() const;
		std::string getPhonenumber() const;
		std::string getDarkestsecret() const;
		void setFirstname(const std::string &firstname);
		void setLastname(const std::string &lastname);
		void setNickname(const std::string &nickname);
		void setPhonenumber(const std::string &phonenumber);
		void setDarkestsecret(const std::string &darkestsecret);

};

class Phonebook 
{
	private:
	Contact _contacts[8];
    int _index;
	
	public:
		Phonebook();
		void AddContact();
		void SearchContact() const;
};

#endif