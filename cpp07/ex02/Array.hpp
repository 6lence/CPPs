/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 21:15:07 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/18 22:04:26 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> class Array{
	private:
		unsigned int	_nb;
		T				*_array;

	public:
		Array(): _nb(0), _array(new T[_nb]){};
		Array(unsigned int nb): _nb(nb), _array(new T[_nb]){};
		Array(Array const& cp) { *this = cp; };
		~Array() { delete[] this->_array; };
		Array&	operator=(Array const& cp){
			if (this != &cp)
			{
				delete[] this->_array;
				this->_array = new T[cp._nb];
				for (int i = 0; i < cp._nb; i++)
					this->_array[i] = cp._array[i];
				this->_nb = cp._nb;	
			}
			return (*this);
		};

		T&	operator[](unsigned int nb){
			if (nb < this->_nb)
				return (this->_array[nb]);
			throw(OutOfBound());
		}

		unsigned int	size() { return this->_nb; };

		class OutOfBound: std::exception{
			public:
				void printError() {
					std::cout << "Out of bounds" << std::endl;
			}
		};
};
