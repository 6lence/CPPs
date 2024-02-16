/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:37:34 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 14:49:45 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_grade;

	public:
		AForm();
		AForm(std::string name, bool sign, int grade);
		AForm(AForm const& cp);
		virtual ~AForm();
		AForm&	operator=(AForm const& cp);

		bool			getSign() const;
		std::string		getName() const;
		int				getGrade() const;
		virtual void	execute(Bureaucrat const& cp) const = 0;

		void	beSigned(Bureaucrat const& cp);
		void	signAForm(Bureaucrat const& cp);
		
		class signTooLow{
			public:
				void printError(){
					std::cout << "Signer grade is too low !" << std::endl;
				}
		};

		class NotSigned{
				public:
					void printError(){
						std::cout << "The form has not been signed !" << std::endl;
					}
		};
};

std::ostream&	operator<<(std::ostream& o, AForm const& cp);

#endif