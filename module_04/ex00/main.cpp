/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:25:10 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 01:52:50 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Cat.hpp"
#include "Colors.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{

	const Animal		*meta = new Animal();
	const Animal		*i = new Cat();
	const Animal		*j = new Dog();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete				i;
	delete				j;
	delete				meta;

	const WrongAnimal	*wanimal = new WrongAnimal;
	std::cout << wanimal->getType() << " " << std::endl;
	wanimal->makeSound();
	delete				wanimal;

	const WrongAnimal		*wcat = new WrongCat;
	std::cout << wcat->getType() <<  " " << std::endl;
	wcat->makeSound();
	delete wcat;
	return (0);
}
