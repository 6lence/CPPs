/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:10:56 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/12 19:04:49 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(char *seq): _seq(seq){
	sort();
}

PmergeMe::PmergeMe(PmergeMe const& cp){
	*this = cp;
}

PmergeMe::~PmergeMe(){}

PmergeMe&	PmergeMe::operator=(PmergeMe const& cp){
	if (this != &cp)
		this->_seq = cp._seq;
	return (*this);
}

bool	PmergeMe::verif_seq(){
	int len = _seq.length();

	if (isdigit(_seq[0]) && _seq[1] != ' ')
		return false;
	for (int i = 0; _seq[i]; i++){
		if (_seq[i] != ' ' && !isdigit(_seq[i]))
			return false;
		if (_seq[i] == ' ')
			continue;
		if (i - 1 > 0 && i + 1 < len && (_seq[i - 1] != ' ' || _seq[i + 1] != ' '))
			return false;
	}
	if (isdigit(_seq[len - 1]) && _seq[len - 2] != ' ')
		return false;
	return true;
}

void	PmergeMe::setVector(){
	for(int i = 0; _seq[i]; i++){
		if (isdigit(_seq[i]))
			_vec.push_back(_seq[i] - 48);
	}
}

void	PmergeMe::sortVector(){
}

void	PmergeMe::printVector(){
	unsigned int	size = this->_vec.size();

	for (unsigned int i = 0; i < size < i++){
		std::cout << this->_vec[i] << (i < size - 1 ? " ": "");
	}
	std::cout << std::endl;
}

void	PmergeMe::sort(){
	if (!verif_seq()){
		std::cerr << "Error, wrong sequence format." << std::endl;
		exit(EXIT_FAILURE);
	}
	setVector();
	std::cout << "Before: ";
	printVector();
	sortVector();
	std::cout << "After: ";
	printVector();
}