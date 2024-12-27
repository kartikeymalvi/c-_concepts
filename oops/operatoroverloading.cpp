
/*
operator overloading:=>
operator overloading is used to redefine the defination of
 multiple operators for non premitive data types. is

operator overloading: it is used the redefine nature of operators for non
 primitive data types.
   there are 2 types of operator overloading:
   1. unary operator overloading
   2. Binary operator overloading
*/
// 1.unary =>
#include <iostream>
using namespace std;
  class top
  {
      int a=10;
      public:operator ++()
      {
          a++;
          cout<<a<<"\n";
      }
       public:operator --()
  {
      a--;
      cout<<a<<"\n";
  }
  };

  int main()
  {
      top p;
      ++p;
      --p;
      int a =90;
      cout<<"\n";
      cout<<++a;
  }


