/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:54:45 by akostian          #+#    #+#             */
/*   Updated: 2025/02/13 22:56:42 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		contacts_num;

	public:
		PhoneBook();
		PhoneBook(const PhoneBook& other);
		PhoneBook& operator=(const PhoneBook& other);
		~PhoneBook();
};

#endif