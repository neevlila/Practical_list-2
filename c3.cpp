#include<iostream>
using namespace std;
class temp
{
	public:
		void display();
};
void temp::display()
{
	cout<<"Hello World "<<endl;
}
int main()
{
	temp t;
	t.display();

	return 0;
}
