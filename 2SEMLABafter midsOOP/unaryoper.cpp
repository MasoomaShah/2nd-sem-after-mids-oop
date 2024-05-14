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
    test operator ++()
    {
        test temp(0);
        temp.marks=++marks;
        return temp;
    }
   
};
int main()
{test t1(12),t2(13);
++t1;
t2=t1;// careful about what you set equal to what
// you actually didnt need the t2,couldve lived without it 
t2.display();
// tis is pre ,3 differnces for post see if you can catch 'em
// read about pre post from manual PLEASSESSES
}