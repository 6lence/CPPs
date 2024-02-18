/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:38:17 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/18 10:58:04 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int	main(){

	std::cout << "Data		l.nb = 42" << std::endl;
	Data	l;
	l.nb = 42;
	std::cout << "uintptr_t	tmp1 = Serializer::serialize(&l);" << std::endl;
	uintptr_t	tmp1 = Serializer::serialize(&l);
	std::cout << "Data*		tmp2 = Serializer::deserialize(tmp1);" << std::endl;
	Data*	tmp2 = Serializer::deserialize(tmp1);
	std::cout << std::endl << "&l == tmp2" << std::endl;
	std::cout << "l: " << l.nb << " tmp2: " << tmp2->nb << std::endl;
	if (&l == tmp2)
		std::cout << "Same value" << std::endl;
	else
		std::cout << "Not same value" << std::endl;
	return (0);
}