/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:06:32 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/12 19:01:30 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "vector"
#include "algorithm"
#include "string"

class PmergeMe{
	private:
		std::string			_seq;
		std::vector<int>	_vec;
		PmergeMe();
	
	public:
		PmergeMe(char *seq);
		PmergeMe(PmergeMe const& cp);
		~PmergeMe();
		PmergeMe&	operator=(PmergeMe const& cp);

		void	sort();
		bool	verif_seq();
		void	printVector();
		void	setVector();
		void	sortVector();
};