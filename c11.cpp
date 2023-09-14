#include <iostream>
using namespace std;

int num;

int& test();

int main()
{

  test() = 7;
	cout<< "Enrollment no. 2220130318021"<<endl;
  cout << num;

  return 0;
}

int& test()
{
  return num;
}
