#include <iostream>
using namespace std;
//copy constructor using inheritence
class Parent
{
public:
    int x;
    Parent(int a)
    {
        x = a;
    }  
    Parent(const Parent &p)
    {
        x = p.x;
    }
};
class Child : public Parent
{
public:
    int y;

    Child(int a, int b) : Parent(a)
    {
        y = b;
    }
    Child(const Child &c) : Parent(c)
    {
        y = c.y;
    }
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
int main()
{
    Child obj1(10, 20);

    // Copy Constructor is called
    Child obj2 = obj1;

    cout << "Original Object:" << endl;
    obj1.display();

    cout << "\nCopied Object:" << endl;
    obj2.display();

    return 0;
}
