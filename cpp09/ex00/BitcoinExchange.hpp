/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:47:48 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/11 15:23:02 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>

class BitcoinExchange{
	private:
		std::map<std::string, float>	_dataBase;
		char*							_file;

	public:
		BitcoinExchange();
		BitcoinExchange(char* file);
		BitcoinExchange(BitcoinExchange const& cp);
		~BitcoinExchange();
		BitcoinExchange&	operator=(BitcoinExchange const& cp);

		typedef typename	std::map<std::string, float>::iterator	iterator;
		void							setDataBase();
		std::map<std::string, float>	getDataBase() const;
		void							exchange();
		float							getAmount(std::string date);
};