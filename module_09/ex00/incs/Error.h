/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:15:14 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/18 01:14:48 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include <iostream>
# include <string>
# include <exception>
# include <stdexcept>
# include <cstdlib>
# include "Colors.hpp"
# include <vector>
# include <list>
# include <stack>
# include <queue>
# include <map>
# include <fstream>

# define BADINPUT		"Error: bad input => "
# define NEGATIVE		"Error: not a positive number."
# define WRONGFILE		"Error: could not open file."
# define LARGENUMBER	"Error: too large a number."

typedef struct t_date
{
	int		year;
	int		month;
	int		day;
}				t_date;

#endif