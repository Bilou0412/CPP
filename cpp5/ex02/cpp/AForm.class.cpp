#include "../hpp/AForm.class.hpp"
AForm::AForm(const int gradeExecute, const int gradeSigned, const std::string &name) : _name(name), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute), _signed(false)
{
  if (gradeExecute < 1 || gradeSigned < 1)
    throw GradeTooHighException();
  else if (gradeExecute > 150 || gradeSigned > 150)
    throw GradeTooLowException();
}

AForm::AForm(const AForm &copy) : _name(copy._name), _gradeSigned(copy._gradeSigned), _gradeExecute(copy._gradeExecute), _signed(copy._signed) {}

AForm &AForm::operator=(const AForm &src)
{
  _signed = src._signed;
  return (*this);
}
AForm::~AForm(){};

const std::string AForm::getName() const
{
  return (_name);
}
int AForm::getGradeSigned() const
{
  return (_gradeSigned);
}
int AForm::getGradeExecute() const
{
  return (_gradeExecute);
}
bool AForm::getSigned() const
{
  return (_signed);
}

void AForm::beSigned(Bureaucrat &bureaucrate)
{
  if (bureaucrate.getGrade() <= this->getGradeSigned())
    this->_signed = true;
  else
    throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const AForm &object)
{
  if (object.getSigned())
    os << object.getName() << ", Signed grade " << object.getGradeSigned() << ", Execute Grade " << object.getGradeExecute() << ", is signed " << std::endl;
  else
    os << object.getName() << ", Signed grade " << object.getGradeSigned() << ", Execute Grade " << object.getGradeExecute() << ", is not signed " << std::endl;
  return (os);
}

const char *AForm::GradeTooHighException::what() const throw()
{
  return ("Grade too High for the form");
}

const char *AForm::GradeTooLowException::what() const throw()
{
  return ("Grade too Low for the form");
}
const char *AForm::FormNotSigned::what() const throw()
{
  return ("Form is not signed");
}
