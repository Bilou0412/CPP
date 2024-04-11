#include<string>
#include<iostream>
#include<limits> 
#include"PhoneBook.class.hpp"

int main (void)
{
    PhoneBook PhoneBook;

    std::string cmd;
    while(1 && !std::cin.eof())
    {   
        std::cout << "Enter Command : ";
        std::getline(std::cin, cmd);
        if(cmd == "ADD")
            PhoneBook.add();
        else if(cmd == "SEARCH")
            PhoneBook.search();
        else if (cmd == "EXIT")
        {
            std::cout<< "salam"<<std::endl;
            return (0);
        }
        else if (std::cin.eof())
        {   
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        else
            std::cout<< "Bad Command"<<std::endl;
    }
}
