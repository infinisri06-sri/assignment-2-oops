#include<iostream>
using namespace std;

// Base class: Person
class Person {
public:
    string name = "thoufiq";  
    int age = 19;             

    // Method to display person's age
    void display_person() {
        cout << "Age: " << age << endl;
    }
};

// Another base class: Athlete
class Athlete {
public:
    string name = "cricket";   
    string category = "Clg";  

    // Method to display athlete's category
    void display_Athlete() {
        cout << "Category: " << category << endl;
    }
};

// Derived class: SportsPerson inherits from both Person and Athlete
class SportsPerson : public Person, public Athlete {
public:
    // Method to display name from Person and sport name from Athlete
    void display() {
        // Use scope resolution to avoid ambiguity between Person::name and Athlete::name
        cout << "Name: " << Person::name << endl;
        cout << "Sports Name: " << Athlete::name << endl;
    }
};

int main() {
    SportsPerson sp;           // Create a SportsPerson object

    sp.display();              // Display name and sport name using scope resolution
    sp.display_person();       // Display age from Person class
    sp.display_Athlete();      // Display category from Athlete class

    return 0;
}
