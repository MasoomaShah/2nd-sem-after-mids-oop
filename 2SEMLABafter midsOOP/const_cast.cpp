#include <iostream>
using namespace std;
class student
{
    public:
   const char *c="sam";
  void  print ()
  {const_cast<char*>(c);}
    
};
 int main()
 {student s1;
 s1.(*char)="ar";
 }