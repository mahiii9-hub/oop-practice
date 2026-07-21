#include<iostream>
#include<conio.h>
using namespace std;
// multiple inheritence
class A{
		
	public:
	void funA(){
		cout<<"value of A:";
	}
};
class B{
		public:
	void funB(){
		cout<<"value of B:";
	}
};
class C: public A , public B
{
	
};
int main()
{
	C obj;
obj.funA();
obj.funB();

	getch();
	return 0;
}
