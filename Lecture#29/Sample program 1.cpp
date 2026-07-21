#include<iostream>
#include<conio.h>
using namespace std;
// simple virtual function
class Base{
	public:
	virtual void draw()
	{
		cout<< " Base function :"<< endl;
	}
};
class Derived: public Base{
		public:
	virtual void draw()
	{
		cout<< " Derived function :"<< endl;
	}
	
};

int main()
{
	Base *s; 
	Derived d;
 s=  &d;
 s->draw();
 // * Base *s ; Base b ; Derived d; s=&b ; s-> draw ; s=&d;s  -> draw; 
 
 
	getch();
	return 0;
}
