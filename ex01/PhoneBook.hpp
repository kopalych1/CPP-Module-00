/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:54:45 by akostian          #+#    #+#             */
/*   Updated: 2025/02/14 14:04:07 by akostian         ###   ########.fr       */
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
		int		contacts_index;

	public:
		PhoneBook();
		PhoneBook(const PhoneBook& other);
		PhoneBook& operator=(const PhoneBook& other);
		~PhoneBook();

		void	add_contact(Contact& contact);
		Contact	get_contact(int contact_n);
		void	print_contact(int contact_n);
		void	print_contacts();
};

#endif