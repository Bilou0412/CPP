#include "Array.class.hpp"
#include <iostream>

int main()
{
    srand(time(NULL));
    Array<int> emptyObj;
    std::cout << "size empty array: " << emptyObj.getSize() << std::endl;
    try
    {
        emptyObj[0] = 1;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    Array<double> doubleObj(5);
    std::cout << "size: " << doubleObj.getSize() << std::endl;
    try
    {
        std::cout << "initialized array values:" << std::endl;
        for (int i = 0; i < 5; i++)
        {
            std::cout << doubleObj[i] << " | ";
            doubleObj[i] = std::rand() / 1000000;
        }
        std::cout << std::endl;
        std::cout << "array after filling: " << std::endl;
        for (int i = 0; i < 5; i++)
            std::cout << doubleObj[i] << " | ";
        std::cout << std::endl
                  << std::endl;

        Array<double> cloneDoubleObj(doubleObj);
        std::cout << "copy of first array" << std::endl;
        for (int i = 0; i < 5; i++)
            std::cout << cloneDoubleObj[i] << " | ";
        std::cout << std::endl;

        cloneDoubleObj[0] = 10.8;
        std::cout << "modifying 1 value does not affect the other" << std::endl;
        std::cout << "first array: ";
        for (int i = 0; i < 5; i++)
            std::cout << doubleObj[i] << " | ";
        std::cout << std::endl
                  << "2nd array: ";
        for (int i = 0; i < 5; i++)
            std::cout << cloneDoubleObj[i] << " | ";
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    const Array<double> constArray(doubleObj);
    std::cout << constArray[0] << std::endl;
    //constArray[0] = 3;

    return (0);
}

