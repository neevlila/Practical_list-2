#include <iostream>
using namespace std;

int num;

int& test();

int main()
{

  test() = 7;

  cout << num;

  return 0;
}

int& test()
{
  return num;
}
