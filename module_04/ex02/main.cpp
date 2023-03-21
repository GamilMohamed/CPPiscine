/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:25:10 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 20:56:03 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Cat.hpp"
#include "Colors.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void)
{
	// Animal chien = new Animal;
	Animal* chien = new Dog;
	delete chien;
	return (0);
}
