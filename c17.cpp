#include <iostream>
using namespace std;
float absolute(float var)
{
    if (var < 0.0)
        var = -var;
    return var;
}

int absolute(int var)
{
     if (var < 0)
         var = -var;
    return var;
}
int main()
{
    cout << "Absolute value of -5 = " << absolute(-5) << endl;
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;
    
    cout<<"Enrollment no. 220130318021";
    
    return 0;
}
