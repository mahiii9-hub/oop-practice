#include<iostream>
#include<conio.h>
using namespace std;
//over riding 
class Base{

public:
	virtual void show()
	{
		cout<< " The function of base class:"<< endl;
	}
};
class Derived : public Base
{
	public:
		void show()
		{
					cout<< " The function of derivd class:"<< endl;

		}
};
int main()
{
	Base*ptr = new Derived();
	ptr -> show();
	
	
	getch();
	return 0;
}
