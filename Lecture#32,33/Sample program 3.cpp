#include<iostream>
#include<conio.h>
using namespace std;
// multiple type arguments template
template<class H , class K >
void print (H a , K b , H c)
{
	cout<< "\n\n"<< a+b+c;
};
int main()
{
    print(10,20.5,30);
	getch();
	return 0;
}




