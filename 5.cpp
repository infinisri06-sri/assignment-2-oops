#include<iostream>
using namespace std;
class Person{
    public:
        string name="thoufiq";
        int age=19;
        void display_person(){
            cout<<"Age: "<<age<<endl;
        }
};
class Athlete{
    public:
        string name="cricket";
        string category="Clg";
        void display_Athlete(){
            cout<<"Category: "<<category<<endl;
        }
};
class  SportsPerson:public Person,public Athlete{
    public:
        void display(){
            cout<<"Name: "<<Person::name<<endl;
            cout<<"Sports Name: "<<Athlete::name<<endl;
        }
};
int main(){
    SportsPerson sp;
    sp.display();
    sp.display_person();
    sp.display_Athlete();
    return 0;
}