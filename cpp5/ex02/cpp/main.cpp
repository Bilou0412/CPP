
#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"

int main()
{
  try
  {
    Bureaucrat paul(20, "paul");
    Bureaucrat john(150, "john");
    ShrubberyCreationForm home("home");

    std::cout << home << std::endl;
    john.signForm(home);
    paul.signForm(home);
    paul.executeForm(home);
    john.executeForm(home);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
    return (1);
  }
  std::cout << std::endl;
  try
  {
    Bureaucrat paul(20, "paul");
    Bureaucrat john(80, "john");
    RobotomyRequestForm robotrequest("bender");

    std::cout << robotrequest << std::endl;
    john.signForm(robotrequest);
    paul.signForm(robotrequest);
    paul.executeForm(robotrequest);
    john.executeForm(robotrequest);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
    return (1);
  }
  std::cout << std::endl;
  try
  {
    Bureaucrat paul(5, "paul");
    Bureaucrat john(145, "john");
    PresidentialPardonForm me("me");

    std::cout << me << std::endl;
    paul.signForm(me);
    paul.executeForm(me);
    john.executeForm(me);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
    return (1);
  }
}