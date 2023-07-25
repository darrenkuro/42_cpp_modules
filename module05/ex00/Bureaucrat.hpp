/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:19:24 by dlu               #+#    #+#             */
/*   Updated: 2023/07/25 17:08:26 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
  public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &t);
    Bureaucrat(std::string name, unsigned int grade);

    Bureaucrat &operator=(Bureaucrat const &t);

    std::string const getName(void) const;
    unsigned int const getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);

    class GradeTooHighException: public std::exception {
      public:
        GradeTooHighException() = default;

        const char *what() const noexcept override;
    };
    class GradeTooLowException: public std::exception {
      public:
        GradeTooLowException() = default;

        const char *what() const noexcept override;
    };

  private:
    static unsigned int const highBoundGrade = 150;
    static unsigned int const lowBoundGrade = 1;
    std::string const _name;
    unsigned int _grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &t);

#endif // BUREAUCRAT_HPP
