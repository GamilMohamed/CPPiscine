/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 00:10:38 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 02:01:02 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute_(void) const
{
	std::ofstream file;
	file.open((_target + "_shrubbery").c_str());
	file << "             _{\\ _{\\{\\/}/}/}__ " << std::endl;
	file << "            {/{/\\}{/{/\\}(\\}{/\\} _ " << std::endl;
	file << "           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _ " << std::endl;
	file << "        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\} " << std::endl;
	file << "       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/} " << std::endl;
	file << "      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/} " << std::endl;
	file << "     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\} " << std::endl;
	file << "     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\} " << std::endl;
	file << "    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\} " << std::endl;
	file << "     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/} " << std::endl;
	file << "      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_) " << std::endl;
	file << "     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/} " << std::endl;
	file << "      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\} " << std::endl;
	file << "        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\} " << std::endl;
	file << "         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_) " << std::endl;
	file << "           {/{/{\\{\\/}{/{\\{\\{\\(_)/} " << std::endl;
	file << "            {/{\\{\\{\\/}/}{\\{\\\\}/} " << std::endl;
	file << "             {){/ {\\/}{\\/} \\}\\} " << std::endl;
	file << "             (_)  \\.-'.-/ " << std::endl;
	file << "         __...--- |'-.-'| --...__ " << std::endl;
	file << "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__ " << std::endl;
	file << "-\"    ' .  . '    |.'-._| '  . .  '   " << std::endl;
	file << ".  '-  '    .--'  | '-.'|    .  '  . ' " << std::endl;
	file << "         ' ..     |'-_.-| " << std::endl;
	file << " .  '  .       _.-|-._ -|-._  .  '  . " << std::endl;
	file << "             .'   |'- .-|   '. " << std::endl;
	file << " ..-'   ' .  '.   `-._.-´   .'  '  - . " << std::endl;
	file << "  .-' '        '-._______.-'     '  . " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
	: Form("ShrubberyCreationForm", 145, 137), _target(name)
{
	if (!HIDEMSG)
      std::cout << "Shrubbery constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
	: Form(src)
{
	if (!HIDEMSG)
      std::cout << "Shrubbery copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if (!HIDEMSG)
      std::cout << "Shrubbery destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (!HIDEMSG)
      std::cout << "Shrubbery assignment operator called" << std::endl;
	_target = src._target;
	return (*this);
}
