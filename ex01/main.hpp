/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmetreve <zmetreve@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 10:30:56 by zmetreve          #+#    #+#             */
/*   Updated: 2025/12/08 10:50:42 by zmetreve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <string>

// 1) Primero la clase Contact
class	Contact
{
	private:
		std::string	_fname;
		std::string	_lname;
		std::string	_nick;
		std::string	_phone_num;
		std::string	_secret;
	public:
		Contact(void);
		~Contact(void);
		std::string	get_fname(void) const;
		std::string	get_lname(void) const;
		std::string	get_nick(void) const;
		std::string	get_phone_num(void) const;
		std::string	get_secret(void) const;
		void		set_fname(std::string str);
		void		set_lname(std::string str);
		void		set_nick(std::string str);
		void		set_phone_num(std::string str);
		void		set_secret(std::string str);
};

// 2) Luego las funciones que la usan
std::string	add_spaces(int n);
std::string	fix_width(std::string str, long unsigned max);
int			search_ui(Contact contacts[8]);

// 3) Después Phonebook
class	Phonebook
{
	private:
		Contact	_contacts[8];
		int		_index;
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(void);
		void	print(Contact contact);
		Contact	get_contact(int index);
};

#endif
