#include<iostream>
#include<conio.h>
using namespace std;
// without static
template<class T>
class A
{
	public:
		T data;
		A()
		{
			data = 1;
			data ++;
		
		}
};
int main()
{
	A<int>obj[10];
	cout<< " \n\n " << obj[9].data;
	return 0;
	getch();
}


