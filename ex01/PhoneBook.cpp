/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:00:17 by akostian          #+#    #+#             */
/*   Updated: 2025/02/14 16:38:09 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

PhoneBook::PhoneBook() :
	contacts_num(0),
	contacts_index(0)
{
	std::cout << "PhoneBook\tconstructor called\n";
}

PhoneBook::PhoneBook(const PhoneBook& other)
{
	(void)other;
	std::cout << "PhoneBook\tcopy constructor called\n";
}

PhoneBook& PhoneBook::operator=(const PhoneBook& other)
{
	std::cout << "PhoneBook\tcopy assignment operator called\n";
	(void)other;
	if (this != &other) {
		this->contacts_num = 0;
		this->contacts_index = 0;
	}
	return *this;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook\tdeconstructor called\n";
}

void	PhoneBook::add_contact(Contact& contact)
{
	this->contacts_index = this->contacts_index % 8;
	this->contacts[this->contacts_index++] = contact;
	this->contacts_num += (this->contacts_num < 8);
}

Contact	PhoneBook::get_contact(int contact_n)
{
	if (contact_n < 1 || contact_n > 8 || contact_n > this->contacts_num)
		throw std::out_of_range("Invalid contact number!");
	return this->contacts[contact_n - 1];
}

void	PhoneBook::print_contact(int contact_n)
{

	if (contact_n < 1 || contact_n > 8 || contact_n > this->contacts_num)
		throw std::out_of_range("Invalid contact number!");
	std::cout << "+===========================================+\n";
	std::cout.width(15); std::cout << std::left << "First name: " << this->contacts[contact_n - 1].getFirst_name() << std::endl;
	std::cout.width(15); std::cout << std::left << "Last name: " << this->contacts[contact_n - 1].getLast_name() << std::endl;
	std::cout.width(15); std::cout << std::left << "Nickname: " << this->contacts[contact_n - 1].getNickname() << std::endl;
	std::cout.width(15); std::cout << std::left << "Phone Number: " << this->contacts[contact_n - 1].getPhone_number() << std::endl;
	std::cout << "+===========================================+\n";
}

static std::string	trunc(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	PhoneBook::print_contacts()
{
	std::cout << "+===========================================+\n";
	for (int i = 0; i < this->contacts_num; i++)
	{
		std::cout << "|";
		std::cout.width(10); std::cout << std::right << i + 1;
		std::cout << "|";
		std::cout.width(10); std::cout << std::right << trunc(this->contacts[i].getFirst_name());
		std::cout << "|";
		std::cout.width(10); std::cout << std::right << trunc(this->contacts[i].getLast_name());
		std::cout << "|";
		std::cout.width(10); std::cout << std::right << trunc(this->contacts[i].getNickname());
		std::cout << "|\n";
	}
	std::cout << "+===========================================+\n";
}
