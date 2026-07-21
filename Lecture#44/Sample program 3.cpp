#include<iostream>
#include<conio.h>
using namespace std;
// multi try catch block
main()
{
try
{
	int a , b;
	cout<< "\n\n ENter number :";
	cin>>a>>b;
	if (b==0)
	{
		throw "Denimonator i zero";
	}
	else if(b< 0)
	{
		throw b;
	}
	else
	{
		cout<< " \n\n Reult id:"<<a/b;
			}
		}
catch(string myValue)
{
	cout<<"\n\n"<< myValue;
}

catch(int myNum)
{
	cout<<"\n\n value of b : "<< myNum;
}

getch();

return 0;
}
