/*
2-->Two numbers are entered through the keyboard. Write a program to find
the value of one number raised to the power of another.
*/
#include <iostream>
using namespace std;
int main(){
    int base,power,result=1 ;
    cout<<"enter base number= \n";
    cin>>base ; //4
    cout<<"enter power number= \n";
    cin>>power ;//3

      for(int i=0;i<power;i++){


           result*=base;







      }
    cout<<"result of the given number is ="<<result<<endl;





}
