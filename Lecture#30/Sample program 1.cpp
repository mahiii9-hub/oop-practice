#include<iostream>
#include<conio.h>
using namespace std;
// case study using polymorphism
class Student{
	public:
		virtual void admit()
		{
			cout<< "the student is admitted:"<<endl;
		}
		virtual void checkResult();
};
void Student::checkResult(){
	cout<< "Fetchimg record .... wait :"<< endl;
}
class Science : public Student{
	public:
		void checkResult(){
			cout<<" Science department result :"<< endl;
		}
}; 

int main()
{
	Student * s1 = new Student();
	
		Student * s2 = new Science();
		cout<< " Student management System:"<< endl;
		s1 -> admit();
		s1 -> checkResult();
		cout << endl;
			s2 -> admit();
		s2 -> checkResult();
		delete s1;
		delete s2;
	getch();
	return 0;
}
