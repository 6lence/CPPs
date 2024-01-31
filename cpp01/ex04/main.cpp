/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 07:51:16 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/26 16:35:42 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "fstream"

void	ft_replace(std::ifstream& f1, std::ofstream& f2, std::string s1, std::string s2)
{
	std::string	line;
	int			pos;
	int			new_pos;

	while (getline(f1, line))
	{
		new_pos = 0;
		pos = line.find(s1);
		if (pos == std::string::npos)
			f2 << line;
		else 
		{
			while (pos != std::string::npos)
			{
				f2 << line.substr(new_pos, pos);
				for(int i = 0; i < s2.size(); i++)
					f2 << s2[i];
				new_pos = pos + s1.size();
				pos = line.find(s1, pos + s1.size());
			}
			f2 << line.substr(new_pos, line.size());
		}
		f2 << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac != 5)
		return (std::cout << "Please give a file name and two strings as parameters" << std::endl, 0);

	std::ifstream	oldFile(av[1]);
	std::ofstream	replaceFile(std::string(av[1]).append(".replace"));
	if (!oldFile.is_open())
		return (std::cout << "File given doesnt exist !" << std::endl, 0);
	ft_replace(oldFile, replaceFile, av[3], av[4]);
	oldFile.close();
	replaceFile.close();
	return (0);
}