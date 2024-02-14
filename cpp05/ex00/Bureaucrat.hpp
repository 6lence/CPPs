/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:52:29 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 20:57:03 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "iostream"

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& cp);
		~Bureaucrat();
		Bureaucrat&	operator=(Bureaucrat const& cp);

		class GradeTooHigh: public std::exception
		{
			public:
				void	GradeTooHighException(){
					std::cout << "Grade too high !" << std::endl;
				};
		};
		class GradeTooLow: public std::exception
		{
			public:
				void	GradeTooLowException(){
					std::cout << "Grade too low !" << std::endl;
				};
		};

		std::string	getName() const;
		int			getGrade() const;
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& cp);

#endif