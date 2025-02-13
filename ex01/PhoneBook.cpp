/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:00:17 by akostian          #+#    #+#             */
/*   Updated: 2025/02/13 22:45:21 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

PhoneBook::PhoneBook() : contacts_num(0)
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
	}
	return *this;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook\tdeconstructor called\n";
}
