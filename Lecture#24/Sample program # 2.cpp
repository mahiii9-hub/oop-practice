#include <iostream>
using namespace std;
// shallow copy
class Demo
{
public:
    int *data;

    Demo(int value)
    {
        data = new int(value);
    }

    void display()
    {
        cout << *data << endl;
    }
};

int main()
{
    Demo d1(100);

    Demo d2 = d1;

    *d2.data = 500;

    d1.display();
    d2.display();

    return 0;
}
