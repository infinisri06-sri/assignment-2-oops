#include<iostream>
using namespace std;
class area{
    public:
        void calculate(int a){
            cout<<"The Area Of Square: "<<a*a<<endl;
        }
        void calculate(int l,int b){
            cout<<"The Area of Rectangle: "<<l*b<<endl;
        }
        virtual void display(){
            cout<<"These All are box"<<endl;
    }
};
class circle:public area{
    public:
        void display() override{
            cout<<"This is Circle"<<endl;
        }
};
int main(){
    area A;
    A.calculate(6);
    A.calculate(8,2);

    circle c;      //base class pointer derived class object
    area *a;
    a=&c;
    a->display();
}