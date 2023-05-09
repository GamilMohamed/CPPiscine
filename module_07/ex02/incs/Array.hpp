/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:01:12 by raaga             #+#    #+#             */
/*   Updated: 2023/04/12 02:30:49 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
    private :
        unsigned int   _size;
        T   *_array;
    public :
        Array<T>( void ) : _size(0), _array(NULL){ std::cout << "Array default constructor called" << std::endl; }
        ~Array<T>( void ) {
            std::cout << "Array destructor called" << std::endl;
            delete [] this->_array;
        }
        Array<T>(unsigned int i) : _size(i), _array(new T[i]) { std::cout << "Array constructor called" << std::endl; }
        Array<T> &operator=(Array<T> const &rhs)
		{
			std::cout << "Array assignation operator called" << std::endl;
			if (this != &rhs)
			{
            	this->_size = rhs._size;
            	this->_array = new T[rhs._size];
            	for (unsigned int i = 0; i < rhs._size; i++)
            	    this->_array[i] = rhs._array[i];
            }
            return (*this);
        }
        T   &operator[](unsigned int const n) const{
            if (n < 0 || n >= this->_size) {
                throw ErrorTabException();
            }
            return (this->_array[n]);
        }
        Array<T>(Array<T> const &copy) { std::cout << "Array copy constructor called" << std::endl; *this = copy; }
        class ErrorTabException : public std::exception {
            public :
                virtual const char * what() const throw() {
                    return ("this grade of tab is fault");
                }
        };
        unsigned int size( void ) const { return (this->_size); }
		void	print(void) {
            for(int i = 0; i < static_cast<int>(this->_size); i++)
                std::cout << this->_array[i] << std::endl;
        }
        void	change(void (*ptr_fct)(T &i)) {
            for (int i = 0; i < static_cast<int>(this->_size); i++)
                ptr_fct(this->_array[i]);
        }
};

#endif