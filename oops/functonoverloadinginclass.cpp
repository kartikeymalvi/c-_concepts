#include <iostream>
using namespace std;
  class top1
  {
    int a=10,b=20;
    public:void sum(){   // function overloading

    cout<<a+b<<"\n";
    }
    void sum(int a,int b,int c) // function overloading
    {
        cout<< a+b+c<<"\n";
    }


  };
   int main(){

   top1 f;
   f.sum();
   f.sum(10,20,30);

   }

