#include<iostream>
#include<conio.h>
using namespace std;
//pure virtual function
class Shape {
	public:
	virtual void draw() = 0;
};

class Line: public Shape {
		public:
	virtual void draw()
	{
		cout<<" line function :"<< endl;
	}
	
};

int main()
{
	Line p ;
	p.draw();
	getch();
	return 0;
}
