#include <iostream>
using namespace std;

class Calculator {
public:
    // Pehla function: Yeh do integers ko plus karega
    int add(int a, int b) {
        return a + b;
    }

    // Doosra function: Naam same hai, par yeh teen integers ko plus karega
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator cal;
    
    // Compiler khud samajh jayega keh kab kaunsa function chalana hai
    cout << "Do numbers ka sum: " << cal.add(5, 10) << endl;      // Pehla chalega
    cout << "Teen numbers ka sum: " << cal.add(5, 10, 15) << endl; // Doosra chalega

    return 0;
}
