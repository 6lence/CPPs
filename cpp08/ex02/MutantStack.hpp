/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:30:21 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/20 19:53:46 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

template<typename T> class MutantStack: public std::stack<T>{

	public:
		MutantStack(): std::stack<T>() {};
		MutantStack(MutantStack const& cp) {*this = cp;};
		~MutantStack(){};
		MutantStack&	operator=(MutantStack const& cp){
			if (this != &cp)
				std::operator&=(cp);
			return *this;
		};

		typedef typename	std::stack<T>::container_type::iterator	iterator;
		iterator begin(){
			return (this->c.begin());
		}

		iterator end(){
			return (this->c.end());
		}
};