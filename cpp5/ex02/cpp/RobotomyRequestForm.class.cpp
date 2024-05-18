#include "RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : AForm(72, 45, name)
{
}
RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
  if (executor.getGrade() >= this->getGradeExecute())
    throw GradeTooLowException();
  if (!this->getSigned())
    throw FormNotSigned();
  std::cout << "* some drilling noises *" << std::endl;
  if (std::rand() % 2)
    std::cout << this->getName() << " has been robotomized succesfully" << std::endl;
  else
    std::cout << this->getName() << "'s robotomy failed" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
  (void)src;
  return (*this);
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : AForm(72, 45, cpy.getName())
{
}