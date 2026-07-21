#include<iostream>
#include<conio.h>
using namespace std;
// function template
template<class K >
void display(K a ,K b)
{
	  cout<< "a : "<< a << "\tb:" << b;
};
int main()
{
	display(10, 20);
	getch();
	return 0;
}



