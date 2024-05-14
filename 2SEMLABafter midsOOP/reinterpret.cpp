#include <iostream>
using namespace std;
int main()
{
    long*ptr=new long (97);
    cout<<*ptr<<endl;
    int *x=reinterpret_cast<int*>(ptr);
    cout<<ptr<<endl;
    cout<<x<<endl;// same address same pointer just values changed
    cout<<*ptr<<endl;
    cout<<*x<<endl;
}