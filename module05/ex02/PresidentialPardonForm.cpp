/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 06:01:18 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 06:18:44 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (!getSigned())
        throw AForm::NotSignedException(getName());
    if (executor.getGrade() > getExecGrade())
        throw AForm::GradeTooLowException(executor.getName(), false);
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
