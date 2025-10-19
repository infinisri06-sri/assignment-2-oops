#include<iostream>
using namespace std;
class A;
class B{
    private:
        int age;
    public:
        B(int age){
            this->age=age;
        }
        friend void Eligible(A,B);
    };
class A{
    private:
        string name;
    public:
        A(string n){
            this->name=n;
        }
        friend void Eligible(A,B);
    };
void Eligible(A name_A,B age_B){
    cout<<"Name: "<<name_A.name<<endl;
    if(age_B.age>=18){
        cout<<"Your Eligible For to vote"<<endl;
    }
    else{
        cout<<"Not Eligible To Vote"<<endl;
    }
}
int main(){
    string N;
    int Age;
    cout<<"Enter Your Name and Age: "<<endl;
    cin>>N>>Age;
    A a(N);
    B b(Age);
    cout<<"Eligiblity TEST FOR RIGHT TO VOTE"<<endl;
    Eligible(a,b);
    return 0;   
}