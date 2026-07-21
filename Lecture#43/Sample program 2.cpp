#include<iostream>
#include<conio.h>
using namespace std;
//graceful
void gerNumber(int &a , int &b)
{
	cout<<"Enter a number:";
	cin>> a>>b;
}
int Quotient (int a , int b)
{
	if (b==0)
	{
		cout <<"\n\n Denominator can not be zero";
		exit(0);
	}
	return a/b;
}
main()
{
	int a , b;
	gerNumber(a,b);
		cout<<  "\n\n Answert oa " << a<< "/ "<< b<< ":"<< Quotient(a,b);
return 0;
getch();
}
