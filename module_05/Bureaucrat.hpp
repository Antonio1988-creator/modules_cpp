#pragma once

#include <exception>
#include <iostream>
#include <string>

typedef std::string str;

class Bureaucrat {
    public:
            Bureaucrat();
            Bureaucrat(str const &name, int const &grade);
            Bureaucrat(const Bureaucrat &other);
            ~Bureaucrat();

            Bureaucrat      &operator=(const Bureaucrat &other);

            void            incrementGrade();
            void            decrementGrade();
            
            const str       &getName() const;
            int    getGrade() const;

            class           GradeTooHighException : public std::exception {
                public:
                    virtual const char *what() const throw();
            };
            class           GradeTooLowException : public std::exception {
                public:
                    virtual const char *what() const throw();
            };
    private:
            str const       _name;
            int            _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);
