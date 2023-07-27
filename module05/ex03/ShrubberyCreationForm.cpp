/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 05:01:17 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 06:03:51 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

char const *ShrubberyCreationForm::FileException::what() const throw() {
    return "failed to open file";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!getSigned())
        throw AForm::NotSignedException(getName());
    if (executor.getGrade() > getExecGrade())
        throw AForm::GradeTooLowException(executor.getName(), false);

    std::ofstream file((_target + "_shrubbery").c_str());
    if (!file.is_open())
        throw ShrubberyCreationForm::FileException();

    file << "      /\\      " << std::endl;
    file << "     /\\*\\     " << std::endl;
    file << "    /\\O\\*\\    " << std::endl;
    file << "   /*/\\/\\/\\   " << std::endl;
    file << "  /\\O\\/\\*\\/\\  " << std::endl;
    file << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    file << "/\\O\\/\\/*/\\/O/\\" << std::endl;
    file << "      ||      " << std::endl;
    file << "      ||      " << std::endl;
    file.close();
}
