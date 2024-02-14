/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:37:34 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 14:49:45 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_grade;

	public:
		Form();
		Form(std::string name, bool sign, int grade);
		Form(Form const& cp);
		~Form();
		Form&	operator=(Form const& cp);

		bool		getSign() const;
		std::string	getName() const;
		int			getGrade() const;

		void	beSigned(Bureaucrat const& cp);
		void	signForm(Bureaucrat const& cp);
};

std::ostream&	operator<<(std::ostream& o, Form const& cp);

#endif