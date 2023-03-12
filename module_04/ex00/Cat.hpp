/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:28:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/10 23:48:20 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animals.hpp"

class Cat : public Animal
{
  public:
	Cat();
	Cat &operator=(Cat const &s);
	~Cat();
};

#endif