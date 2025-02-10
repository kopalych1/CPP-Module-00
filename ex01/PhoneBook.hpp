/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:54:45 by akostian          #+#    #+#             */
/*   Updated: 2025/02/10 17:24:14 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook
{
	private:

	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact	contacts[8];
};

#endif