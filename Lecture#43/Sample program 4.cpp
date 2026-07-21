#include<iostream>
#include<conio.h>
using namespace std;
//return error code
void gerNumber(int &a , int &b)
{
	cout<<"Enter a number:";
	cin>> a>>b;
}
bool Quotient (int a , int b)
{
	if (b==0)
	{
		return true;
	}
	return false;
}
main()
{
	int a , b;
	gerNumber(a,b);
	if(Quotient(a,b))
	{
		cout<< "\n\n Deniminator can not be zero";
		exit(0);
	}
	else
	{
	
		cout<<  "\n\n Answert oa " << a<< "/ "<< b<< ":"<< Quotient(a,b);
	}
return 0;
getch();
}
