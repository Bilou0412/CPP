#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <stdexcept>
#include "Form.class.hpp"
class Form;
class Bureaucrat
{
public:
  // Constructeur
  Bureaucrat(int grade, const std::string &name);
  Bureaucrat(const Bureaucrat &copy);

  // destructeur
  ~Bureaucrat();

  // Surcharge d'operateur
  Bureaucrat &operator=(const Bureaucrat &src);

  // Foncion Publique
  void incrementGrade();
  void decrementGrade();
  void signForm(Form &form);

  // getter
  const std::string getName() const;
  int getGrade() const;

  // Class except

  class GradeTooHighException : public std::exception
  {
  public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception
  {
  public:
    virtual const char *what() const throw();
  };

private:
  const std::string _name;
  int _grade;
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &object);

#endif