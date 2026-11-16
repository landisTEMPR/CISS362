//=========================
//
//  Name : Brysen Landis
//
//  File : a01q01.cpp
//
//=========================

#include <iostream>
#include <algorithm>
#include <vector>

void print(std::vector<int>& vec)
{
  for (int i = 0; i < vec.size(); i++)
  {
    std::cout << vec[i];
  }
  std::cout << '\n';
}


void flip(std::vector<int>& vec, int idx)
{
  std::reverse(vec.begin(), vec.begin() + idx + 1);
  print(vec);
}


size_t max(std::vector<int>& vec, size_t curr_size)
{
  size_t max_idx = 0;
  for (size_t i = 1; i < curr_size; i++)
  {
    if (vec[i] >= vec[max_idx])
    {
      max_idx = i;
    }
  }
  return max_idx;
}


void sort(std::vector<int>& vec, size_t k)
{
  if (k == 0) { return; }
  for (size_t curr_size = k; curr_size > 1; --curr_size)
  {
    size_t max_idx = max(vec, curr_size); 
    if (max_idx != curr_size - 1)
    {
      flip(vec, max_idx);
      flip(vec, curr_size - 1);
    }
  }
}


int main()
{
  int n;
  std::cin >> n;
  
  std::vector<int> digits;
  while (n > 0)
  {
    digits.insert(digits.begin(), n % 10);
    n /= 10;
  }
  size_t k = digits.size();
  print(digits);
  sort(digits, k);
  return 0;
}


