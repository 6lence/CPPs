/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:14:58 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/24 12:35:31 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact
{
	private:
		std::string	_F_name;
		std::string	_Name;
		std::string	_Nick;
		std::string	_Number;
		std::string	_Secret;

	public:
		Contact(void);
		~Contact(void);

		void	set(std::string str, int n);
		void	names(std::string res);
		void	show(int i);
		void	showContact(int i);
};

#endif