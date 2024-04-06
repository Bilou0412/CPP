#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"


PhoneBook::PhoneBook(void)
{
    this->index = 0;
}

void    PhoneBook::add(void)
{
    if (this->index > 8)
        this->index = 0;

    std::string PhoneNb;
    std::cout << "Phone Number" << std::endl;
    std::cin >> PhoneNb;
    this->Contact_list[this->index].SetPhoneNumber(PhoneNb);

    std::string FirstName;
    std::cout << "First Name" << std::endl;
    std::cin >> FirstName;
    this->Contact_list[this->index].SetFirstName(FirstName);

    

    this->index++;
}

void    PhoneBook::search()
{

}