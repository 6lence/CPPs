/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:06:32 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/13 15:22:35 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "vector"
#include "algorithm"
#include "string"
#include "deque"
#include "iomanip"
#include "stdio.h"
#include "string.h"
#include "ctime"

class PmergeMe{
	private:
		std::string			_seq;
		std::vector<int>	_vec;
		std::deque<int>		_deq;
		PmergeMe();
	
	public:
		PmergeMe(std::string seq);
		PmergeMe(PmergeMe const& cp);
		~PmergeMe();
		PmergeMe&	operator=(PmergeMe const& cp);

		void	sortV();
		void	sortD();
		bool	verif_seq();
		void	printVector();
		void	setVector();
		void	setDeque();
		void	printTimeVector(double time);
		void	merge(size_t l, size_t m, size_t r);
		void	mergeD(size_t l, size_t m, size_t r);
		void	printTimeDeque(double time);
		void	sortVector(size_t one, size_t two);
		void	sortDeque(size_t l, size_t r);
};