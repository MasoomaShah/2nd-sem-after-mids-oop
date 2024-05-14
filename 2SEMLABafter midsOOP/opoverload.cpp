#include <iostream>
using namespace std;
class test
{
    private:
    int marks=1;
    public:
    test(int m)
    {
        marks=m;
    }
    void display()
    {
        cout<<marks<<endl;
    }
    test operator +(test &t)
    {
        test temp(0);
        temp.marks=marks+t.marks;
        return temp;
    }
        test operator -(test &t)
    {
        test temp(0);
        temp.marks=marks-t.marks;
        return temp;
    }
        test operator *(test &t)
    {
        test temp(0);
        temp.marks=marks*t.marks;
        return temp;
    }
        test operator /(test &t)
    {
        test temp(0);
        temp.marks=marks/t.marks;
        return temp;
    }
};
int main()
{test t1(10),t2(11),t3(13);
t3=t1+t2;
t3.display();// so i guess you write only t3 when adding 
//not displaying cos that is where you overloaded
t3=t1-t2;
t3.display();
t3=t1*t2;
t3.display();
t3=t1/t2;
t3.display();


}