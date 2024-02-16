/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:37:39 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/16 08:51:02 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		std::string _form[3];

	public:
		Intern();
		Intern(Intern const& cp);
		~Intern();
		Intern&	operator=(Intern const& cp);

		AForm*	makeForm(std::string name, std::string target) const;
};

#endif