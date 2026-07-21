#include<iostream>
#include<conio.h>
using namespace std;
class Array{
	int arr[3] = {10 , 20 ,30};
public:
	void show(int index){
	
	cout<< "the value is: "<< index<< "is :" << arr[index]<< endl;}
	};
main()
{ 
    Array m;
    m.show(2);

	getch();
	return 0;

}
