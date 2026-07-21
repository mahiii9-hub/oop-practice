#include <iostream>
#include<conio.h>
using namespace std;


//over ridding

class Base {
public:
   
    void sum(int a, int b) {
      cout<< " Sum is:"<< a+b;
    }
};
class Derived: public Base
{
	public: 
	 void sum(int a, int b) {
	 	Base::sum(20,20);
           cout<< " Sum is:"<< a+b;
}
  };

int main() {
  Derived d;
  d.sum(10, 20);
getch();
    return 0;
}
