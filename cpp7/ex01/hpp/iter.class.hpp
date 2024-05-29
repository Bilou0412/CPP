#ifndef ITER_CLASS_HPP
#define ITER_CLASS_HPP
#include <stdio.h>
#include <iostream>

template <typename T, typename A>
void iter(A *addr, size_t len, T func)
{
  for (size_t i = 0; i < len; i++)
    func(addr[i]);
}

template<typename T>
void    displayElement(T element)
{
    std::cout << element << std::endl;
}
#endif