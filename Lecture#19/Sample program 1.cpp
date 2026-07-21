#include <iostream>
#include<conio.h>
using namespace std;
// insertion or extraction operator
class Box
{
	public:
		int weight;
		friend istream& operator>> (istream& input , Box& b )
		{
			input>> b.weight;
			return input;
		}
			friend ostream& operator<< (ostream& output , const Box& b )
		{
			output<< "box weight:"<< b.weight; 
			return output;
		}
};
main()
{
	Box b1 , b2;
	cout<<"Enter weight:";
	cin>>b1;
	cout<<"Enter weight:";
	cin>>b2;
	
	cout<< b1<< "\n" << b2 ;

getch;
return 0;
}
