
#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "Intern.class.hpp"

int main()
{
	Bureaucrat yes(20, "yes");
	Intern someRandomIntern;

	AForm *randomForm = someRandomIntern.makeForm("robotomy request", "jean");
	yes.signForm(*randomForm);
	yes.executeForm(*randomForm);
	delete randomForm;
	AForm *randomForm2 = someRandomIntern.makeForm("robotomyddddd request", "jean");
	delete randomForm2;
	return (0);
}
