#include <iostream>
using namespace std;
class Shape
{protected:
int length;
int width;

    public:
    Shape(int a, int b):length(a),width(b){};
};

class Rectangle:public Shape{
    public:
   Rectangle (int a, int b ):Shape(a,b){cout<<"this too"<<endl;};
   int getarea()
   {return length*width;}

};
class Square:public Shape
{
    public:
    Square(int a, int b):Shape(a,b)
    {

    };
   int getarea()
   {return length*width;}

};

 int main()
 {
Rectangle r1(11,12);
Square s1(13,24);
cout<<r1.getarea();
cout<<s1.getarea();


 }