#include <iostream>
using namespace std;

class Score {
private:
    int points;
public:
    Score() { points = 10; } // Shuru mein points 10 hain

    // Prefix Increment (++obj) ko overload karne ka tarika
    void operator ++ () {
        ++points; // Points mein 1 plus kar diya
    }

    void display() {
        cout << "Points: " << points << endl;
    }
};

int main() {
    Score match;
    
    ++match; // Operator call hua, points 11 ho gaye
    ++match; // Dobara call hua, points 12 ho gaye

    match.display();
    return 0;
}
