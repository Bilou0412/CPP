#include "../hpp/Form.class.hpp"

Form::Form(const int gradeExecute, const int gradeSigned, const std::string &name) : _name(name), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute), _signed(false)
{
  if (gradeExecute < 1 || gradeSigned < 1)
    throw GradeTooHighException();
  else if (gradeExecute > 150 || gradeSigned > 150)
    throw GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy._name), _gradeSigned(copy._gradeSigned), _gradeExecute(copy._gradeExecute), _signed(copy._signed) {}

Form &Form::operator=(const Form &src)
{
  _signed = src._signed;
  return (*this);
}
Form::~Form(){};

const std::string Form::getName() const
{
  return (_name);
}
int Form::getGradeSigned() const
{
  return (_gradeSigned);
}
int Form::getGradeExecute() const
{
  return (_gradeExecute);
}
bool Form::getSigned() const
{
  return (_signed);
}

void Form::beSigned(Bureaucrat &bureaucrate)
{
  if (bureaucrate.getGrade() <= this->getGradeSigned())
    this->_signed = true;
  else
    throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &object)
{
  if (object.getSigned())
    os << object.getName() << ", Signed grade " << object.getGradeSigned() << ", Execute Grade " << object.getGradeExecute() << ", is signed " << std::endl;
  else
    os << object.getName() << ", Signed grade " << object.getGradeSigned() << ", Execute Grade " << object.getGradeExecute() << ", is not signed " << std::endl;
  return (os);
}
