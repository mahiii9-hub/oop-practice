#include<iostream>
#include<conio.h>
using namespace std;
// Virtual function
class Shape {
	public:
	virtual void draw()
	{
		cout<< " shape function :"<< endl;
	}
};
class Line: public Shape {
		public:
	virtual void draw()
	{
		cout<< " line function :"<< endl;
	}
	
};
class Circle: public Shape{
		public:
	virtual void draw()
	{
		cout<< " circle function :"<< endl;
	}
	
};

int main()
{
	Shape *s;

 s=  new Line ;
 s->draw();
  s=  new Circle ;
 s->draw();
	getch();
	return 0;
}
