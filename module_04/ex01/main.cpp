/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:25:10 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 20:37:44 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Cat.hpp"
#include "Colors.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	Animal* animal[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}
	for (int i = 0; i < 100; i++)
		delete animal[i]; 
	return (0);
}
