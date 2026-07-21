#include<iostream>
#include<conio.h>
using namespace std;
 template<class T>
 class myClass
 {
  private:
  T a, b ;
  public:
  myClass( T num1, T num2)
  {
  	a = num1;
  	b=num2;
  }
  T sum()
  {
  	return a+b;
  }
 };
 int main()
 {
 	myClass<int> intnum(10 , 20);
 		myClass<float> floatnum(10 , 20);
 		cout<<"10 + 20 :"<<intnum.sum();
 			cout<<"\n\n 10.5 + 20.5 :"<<floatnum.sum();
 			getch();
 			return 0;
 }
