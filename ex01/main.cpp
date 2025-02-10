/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:36:48 by akostian          #+#    #+#             */
/*   Updated: 2025/02/10 17:33:36 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

int	main(void)
{
	Contact		cont("123", "jdoiesj", "ifosjei", "sefise", "fsehiuofsj");

	PhoneBook	book;
	Contact		cont1;

	std::cout << std::endl;
	std::cout << cont.getFirst_name() << std::endl;
	std::cout << cont.getLast_name() << std::endl;
	std::cout << cont.getNickname() << std::endl;
	std::cout << cont.getPhone_number() << std::endl;
	std::cout << cont.getSecret() << std::endl;
	std::cout << std::endl;

	cont.setFirst_name("KOSTYA");
	cont.setLast_name("aleks");
	cont.setNickname("kopalych");
	cont.setPhone_number("5654984");
	cont.setSecret("hfaiushefiusheiu");

	// book.contacts[0] = cont;

	std::cout << cont.getFirst_name() << std::endl;
	std::cout << cont.getLast_name() << std::endl;
	std::cout << cont.getNickname() << std::endl;
	std::cout << cont.getPhone_number() << std::endl;
	std::cout << cont.getSecret() << std::endl;
	std::cout << std::endl;

	// std::cout << book.contacts[0].getLast_name() << std::endl;

	return (0);
}
