#include <iostream>
using namespace std;
class Shape
{
    public:
        virtual void area() = 0;
};
class Circle : public Shape
{
    public:
        void area() override
        {
            cout << "The area of Circle:";
            calculate_cir(5);
        }
        void calculate_cir(int r)
        {
            cout << 3.14 * r * r << endl;
        }
};
class Square : public Shape
{
    public:
        void area() override
        {
            cout << "The area of square: ";
            calculate_sq(8);
        }
        void calculate_sq(int a)
        {
            cout << a * a << endl;
        }
};
int main()
{
    Circle C;
    Square S;

    Shape *ob;
    ob = &C;
    ob->area();

    ob = &S;
    ob->area();

    return 0;
}