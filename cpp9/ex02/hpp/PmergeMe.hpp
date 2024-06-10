#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <stdio.h>
#include <cstdlib>
#include <stack>
#include <exception>
#include <iostream>
#include <vector>
#include <list>
#include <set>

class PmergeMe
{
public:
  PmergeMe(char **secNum, int argc);
  PmergeMe(const PmergeMe &stack);
  PmergeMe &operator=(const PmergeMe &src);

  ~PmergeMe();

private:
  void sortVector(std::vector<int> &vec);
  void sortList(std::list<int> &list);
  bool checkVecDuplicate(std::vector<int> &vec);
  bool checkSecNum(char **secNum);
  std::vector<int> _vec;
  std::list<int> _list;
};

#endif