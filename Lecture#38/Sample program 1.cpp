 #include<iostream>
#include<conio.h>
using namespace std;
//simple function ko friend
class B;
template<class T>
class A
{
	T data;
	friend B;
};
class B
{
	public:
		A<int> ib;
		A<float> fb;
		void display()
		{
			ib.data = 10;
			fb.data = 20.5;
			cout<< "\n\n :"<<ib.data;   
				cout<< "\n\n :"<<fb.data;                                                                
		}
};
int main()
{
	B obj;
	obj.display();
	getch();
	return 0;
}
