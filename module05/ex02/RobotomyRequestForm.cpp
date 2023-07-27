/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 06:01:15 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 06:13:47 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (!getSigned())
        throw AForm::NotSignedException(getName());
    if (executor.getGrade() > getExecGrade())
        throw AForm::GradeTooLowException(executor.getName(), false);
    static unsigned int i = 0;
    if (i++ % 2 == 0) {
        std::cout << "CSZZZZZ.... (Drilling noise)" << std::endl;
        std::cout << _target << " has been robotomized!" << std::endl;
    } else {
        std::cout << "Robotomy has failed!" << std::endl;
    }
}
