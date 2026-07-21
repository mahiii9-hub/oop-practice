 #include<iostream>
#include<conio.h>
using namespace std;
//complete  specialization
template<int T1 , int T2>
class myClass 
{
	private:
	int a, b ;
	public:
		myClass(int num1 , int num2)
		{
		a = num1;
		b = num2;
		}
		void sum()
		{
			cout<<"sum is= "<< a+b;
		}	
};
int main()
{
	myClass<30 , 10> obj(30 , 10);
	obj.sum();
	getch();
	return 0;
}

