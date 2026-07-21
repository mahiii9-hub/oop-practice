#include<iostream>
#include<conio.h>
using namespace std;
// abnornal 
void gerNumber(int &a , int &b)
{
	cout<<"Enter a number:";
	cin>> a>>b;
}
int Quotient (int a , int b)
{
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
