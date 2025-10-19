#include<iostream>
using namespace std;
class Shape{
    private:
        int length;
        int breadth;
    public:
        Shape(int l,int b){
            this->length=l;
            this->breadth=b;
        }
        int getLength(){
            return length; 
        }
        int getBreadth() {
            return breadth; 
        }
};
class Rectangle:public Shape{
    public:
        Rectangle(int len,int br):Shape(len,br){
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
    Rectangle r(l,b);
    cout<<"The Area of Rectangle :"<<r.area()<<endl;
    cout<<"The perimeter of Rectangle :"<<r.perimeter()<<endl;

}