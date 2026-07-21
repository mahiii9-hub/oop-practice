#include<iostream>
#include<conio.h>
using namespace std;
//  static
template<class T>
class A
{
	public:
		static T data;
		A()
		{
			data ++;
		}
	};
		template<class T>

		T A<T>::data=1;
		
int main()
{
	A<int>obj[10];
	cout<< " \n\n " << obj[9].data;
	return 0;
	getch();
}


