 #include<iostream>
#include<conio.h>
using namespace std;
void funB();
template<class T>
class A
{
	 T data ;
	friend void funB();
};
void funB()
{
	A<int> ib;
	A<float>  fb;
	
	
	ib.data = 10;
	fb.data = 45.5;
	
		cout<< "int function :"<<ib.data;   
				cout<< "\n\n float function :"<<fb.data;    
}
int main()
{
	funB();
	getch();
	return 0;
}
