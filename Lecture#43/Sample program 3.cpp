#include<iostream>
#include<conio.h>
using namespace std;
//return illegal value
void gerNumber(int &a , int &b)
{
	cout<<"Enter a number:";
	cin>> a>>b;
}
int Quotient (int a , int b)
{
	if (b==0)
	{
		b=1;   
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
