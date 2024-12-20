#include <iostream>
 using namespace std;


 void swp (int &a,int &b){

    a=a+b; // a=5
    b=a-b;   // b=6
    a=a-b;     //  a=5+6=11, b=11-6=5, a=11-6=5;

 }
 int main(){

   int a,b;

   cout<<"enter two numbers = \n";
    cin>>a>>b;
          swp(a,b);
      cout<<"after swaping value of a is :"<<a<<"\n";
      cout<<"after swaping value of b is :"<<b<<"\n";

 }
