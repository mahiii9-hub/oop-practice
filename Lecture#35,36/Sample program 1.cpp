#include<iostream>
#include<conio.h>
using namespace std;
// copy contructor in class template
template< class T>
class myClass
{
private:
T a , b;
public:
myClass(T num1 , T num2)
{
	a= num1;
	b= num2;
}	
	T sum()
	{
		return a+b;
	}
};
int main()
{
	myClass<int> a(10 , 20);
		myClass<int> b = a;
		cout<< "10 + 20 ="<< a.sum();
			cout<< "10 + 20 ="<< b.sum();
return 0;
getch();
}

