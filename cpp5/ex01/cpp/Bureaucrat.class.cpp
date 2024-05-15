#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(int grade, const std::string &name) : _name(name)
{
  if (grade < 1)
    throw GradeTooHighException();
  else if (grade > 150)
    throw GradeTooLowException();
  _grade = grade;
}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
  *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
  _grade = src._grade;
  return (*this);
}

const std::string Bureaucrat::getName() const
{
  return (_name);
}

int Bureaucrat::getGrade() const
{
  return (_grade);
}
void Bureaucrat::incrementGrade()
{
  if (_grade - 1 < 1)
    throw GradeTooHighException();
  _grade--;
}
void Bureaucrat::decrementGrade()
{

  if (_grade + 1 > 150)
    throw GradeTooLowException();
  _grade++;
}
void Bureaucrat::signForm(Form &form)
{
  try
  {
    form.beSigned(*this);
    std::cout << this->getName() << " signed " << form.getName() << std::endl;
  }
  catch (Form::GradeTooLowException &e)
  {
    std::cout << this->getName() << " couldn’t sign " << form.getName() << " beceause " << e.what() << std::endl;
  }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &object)
{
  os << object.getName() << ", bureaucrat grade " << object.getGrade() << std::endl;
  return (os);
}
