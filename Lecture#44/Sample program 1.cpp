#include<iostream>
#include<conio.h>
using namespace std;
main()
{
try
{
	int a , b;
	cout<< "\n\n ENter number :";
	cin>>a>>b;
	if (b==0)
	{
		throw b;
	}
	else
	{
		cout<< " \n\n Reult id:"<<a/b;
			}
		}
catch(int myNum)
{
	cout<<"Error occured:"<< myNum;
}
getch();

return 0;
}
