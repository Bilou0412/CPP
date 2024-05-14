#include "Bureaucrat.class.hpp"

int main()
{
  try
  {
    Bureaucrat bu(150, "bil");
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {

  }
  catch (Bureaucrat::GradeTooLowException &e)
  {
    
  }
}
