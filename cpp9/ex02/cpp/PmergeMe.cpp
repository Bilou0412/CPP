#include "PmergeMe.hpp"
bool PmergeMe::checkSecNum(char **secNum)
{
  for (int i = 0; secNum[i]; i++)
  {
    for (int y = 0; secNum[i][y]; y++)
    {
      if (!isdigit(secNum[i][y]))
        return (true);
    }
  }
  return (false);
}

bool PmergeMe::checkVecDuplicate(std::vector<int> &vec)
{
  std::set<int> seen;
  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
  {
    if (seen.find(*it) != seen.end())
      return (true);
    seen.insert(*it);
  }
  return (false);
}

void PmergeMe::sortList(std::list<int> &list)
{
  int n = list.size();
  if (n <= 1)
    return;
  std::list<int> S;
  std::list<int> unpaired;
  std::list<int>::iterator it = list.begin();
  for (int i = 0; i < n / 2; ++i)
  {
    int first = *it;
    ++it;
    int second = *it;
    ++it;
    if (first > second)
    {
      S.push_back(first);
      unpaired.push_back(second);
    }
    else
    {
      S.push_back(second);
      unpaired.push_back(first);
    }
  }
  if (n % 2 != 0)
    unpaired.push_back(*it);
  sortList(S);
  std::list<int>::iterator unpaired_it = unpaired.begin();
  while (unpaired_it != unpaired.end())
  {
    std::list<int>::iterator S_it = S.begin();
    while (S_it != S.end() && *S_it < *unpaired_it)
      ++S_it;
    S.insert(S_it, *unpaired_it);
    ++unpaired_it;
  }
  list = S;
}

void PmergeMe::sortVector(std::vector<int> &vector)
{
  int n = vector.size();
  if (n <= 1)
    return;
  std::vector<int> S(n / 2);
  std::vector<int> unpaired(n - n / 2);
  for (int i = 0; i < n / 2; ++i)
  {
    if (vector[2 * i] > vector[2 * i + 1])
    {
      S[i] = vector[2 * i];
      unpaired[i] = vector[2 * i + 1];
    }
    else
    {
      S[i] = vector[2 * i + 1];
      unpaired[i] = vector[2 * i];
    }
  }
  if (n % 2 != 0)
    unpaired[n / 2] = vector[n - 1];
  sortVector(S);
  std::vector<int>::iterator it = std::lower_bound(S.begin(), S.end(), unpaired[0]);
  S.insert(it, unpaired[0]);
  for (int i = 1; i < n - n / 2; ++i)
  {
    it = std::lower_bound(S.begin(), S.end(), unpaired[i]);
    S.insert(it, unpaired[i]);
  }
  std::copy(S.begin(), S.end(), vector.begin());
}

PmergeMe::PmergeMe(char **secNum, int argc)
{
  if (checkSecNum(secNum + 1))
    throw std::runtime_error("Error : bad argument not number or not positive value");
  for (int i = 1; i < argc; ++i)
    _vec.push_back(std::atoi(secNum[i]));
  if (checkVecDuplicate(_vec))
    throw std::runtime_error("Error : Duplicate number");
  std::vector<int> vecCopy = _vec;
  _list.assign(_vec.begin(), _vec.end());
  clock_t start, end;
  start = clock();
  sortVector(_vec);
  end = clock();
  double vecTime = double(end - start) / CLOCKS_PER_SEC;

  start = clock();
  sortList(_list);
  end = clock();
  double listTime = double(end - start) / CLOCKS_PER_SEC;

  std::cout << "Before: ";
  for (std::vector<int>::iterator it = vecCopy.begin(); it != vecCopy.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;

  std::cout << "After: ";
  for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;

  std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector: " << vecTime * 1000000 << " microsecond" << std::endl;
  std::cout << "Time to process a range of " << _list.size() << " elements with std::list: " << listTime * 1000000 << " microsecond" << std::endl;
}

PmergeMe::~PmergeMe() {}