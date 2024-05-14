#include <iostream>
using namespace std;
class test
{
    private:
   int age;
   string name;
   public:
   friend ostream& operator<<(ostream &cout,test &t);// object of library and class object;
   friend istream& operator>>(istream &c,test &t);
   
};
ostream& operator<<(ostream &co,test &t)
{
    co<<t.name<<"  L"<<endl;
    co<<t.age<<"  W"<<endl;
    return co;
}
istream& operator>>(istream &c,test &t)
{
    c>>t.name;
    c>>t.age;
    //return na bhi likho farq nahi parhta
}
int main()
{test t5;
cin>>t5;
cout<<t5;

}