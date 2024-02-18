/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:34:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/18 10:40:18 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

Serializer::Serializer(){
}

Serializer::Serializer(Serializer const& cp){
	*this = cp;
}

Serializer::~Serializer(){
}

Serializer&	Serializer::operator=(Serializer const& cp){
	(void)cp;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr){
	return ((uintptr_t)(void*)ptr);
}

Data*	Serializer::deserialize(uintptr_t raw){
	return ((Data*)raw);
}