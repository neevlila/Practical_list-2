#include <iostream>
using namespace std;
void display(char = '*', int = 3);
int main() 
{
    int count = 5;

	cout<< "Enrollment no. 220130318021"<<endl;

	cout << "No argument passed: ";

    display(); 
    
    cout << "First argument passed: ";
     
    display('#'); 
    
    cout << "Both arguments passed: ";
    display('$', count); 

    return 0;
}

void display(char c, int count)
{
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}
