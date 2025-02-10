/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:26:58 by akostian          #+#    #+#             */
/*   Updated: 2025/02/10 17:16:19 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;

	public:
		Contact();
		Contact(
			std::string	first_name,
			std::string	last_name,
			std::string	nickname,
			std::string	phone_number,
			std::string	secret
		);
		~Contact(void);

		std::string	getFirst_name(void);
		std::string	getLast_name(void);
		std::string	getNickname(void);
		std::string	getPhone_number(void);
		std::string	getSecret(void);

		void	setFirst_name(std::string first_name);
		void	setLast_name(std::string last_name);
		void	setNickname(std::string nickname);
		void	setPhone_number(std::string phone_number);
		void	setSecret(std::string secret);
};

#endif