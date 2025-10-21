#include<iostream>
using namespace std;
class Shape{ // create a class shape 
    private:
        int length;   
        int breadth;
    public:
        Shape(int l,int b){ // create a constructor to initalize length and breadth 
            this->length=l;
            this->breadth=b;
        }
        int getLength(){  // getter function for length
            return length; 
        }
        int getBreadth() { // / getter function for breadth
            return breadth; 
        }
};
class Rectangle:public Shape{   //  Derived class Rectangle inherits from Shape

    public:
        Rectangle(int len,int br):Shape(len,br){// Constructor passes dimensions to base class Shape

        }
        int area(){
            return getLength()*getBreadth();
        }
        int perimeter(){
            return 2*(getLength()+getBreadth());
        }

};
int main(){
    int l,b;
    cout<<"Enter the Length and Breadth :"<<endl;
    cin>>l>>b;
    Rectangle r(l,b);  // create Rectangle object with user input
    cout<<"The Area of Rectangle :"<<r.area()<<endl;
    cout<<"The perimeter of Rectangle :"<<r.perimeter()<<endl;


}
