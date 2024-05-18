#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &name) : AForm(25, 5, name)
{
}
PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
  if (!this->getSigned())
    throw FormNotSigned();
  if (executor.getGrade() > this->getGradeExecute())
    throw GradeTooLowException();
  std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : AForm(5, 25, cpy.getName())
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
  (void)src;
  return (*this);
}