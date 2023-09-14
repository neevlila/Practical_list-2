#include <iostream>
using namespace std;
void func1(int numVal)
{
    numVal++;
}
void func2(int &numRef) 
{
    numRef++;
}

int main()
{
    int num = 5;

    func1(num);

    cout<<"Call by value numval::"<<num<<endl; 
    
    func2(num);

	cout<<"Call by Ref numRef::"<<num;

	cout<< "220130318021";

    return 0;
}
