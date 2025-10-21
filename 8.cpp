#include<iostream>
using namespace std;

// Base class: area
class area {
public:
    // Overloaded function to calculate area of a square
    void calculate(int a) {
        cout << "The Area Of Square: " << a * a << endl;
    }

    // Overloaded function to calculate area of a rectangle
    void calculate(int l, int b) {
        cout << "The Area of Rectangle: " << l * b << endl;
    }

    // Virtual function to allow runtime polymorphism
    virtual void display() {
        cout << "These All are box" << endl;
    }
};

// Derived class: circle inherits from area
class circle : public area {
public:
    // Override the base class display method
    void display() override {
        cout << "This is Circle" << endl;
    }
};

int main() {
    area A;              // Create object of base class
    A.calculate(6);      
    A.calculate(8, 2);   

    circle c;            // Create object of derived class
    area *a;             
    a = &c;              

    a->display();        
    return 0;
}
