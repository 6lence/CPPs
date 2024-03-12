/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:02:02 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/11 15:16:12 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const& cp){
	*this = cp;
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const& cp){
	if (this != &cp){
		this->_dataBase = cp._dataBase;
	}
	return (*this);
}

static bool	verif_key(std::string key){
	std::string	year;
	std::string	month;
	std::string	day;

	if (key.length() != 10)
	return (1);
}

static bool	verif_value(float value){
	if (!value || value < 0 || value > 1000)
		return (0);
	return (1);
}

void	BitcoinExchange::setDataBase(){
	std::ifstream	file("data.csv");
	std::string		line;
	std::string		key;
	float				value;

	if (!file.is_open())
		std::cerr << "ERROR: The data base is not present." << std::endl; return; 
	while (getline(file, line)){
		key = line.substr(0, line.find(","));
		value = atof(line.substr(line.find(","), line.length()).c_str());
		if (!verif_key(key)){
			std::cerr << "ERROR: bad  format" << std::endl; return;
		}
		else if (!verif_value(value)){
			std::cerr << "ERROR: bad VALUE format" << std::endl; return;
		}
		_dataBase[key] = value;
	}
	file.close();
}

std::map<std::string, float>	BitcoinExchange::getDataBase() const{
	return (_dataBase);
}