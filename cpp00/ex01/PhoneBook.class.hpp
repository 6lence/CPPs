/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:07:36 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/22 15:10:19 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook
{
	private:
		Contact _contact[8];
		int		_index;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		Add(void);
		void		Get(void);
		std::string	GetLine(std::string type);
};

#endif