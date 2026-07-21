#include <iostream>
using namespace std;
class Father
{
	public:
	 int money;
	 Father(int m){
	 money = m;
}
};
class Son: public Father
{
	public:
	int pocketMoney;
	Son(int m , int pm ):Father(m){
		pocketMoney = pm;
	}
	void show()
	{
		cout<<"Father money:"<< money << endl;
			cout<<"Son money:"<< pocketMoney << endl;
	}
};
int main()
{
	Son s (5000 , 500);
	s.show();
    return 0;
}
