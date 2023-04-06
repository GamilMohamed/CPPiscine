/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:28:02 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 06:46:55 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void  test_intern( void )
{
	Bureaucrat  crat("Manager", 149);
	Intern   employe;
	Intern   copy(employe);

	Form *pform = copy.makeForm("Shrubbery request", "loldsds");
	//Form *pform = copy.makeForm("RobotomyRequestForm", "BENDER");
	//Form *pform = copy.makeForm("PresidentialPardonForm", "STUDENT");
	std::cout << *pform << std::endl;
	crat.signForm(*pform);
	pform->execute(crat);
	delete pform;
}
	
void  success( std::string type, std::string name)
{
	if (type == "Presidential")
	{
		Bureaucrat success("okay", 3);
		std::cout << success << std::endl;
		PresidentialPardonForm formsuccess(name);
		formsuccess.beSigned(success);
		std::cout << formsuccess << std::endl;
		formsuccess.execute(success);
	}
	else if (type == "Robotomy")
	{
		Bureaucrat success("okay", 13);
		RobotomyRequestForm formsuccess(name);
		std::cout << success << std::endl;
		formsuccess.beSigned(success);
		std::cout << formsuccess << std::endl;
		formsuccess.execute(success);
	}
	else if (type == "Shrubbery")
	{
		Bureaucrat success("okay", 1);
		ShrubberyCreationForm formsuccess(name);
		std::cout << success << std::endl;
		formsuccess.beSigned(success);
		std::cout << formsuccess << std::endl;
		formsuccess.execute(success);
	}
}

void  failure( std::string type, std::string name)
{
	if (type == "Presidential")
	{
		Bureaucrat fail("failure", 27);
		std::cout << fail << std::endl;
		PresidentialPardonForm formfail(name);
		formfail.beSigned(fail);
		std::cout << formfail << std::endl;
		formfail.execute(fail);
	}
	else if (type == "Robotomy")
	{
		Bureaucrat fail("failure", 95);
		RobotomyRequestForm formfail(name);
		std::cout << fail << std::endl;
		formfail.beSigned(fail);
		std::cout << formfail << std::endl;
		formfail.execute(fail);
	}
	else if (type == "Shrubbery")
	{
		Bureaucrat fail("failure", 138);
		ShrubberyCreationForm formfail(name);
		std::cout << fail << std::endl;
		formfail.beSigned(fail);
		std::cout << formfail << std::endl;
		formfail.execute(fail);
	}
}
int main(void)
{
	try {
		test_intern();
	}
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
}
