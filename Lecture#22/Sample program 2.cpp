#include <iostream>
using namespace std;

class Parent {
public:
    string publicData = "Main PUBLIC hoon, mujhe sab dekh sakte hain.";

protected:
    string protectedData = "Main PROTECTED hoon, sirf meri family (Child) mujhe dekh sakti hai.";
};

// Child class banayi jo Parent se judi hai
class Child : public Parent {
public:
    void showData() {
        // Child class protected data ko direct use kar sakti hai
        cout << protectedData << endl; 
    }
};

int main() {
    Child obj;

    // Public ko main() mein direct call kar sakte hain
    cout << obj.publicData << endl; 

    // obj.protectedData; ? Yeh ERROR dega! main() protected ko direct haath nahi laga sakta.

    // Magar child ke function ke zariye hum use dekh sakte hain
    obj.showData(); 

    return 0;
}
