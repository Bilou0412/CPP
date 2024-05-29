#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &n1, T &n2)
{
  T n3;
  n3 = n1;
  n1 = n2;
  n2 = n3;
}

template <typename T>
T min(T n1, T n2)
{
  if (n1 < n2)
    return (n1);
  return (n2);
}
template <typename T>
T max(T n1, T n2)
{
  if (n1 > n2)
    return (n1);
  return (n2);
}
#endif