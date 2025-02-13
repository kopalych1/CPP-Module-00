/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:26:51 by akostian          #+#    #+#             */
/*   Updated: 2025/02/13 22:54:31 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

Contact::Contact()
{
	std::cout << "Contact\t\tdefault constructor called\n";
};

Contact::Contact(
	std::string	first_name,
	std::string	last_name,
	std::string	nickname,
	std::string	phone_number,
	std::string	secret
) :
	first_name(first_name),
	last_name(last_name),
	nickname(nickname),
	phone_number(phone_number),
	secret(secret)
{
	std::cout << "Contact\t\tconstructor called\n";
}

Contact::~Contact()
{
	std::cout << "Contact\t\tdeconstructor called\n";
}

Contact::Contact(const Contact& other) :
	first_name(other.first_name),
	last_name(other.last_name),
	nickname(other.nickname),
	phone_number(other.phone_number),
	secret(other.secret)
{
	std::cout << "Contact\t\tcopy constructor called\n";
}

Contact& Contact::operator=(const Contact& other)
{
	std::cout << "Contact\t\tcopy assignment operator called\n";
	if (this != &other) {
		this->first_name = other.first_name;
		this->last_name = other.last_name;
		this->nickname = other.nickname;
		this->phone_number = other.phone_number;
		this->secret = other.secret;
	}
	return *this;
}

std::string	Contact::getFirst_name()
{
	return this->first_name;
}

void	Contact::setFirst_name(std::string value)
{
	this->first_name = value;
}

std::string	Contact::getLast_name()
{
	return this->last_name;
}

void	Contact::setLast_name(std::string value)
{
	this->last_name = value;
}

std::string	Contact::getNickname()
{
	return this->nickname;
}

void	Contact::setNickname(std::string value)
{
	this->nickname = value;
}

std::string	Contact::getPhone_number()
{
	return this->phone_number;
}

void	Contact::setPhone_number(std::string value)
{
	this->phone_number = value;
}

std::string	Contact::getSecret()
{
	return this->secret;
}

void	Contact::setSecret(std::string value)
{
	this->secret = value;
}
