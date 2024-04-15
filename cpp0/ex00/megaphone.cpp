#include <iostream>

int main(int argc , char **argv)
{
    int i = 1;
    int j = 0;
    if (argc < 2)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ,0);
    while(i < argc)
    {
        while(argv[i][j])
        {
            std::cout << (char)toupper(argv[i][j]) ;
            j++;
        }
        std::cout << " ";
        j = 0;
        i++; 
    }
    std::cout << std::endl;
    return (0);
}