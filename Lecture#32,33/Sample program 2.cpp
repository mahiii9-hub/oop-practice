#include<iostream>
#include<conio.h>
using namespace std;
// function template
template<class K , class H>
void display(K a , H b)
{
	cout<< "a : "<< a<< "\t b :"<< b;
};
int main()
{
	display(20 , 30.5);
	getch();
	return 0;
}




