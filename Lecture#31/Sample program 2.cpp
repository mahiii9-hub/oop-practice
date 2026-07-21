#include<iostream>
#include<conio.h>
using namespace std;
//lution of multiple inheritence
class A{
		int a;
	public:
		A(){
			a=10;
		}
	void getvalue()
	{
		cout<<"value of A:"<< a;
	}
};
class B{
	int b;
	public:
		B(){
			b=100;
		}
	void getvalue()
	{
		cout<<"\n value of B:"<<b;
	}
};
class C: public A , public B
{
	
};
int main()
{
	C obj;
	obj.A::getvalue();
	obj.B::getvalue();

	getch();
	return 0;
}
