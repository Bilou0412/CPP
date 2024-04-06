#include "Contact.class.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::SetFirstName(std::string FirsName)
{
   this->FirstName =  FirstName;
}

void Contact::SetLastName(std::string LastName)
{
    this->LastName = LastName;
}

void Contact::SetNickName(std::string NickName)
{
    this->NickName = NickName;
}

void Contact::SetPhoneNumber(std::string PhoneNumber)
{
    this->PhoneNumber = PhoneNumber;
}

void Contact::SetDarkestSecret(std::string DarkestSecret)
{
    this->DarkestSecret = DarkestSecret;
}

std::string Contact::GetFirstName(void)
{
    return (this->FirstName);
}

std::string Contact::GetLastName(void)
{
    return (this->LastName);
}

std::string Contact::GetNickName(void)
{
    return (this->NickName);
}

std::string Contact::GetPhoneNumber(void)
{
    return (this->PhoneNumber);
}

std::string Contact::GetDarkestSecret(void)
{
    return (this->DarkestSecret);
}