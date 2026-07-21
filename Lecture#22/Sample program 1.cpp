#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Janwar kha raha hai..." << endl;
    }
};

// Explicitly bataya keh Dog "IS-A" Animal (Public Inheritance)
class Dog : public Animal {
public:
    void bark() {
        cout << "Kutta bhaunk raha hai..." << endl;
    }
};

int main() {
    Dog myDog;
    
    // 1. Explicit use: Dog ka object Animal ke functions direct call kar raha hai
    myDog.eat(); 
    myDog.bark();

    // 2. Implicit Use (Upcasting): 
    // Parent class ka pointer Child class ke object ko point kar raha hai.
    // C++ isay quietly (implicitly) accept karta hai kyunki Dog "IS-A" Animal hai.
    Animal* myAnimal = &myDog; 
    
    myAnimal->eat(); // Yeh chalega
    // myAnimal->bark(); ? Yeh nahi chalega kyunki pointer Animal ka hai aur Animal bhaunk nahi sakta!

    return 0;
}
