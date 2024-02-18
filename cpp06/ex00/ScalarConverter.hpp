/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:21:01 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/16 16:09:25 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include "iostream"
# include "string"
# include "cmath"

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& cp);
		~ScalarConverter();
		ScalarConverter&	operator=(ScalarConverter const& cp);

	public:
		static void	convert(std::string nb);
		static void	printChar(std::string nb);
		static void	printDouble(std::string nb);
		static void	printInt(std::string nb);
		static void	printFloat(std::string nb);
};

#endif