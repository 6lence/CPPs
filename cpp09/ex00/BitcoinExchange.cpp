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

BitcoinExchange::BitcoinExchange(char *file): _file(file){
	setDataBase();
	exchange();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const& cp){
	*this = cp;
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const& cp){
	if (this != &cp){
		this->_dataBase.clear();
		this->_dataBase.insert(cp._dataBase.begin(), cp._dataBase.end());
	}
	return (*this);
}

static bool	verif_key(std::string key){
	int	year;
	int	month;
	int	day;

	year = atoi(key.substr(0, 4).c_str());
	month = atoi(key.substr(5, 7).c_str());
	day = atoi(key.substr(8, 10).c_str());
	if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	return true;
}

static bool	verif_value(float value){
	if (value < 0){
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	else if (value > 1000){
		std::cerr << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}

void	BitcoinExchange::setDataBase(){
	std::ifstream	file("./data.csv");
	std::string		line;

	if (!file){
		std::cerr << "Error: The data base is not present." << std::endl; exit(EXIT_FAILURE);
	}
	getline(file, line);
	while (getline(file, line)){
		std::cout << line << std::endl;
		if (!line[10] || line[10] != ','){
			std::cout << "File corrupted." << std::endl;
			file.close();
			exit(EXIT_FAILURE);
		}
		_dataBase[line.substr(0, 10)] = atof(&line[11]);
	}
	file.close();
}

std::map<std::string, float>	BitcoinExchange::getDataBase() const{
	return (_dataBase);
}

static	std::string	prevDate(std::string date){
	int	year = atoi(date.substr(0, 4).c_str());
	int	month = atoi(date.substr(5, 7).c_str());
	int	day = atoi(date.substr(8, 10).c_str());

	if (!--day){
		day = 31;
		if (!--month){
			month = 12;
			if (--year == 2008)
				return ("Error");
		}
	}
	std::ostringstream s;
	s << year << "-" << (month < 10 ? "0" : "") << month << "-" << (day < 10 ? "0" : "") << day;
	return (s.str());
}

float	BitcoinExchange::getAmount(std::string date){
	BitcoinExchange::iterator	i;

	i = this->_dataBase.find(date);
	if (i == this->_dataBase.end()){
		while (i == this->_dataBase.end()){
			date = prevDate(date);
			if (date == "Error")
				return (-1);
			i = this->_dataBase.find(date);
		}
	}
	return (i->second);
}

void	BitcoinExchange::exchange(){
	std::ifstream	file;
	std::string		line;
	float			value;
	float			amount;

	file.open(_file);
	while (getline(file, line)){
		if (!verif_key(line)){
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		value = atof(&line[12]);
		if (!verif_value(value))
			continue;
		amount = getAmount(line.substr(0, 10));
		if (amount == -1)
			std::cout << "Error: bad input => " << line << std::endl;
		std::cout << line.substr(0, 10) << " =>" << &line[12] << " = " << value * amount << std::endl;
	}
}