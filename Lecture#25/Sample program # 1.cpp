#include <iostream>
using namespace std;
//overloading

class T {
public:
   
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
  T calc;


    cout << "sum 2 ints: " << calc.add(5, 10) << endl;
    cout << " sum 2 ints : " << calc.add(5, 10, 15) << endl;

    return 0;
}
