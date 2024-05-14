#include <iostream>
using namespace std;
class Shape
{protected:
int length;
int width;

    public:
    Shape(int a, int b):length(a),width(b){};
};
class Colour
{
    protected:
    string color;
    public:
    Colour(string c):color(c){cout<<c<<endl;};
};
class Rectangle:public Shape{
    public:
   Rectangle (int a, int b ):Shape(a,b){cout<<"this too"<<endl;};
   int getarea()
   {return length*width;}

};
class Square:public Rectangle,public Colour
{
    public:
    Square(int a, int b, string c):Rectangle(a,b),Colour(c)
    {
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
    };

};

 int main()
 {
Rectangle r1(11,12);
Square s1(12,23,"red");

 }