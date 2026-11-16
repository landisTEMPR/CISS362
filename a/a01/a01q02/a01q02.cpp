//=========================
//
//  Name : Brysen Landis
//
//  File : a01q02.cpp
//
//=========================

#include <iostream>
#include <vector>


std::ostream & operator<<(std::ostream & cout, const std::vector<int>& v)
{
  for (unsigned int i = 0; i < v.size(); i++)
  {
    cout << v[i] << ' ';
  }
  return cout;
}


std::vector<int> delta(std::vector<int>& L)
{

  std::vector<int> X;

  return X;
}


int main()
{
  std::vector<int> L;
  int n;
  while (std::cin >> n && n != -1)
  {
    L.push_back(n);
  }

  std::cout << L << '\n'; 

  return 0;
}
