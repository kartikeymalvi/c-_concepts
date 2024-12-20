#include <iostream>
using namespace std;
class top1{
 int a=10,b=20;
 public:int sum() // function declare &define inside a class
 {

 return a+b;
 }


};
 class top2{
   int a=10,b=90;
   public:int sum ();
    // function declared inside a class but defined outside of class

 };

 int top2::sum() {
   return a+b;

 }
 int main(){
  top1 pk;
  cout<<pk.sum()<<"\n";
  top2 pk2;
  cout<<pk2.sum();

 }
