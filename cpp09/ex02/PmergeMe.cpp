/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:10:56 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/13 15:49:30 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(std::string seq): _seq(seq){
		if (!verif_seq()){
		std::cerr << "Error, wrong sequence format." << std::endl;
		exit(EXIT_FAILURE);
	}
	sortV();
	sortD();
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
	size_t	len = _seq.length();
	for (size_t i = 0; i < len; i++){
		if (_seq[i] != ' ' && !isdigit(_seq[i]))
			return false;
	}
	return true;
}

void	PmergeMe::setVector(){
	for(size_t i = 0; i < _seq.length(); i++){
		if (isdigit(_seq[i])){
			_vec.push_back(atoi(&_seq[i]));
			while (_seq[i] && _seq[i] != ' ')
				i++;
		}
	}
}

void	PmergeMe::merge(size_t l, size_t m, size_t r){
	size_t n1 = m - l + 1;
	size_t n2 = r - m;

	// Create temporary arrays to store the left and right subarrays
	std::vector<int> L(n1);
	std::vector<int> R(n2);

	// Copy data to temporary arrays L[] and R[]
	for (size_t i = 0; i < n1; ++i)
		L[i] = _vec[l + i];
	for (size_t j = 0; j < n2; ++j)
		R[j] = _vec[m + 1 + j];

	// Merge the temporary arrays back into _vec[l..r]
	size_t i = 0; // Initial index of first subarray
	size_t j = 0; // Initial index of second subarray
	size_t k = l; // Initial index of merged subarray

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			_vec[k] = L[i];
			++i;
		} else {
			_vec[k] = R[j];
			++j;
		}
		++k;
	}

	// Copy the remaining elements of L[], if any
	while (i < n1) {
		_vec[k] = L[i];
		++i;
		++k;
	}

	// Copy the remaining elements of R[], if any
	while (j < n2) {
		_vec[k] = R[j];
		++j;
		++k;
	}
}

void	PmergeMe::sortVector(size_t one, size_t two){
	if (one < two) {
		size_t mid = one + (two - one) / 2;
		sortVector(one, mid);
		sortVector(mid + 1, two);
		merge(one, mid, two);
	}
}

void	PmergeMe::printVector(){
	unsigned int	size = this->_vec.size();

	for (unsigned int i = 0; i < size; i++){
		std::cout << this->_vec[i] << (i < size - 1 ? " ": "");
	}
	std::cout << std::endl;
}

void	PmergeMe::printTimeVector(double time){
	std::cout << "Time to process a range of " << this->_vec.size() << " elements with std::vector : " << std::fixed << std::setprecision(7) << time << " us" << std::endl;
}

void	PmergeMe::printTimeDeque(double time){
	std::cout << "Time to process a range of " << this->_vec.size() << " elements with std::deque  : "  << std::fixed << std::setprecision(7) << time << " us" << std::endl;
}

void	PmergeMe::sortV(){
	setVector();
	std::cout << "Before: ";
	printVector();
	double			time;
	std::clock_t	start = std::clock();
	sortVector(0, _vec.size() - 1);
	time = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC;
	std::cout << "After: ";
	printVector();
	std::cout << std::endl;
	printTimeVector(time);
}

void	PmergeMe::setDeque(){
	std::cout << std::endl << std::endl << "alooooooooooooooooooooooooo" << std::endl << _seq << std::endl;
	for(size_t i = 0; i < _seq.length(); i++){
		if (isdigit(_seq[i])){
			_deq.push_back(atoi(&_seq[i]));
			while (_seq[i] && _seq[i] != ' ')
				i++;
		}
	}
}

void	PmergeMe::mergeD(size_t l, size_t m, size_t r){
	size_t n1 = m - l + 1;
	size_t n2 = r - m;

	// Create temporary arrays to store the left and right subarrays
	std::vector<int> L(n1);
	std::vector<int> R(n2);

	// Copy data to temporary arrays L[] and R[]
	for (size_t i = 0; i < n1; ++i)
		L[i] = _deq[l + i];
	for (size_t j = 0; j < n2; ++j)
		R[j] = _deq[m + 1 + j];

	// Merge the temporary arrays back into _vec[l..r]
	size_t i = 0; // Initial index of first subarray
	size_t j = 0; // Initial index of second subarray
	size_t k = l; // Initial index of merged subarray

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			_deq[k] = L[i];
			++i;
		} else {
			_deq[k] = R[j];
			++j;
		}
		++k;
	}

	// Copy the remaining elements of L[], if any
	while (i < n1) {
		_deq[k] = L[i];
		++i;
		++k;
	}

	// Copy the remaining elements of R[], if any
	while (j < n2) {
		_deq[k] = R[j];
		++j;
		++k;
	}
}

void	PmergeMe::sortDeque(size_t one, size_t two){
	if (one < two) {
		size_t mid = one + (two - one) / 2;
		sortDeque(one, mid);
		sortDeque(mid + 1, two);
		mergeD(one, mid, two);
	}
}

void	PmergeMe::sortD(){
	setDeque();
	double			time;
	std::clock_t	start = std::clock();
	sortDeque(0, _deq.size() - 1);
	time = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC;
	std::cout << std::endl;
	printTimeDeque(time);
}