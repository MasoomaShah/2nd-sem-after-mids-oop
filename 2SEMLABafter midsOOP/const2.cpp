#include <iostream>
using namespace std;
void print(char*str)
{
    cout<<str<<endl;
}
 int main()
 {
const char *c="Sample text";
print(const_cast<char*>(c));

 }