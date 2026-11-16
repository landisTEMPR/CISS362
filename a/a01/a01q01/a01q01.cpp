//=========================
//
//  Name : Brysen Landis
//
//  File : a01q01.cpp
//
//=========================

#include <iostream>
#include <vector>

void print(std::vector<int>& n1)
{
  for (int i = 0; i < n1.size(); i++)
  {
    std::cout << n1[i];
  }
  std::cout << '\n';
}

void flip(std::vector<int>& n1, int end)
{
  int lo = 0, hi = end;
  while (lo < hi) 
  {
    int t = n1[lo];
    n1[lo] = n1[hi];
    n1[hi] = t;

    lo++;
    hi--;
  }
}

void sort(std::vector<int>& n1)
{
  int n = n1.size();
  for (int k = n - 1; k > 0; k--)
  {
    int maxidx = 0;
    for (int i = 1; i <= k; i++)
    {
      if (n1[i] >= n1[maxidx])
      {
        maxidx = i;
      }
    }
    if (maxidx == k) continue;
    if (maxidx != 0)
    {
      flip(n1, maxidx);
      print(n1);
    }
    flip(n1, k);
    print(n1);
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

  print(digits);
  sort(digits);
  return 0;
}


