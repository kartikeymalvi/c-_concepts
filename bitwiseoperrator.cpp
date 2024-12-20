#include <iostream>
using namespace std;
int main(){
    int a=12 , b = 10;
    int r=a&b;

     cout<<"a:"<<a<<"b:"<<b<<endl;
    cout<<"bitwise and"<<r<<endl;
    r=a|b;
    cout<<"bitwise or"<<r<<endl;
    r=a^b;
    cout<<"bitwise xor"<<r<<endl;
    r=a>>2;
      cout<<"bitwise rightshift 2 -->"<<r<<endl;
      r=a<<2;
      cout<<"bitwise leftshift 2 <--"<<r<<endl;

      r= ~a;
      cout<<"bitwise not "<<r<<endl;
      r= ~b;
      cout<<"bitwise not "<<r<<endl;


      return 0;






}
