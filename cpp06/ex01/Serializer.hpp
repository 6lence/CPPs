/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:26:32 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/18 10:54:38 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		Serializer(Serializer const& cp);
		~Serializer();
		Serializer&	operator=(Serializer const& cp);

	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};