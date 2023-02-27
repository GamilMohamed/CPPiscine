/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:43:13 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/23 07:57:16 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include "Colors.hpp"

void	eraseReplace(std::ifstream& file, std::string& find, std::string& rep, std::string output)
{
	int		i;
	int		j;
	size_t	occ;
	size_t	lenREP = rep.length();
	size_t	lenFIND = find.length();
	std::string string;

	i = 0;
	std::ofstream ofs(output.c_str());
	if (!ofs)
		return ;
	while (getline(file, string))
	{
		j = 0;
		while ((occ = string.find(find, j)) != std::string::npos)
		{
			string.erase(occ, lenFIND);
			string.insert(occ, rep);
			j = occ + lenREP;
		}
		ofs << string << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << BMAGENTA << "./sedCPP [file] [search] [replace]" << RESET << std::endl, 1);
	std::ifstream ifs(av[1]);
	std::string str(av[2]);
	std::string s2(av[3]);
	std::string file(av[1]);
	if (!ifs)
		return (std::cout << RED << "can't open file!" << RESET << std::endl, 1);
	if (!*av[2])
		return (std::cout << IRED << "arg can't be empty !" << RESET << std::endl, 1);
	eraseReplace(ifs, str, s2, file += ".replace");
}