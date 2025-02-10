/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:26:51 by akostian          #+#    #+#             */
/*   Updated: 2025/02/10 17:26:15 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

Contact::Contact(){
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

void	Contact::setFirst_name(std::string first_name)
{
	this->first_name = first_name;
}

void	Contact::setLast_name(std::string last_name)
{
	this->last_name = last_name;
}

void	Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::setPhone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::setSecret(std::string secret)
{
	this->secret = secret;
}

std::string	Contact::getFirst_name(void)
{
	return (this->first_name);
}

std::string	Contact::getLast_name(void)
{
	return (this->last_name);
}

std::string	Contact::getNickname(void)
{
	return (this->nickname);
}

std::string	Contact::getPhone_number(void)
{
	return (this->phone_number);
}

std::string	Contact::getSecret(void)
{
	return (this->secret);
}
