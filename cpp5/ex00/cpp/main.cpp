#include "Bureaucrat.class.hpp"

int main()
{
  // HightRank test
  try
  {
    Bureaucrat bu(0, "Ray");
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch (Bureaucrat::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  Bureaucrat bu(1, "Ray");
  try
  {
    bu.incrementGrade();
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch (Bureaucrat::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << bu << std::endl;

  // LowRank Test
  try
  {
    Bureaucrat bu(151, "Row");
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch (Bureaucrat::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  Bureaucrat ba(150, "Row");
  try
  {
    ba.decrementGrade();
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch (Bureaucrat::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << ba << std::endl;

  // test copy operator ;
  ba = bu;
  std::cout << ba << std::endl;

  Bureaucrat copy(ba);
  std::cout << ba << std::endl;
}
