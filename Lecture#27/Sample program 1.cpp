#include<iostream>
#include<conio.h>
using namespace std;
class Base{
	public:
		int x  ;
		private :
			int y;
			protected:
				int z;
				public:
					Base(){
						x = 1 ;
						y = 2 ;
						z = 3 ;
					}
};
class PublicChild: public Base
{
	public:
		void display()
		{
			cout<< "Public child : x = "<< x<< ", z ="<< z << endl;
		}
};
class PrivateChild : public Base
{
	public:
		void display()
		{
			cout<< "Private child : x = "<< x << ", z =" << z << endl;
		}
};
class ProtectedChild : public Base
{
	public:
		void display()
		{
			cout<< "Protected child : x= "<< x<< ",z= " << z << endl;
		}
};
int main()
{
	PublicChild pub;
	pub.display();
	cout<< "Direct access to x"<< pub.x << endl;
	PrivateChild pri;
	pri.display();

	ProtectedChild pro;
	pro.display();
	getch();
	return 0;
}
