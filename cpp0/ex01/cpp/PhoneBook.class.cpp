#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void)
{
    this->index = 0;
}
PhoneBook::~PhoneBook(void){}

void    PhoneBook::add(void)
{
    if (this->index >= 8)
        this->index = 0;

    std::string PhoneNb;
    std::cout << "Phone Number :";
    std::getline(std::cin,PhoneNb);
    this->Contact_list[this->index].SetPhoneNumber(PhoneNb);

    std::string FirstName;
    std::cout << "First Name :" ;
    std::getline (std::cin,FirstName);
    this->Contact_list[this->index].SetFirstName(FirstName);

    std::string LastName;
    std::cout << "Last Name :";
    std::getline(std::cin,LastName);
    this->Contact_list[this->index].SetLastName(LastName);

    std::string NickName;
    std::cout << "NickName :";
    std::getline(std::cin,NickName);
    this->Contact_list[this->index].SetNickName(NickName);

    std::string DarkestSecret;
    std::cout << "Darkest Secret :";
    std::getline(std::cin,DarkestSecret);
    this->Contact_list[this->index].SetDarkestSecret(DarkestSecret);

    this->index++;
}

void    PhoneBook::search()
{
    std::string index;
    std::cout << "_____________________________________________" <<std::endl;
    std::cout << "|     index|first name| last name|  nickname|" <<std::endl;
    std::cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" <<std::endl;
    for(int i = 0; i<8; i++)
    {
        std::cout<<"_____________________________________________"<<std::endl;
        std::cout<<DisplayInfo(i)<<std::endl;
        std::cout<<"‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾"<<std::endl;
    }
    while()
    {
        std::cout << "Index contact : ";
        std::getline(std::cin,index);
        if(index.size() != 1 || (index[0] < '0' || index[0] > '7'))
            std::cout << "Please Enter Number between 0 and 7 inclusive";
    }
    std::cout<<"_____________________________________________"<<std::endl;
    std::cout<<DisplayInfo(index[0] - '0')<<std::endl;
    std::cout<<"‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾"<<std::endl;
}

std::string PhoneBook::DisplayInfo(int i)
{
    std::string ToDisplay;
    int SizeOfSpace;
    std::cout << "|";
    std::cout << std::setw(10) <<(int)i;

    SizeOfSpace = 0;
    ToDisplay = this->Contact_list[i].GetFirstName();
    if (ToDisplay.size() > 10)
    {
        ToDisplay.resize(9);
        ToDisplay+= '.';
    }
    std::cout << "|";
    std::cout << std::setw(10) <<ToDisplay;
    
    SizeOfSpace = 0;
    ToDisplay = this->Contact_list[i].GetLastName();
    if (ToDisplay.size() > 10)
    {
        ToDisplay.resize(9);
        ToDisplay+= '.';
    }
    std::cout << "|";
    std::cout << std::setw(10) <<ToDisplay;

    SizeOfSpace = 0;
    ToDisplay = this->Contact_list[i].GetNickName();
    if (ToDisplay.size() > 10)
    {
        ToDisplay.resize(9);
        ToDisplay+= '.';
    }
    std::cout << "|";
    for(SizeOfSpace = 10 - ToDisplay.size(); SizeOfSpace > 0; SizeOfSpace--)
        std::cout << " ";
    std::cout<< ToDisplay << "|";

    return ("");
}