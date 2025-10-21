#include<iostream>
using namespace std;

// declaration of class A
class A;

// Class B definition
class B {
private:
    int age;  // Private member to store age

public:
    // Constructor to initialize age
    B(int age) {
        this->age = age;
    }

    //  it is a method so we Declare Eligible as a friend function to access private members
    friend void Eligible(A, B);
};

// Class A definition
class A {
private:
    string name;  // Private member to store name

public:
    // Constructor to initialize name
    A(string n) {
        this->name = n;
    }

    // Declare Eligible as a friend function to access private members
    friend void Eligible(A, B);
};

// Friend function that accesses private members of both A and B
void Eligible(A name_A, B age_B) {
   
    cout << "Name: " << name_A.name << endl;

    
    if (age_B.age >= 18) {
        cout << "You're Eligible to vote" << endl;
    } else {
        cout << "Not Eligible to Vote" << endl;
    }
}

int main() {
    string N;
    int Age;

    // user has to give input  for name and age
    cout << "Enter Your Name and Age: " << endl;
    cin >> N >> Age;

    // Create objects of class A and B using user input
    A a(N);
    B b(Age);

    // Display eligibility result
    cout << "Eligibility TEST FOR RIGHT TO VOTE" << endl;
    Eligible(a, b);

    return 0;
}
