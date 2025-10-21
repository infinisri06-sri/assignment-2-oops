#include<iostream>
using namespace std;
class Person{  // base class person 
    public:
        string name="srinath";
        int age=22;
};
class Employee:public Person{  // // Derived class Employee inherits from Person

    public:
        string name="ALL";
        int age=25;
    void display_Employee(){
        cout<<"Age: "<<age<<endl;
    }
};
class Manager:public Employee{   // // Derived class Manager inherits from Employee

    public:
        int age=30;
    void display(){  //  Method to display career progression using different age and name values

        cout<<"Name: "<<Person::name<<endl;
        cout<<"At The "<<"Age of : "<<Person::age<<" A college finished student"<<endl;
        cout<<"\n At The "<<"Age of : "<<Employee::age<<" Employee At " <<Employee::name<<endl;
        cout<<"\n And then at The "<<"Age of : "<<age<<" Manager At "<<Employee::name<<endl;
    }
};
int main(){
    Manager m; // create a object m 
    m.display();
    return 0;

}
