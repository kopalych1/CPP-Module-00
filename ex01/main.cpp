/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:36:48 by akostian          #+#    #+#             */
/*   Updated: 2025/02/14 16:32:46 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

std::string	wait_for_user_input(std::string message)
{
	std::string	out;

	while (out.empty() || out == "\n")
	{
		std::cout << message;
		std::getline(std::cin, out);
	}
	return out;
}

void	add_contact(PhoneBook *phonebook)
{
	std::string	user_input;
	Contact		new_contact;

	std::cout << GRN "Entering contact creation " CRESET "\n";
	new_contact.setFirst_name(wait_for_user_input("Enter First name: "));
	new_contact.setLast_name(wait_for_user_input("Enter Last name: "));
	new_contact.setNickname(wait_for_user_input("Enter Nickname: "));
	new_contact.setPhone_number(wait_for_user_input("Enter Phone number: "));
	new_contact.setSecret(wait_for_user_input("Enter Darkest secret: "));
	phonebook->add_contact(new_contact);
}

void	search_contact(PhoneBook *phonebook)
{
	std::string	user_input;
	int			contact_id;

	phonebook->print_contacts();
	user_input = wait_for_user_input("Enter the id of the contact you would like to know more about: ");
	if (user_input == "EXIT")
		return ;
	for (size_t i = 0; i < user_input.length(); i++)
	{
		if (std::isdigit(user_input[i]))
			continue;
		std::cout << BRED "ID is incorrect" CRESET "\n";
		return ;
	}
	contact_id = atoi(user_input.c_str());
	try
	{
		phonebook->print_contact(contact_id);
	}
	catch(const std::out_of_range& e)
	{
		std::cout << BRED "ID is incorrect" CRESET "\n";
	}
}

int	main(void)
{
	std::string	user_input;
	PhoneBook	phonebook;

	while (user_input != "EXIT")
	{
		user_input = wait_for_user_input("Usage: " GRN "ADD" CRESET " | " BLU "SEARCH" CRESET " | " RED "EXIT" CRESET "\n");

		if (user_input == "ADD")
			add_contact(&phonebook);
		if (user_input == "SEARCH")
			search_contact(&phonebook);
	}
	return (0);
}
