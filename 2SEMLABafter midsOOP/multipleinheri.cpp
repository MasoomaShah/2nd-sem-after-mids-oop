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
class Rectangle:public Shape,public Colour{
    public:
   Rectangle (int a, int b,string c ):Shape(a,b),Colour(c){cout<<"this too"<<endl;};
   int getarea()
   {return length*width;}

};

 int main()
 {
Rectangle r1(11,12,"blue");
cout<<r1.getarea();

 }
 // so even if you declare parent later it works 