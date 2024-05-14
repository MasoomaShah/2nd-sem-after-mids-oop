#include <iostream>
using namespace std;
class basee// its object can be identity or dynamic of children
{
    public:
    virtual void dummy()
    {

    }

};
class derivede:public basee
{
    int a;
};

int main()
{basee *ptr= new derivede;
basee *ptrr=new basee;
derivede *ptrrr;
ptrrr=dynamic_cast<derivede*>(ptr);
if(ptrrr==0)cout<<"null pointer of first type cast"<<endl;
ptrrr=dynamic_cast<derivede*>(ptrr);
if(ptrrr==0)
cout<<"null pointer on second type_cast"<<endl;


// can even into void 
}