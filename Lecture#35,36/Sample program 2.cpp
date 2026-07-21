 #include<iostream>
#include<conio.h>
using namespace std;
//partrial specialization
template<int T1 , class T2>
class myClass 
{
	private:
		int a ;
		T2 b;
                	public:
			myClass(int num1 , T2 num2)
			{
				a = num1;
				b= num2;
			}
			void sum()
			{
				cout<< " sum is:"<< a+b;
			}
};
int main()
{
	myClass<30 , int> obj(30 , 10);
	obj.sum();
	getch();
	return 0;
}

