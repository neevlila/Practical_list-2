#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n = 10;
	
    cout<<"value of a is : "<<n<<endl;
	cout<<"This is for function setw : "<<setw(5)<<setfill('*')<<n;
      
	return 0;
}
