#include <iostream>
using namespace std;

//Name: Yaman Hasan Ansari
//PRN:23070123155

int main() {
    // Arithmetic Operators
    int a = 10;
    int b = 5;
    
    cout<< "Arithmetic Operators:" <<endl;
    cout<< "a + b = " << a + b <<endl;
    cout<< "a - b = " << a - b <<endl;
    cout<< "a * b = " << a * b <<endl;
    cout<< "a / b = " << a / b <<endl;
    cout<< "a % b = " << a % b <<endl;

    // Assignment Operators
    int c = a;
    c += b;
    cout<< "Assignment Operators:" <<endl;
    cout<< "c after c += b: " << c <<endl;
    c -= b;
    cout<< "c after c -= b: " << c <<endl;
    c *= b;
    cout<< "c after c *= b: " << c <<endl;
    c /= b;
    cout<< "c after c /= b: " << c <<endl;
    c %= b;
    cout<< "c after c %= b: " << c <<endl;

    // Comparison Operators
    cout<< "Comparison Operators:" <<endl;
    cout<< "a == b: " << (a == b) <<endl;
    cout<< "a != b: " << (a != b) <<endl;
    cout<< "a > b: " << (a > b) <<endl;
    cout<< "a < b: " << (a < b) <<endl;
    cout<< "a >= b: " << (a >= b) <<endl;
    cout<< "a <= b: " << (a <= b) <<endl;    

    return 0;
}
