/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:37:34 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 20:52:14 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

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
		
		class signTooLow{
			public:
				void printError(){
					std::cout << "Signer grade is too low !" << std::endl;
				}
		};
};

std::ostream&	operator<<(std::ostream& o, Form const& cp);

#endif