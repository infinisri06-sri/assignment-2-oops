#include <iostream>
using namespace std;

// base class Shape
class Shape {
public:
    // Pure virtual function: must be overridden by derived classes
    virtual void area() = 0;
};

// Derived class Circle inherits from Shape
class Circle : public Shape {
public:
    // Override the pure virtual function to calculate area of a circle
    void area() override {
        cout << "The area of Circle: ";
        calculate_cir(5);  
    }

    
    void calculate_cir(int r) {
        cout << 3.14 * r * r << endl;
    }
};

// Derived class Square inherits from Shape
class Square : public Shape {
public:
    
    void area() override {
        cout << "The area of square: ";
        calculate_sq(8);  
    }

   
    void calculate_sq(int a) {
        cout << a * a << endl;
    }
};

int main() {
    Circle C;  // Create Circle object which is c 
    Square S;  // Create Square object ehich is s

    Shape *ob;  // Base class pointer

    ob = &C;    // Point to Circle object
    ob->area(); // Calls Circle's area() due to virtual function

    ob = &S;    // Point to Square object
    ob->area(); // Calls Square's area() due to virtual function

    return 0;
}
