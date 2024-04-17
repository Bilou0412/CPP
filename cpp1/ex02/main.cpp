#include <string>
#include <iostream>
#include <iomanip>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Adresse de la string en mémoire : " << &str << std::endl;
    std::cout << "Adresse stockée dans stringPTR : " << stringPTR << std::endl;
    std::cout << "Adresse stockée dans stringREF : " << &stringREF << std::endl;

    std::cout << "" << str << std::endl;
    std::cout << "" << *stringPTR << std::endl;
    std::cout << "" << stringREF << std::endl;

    return (0);
}