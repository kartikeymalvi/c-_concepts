#include <iostream>
using namespace std;
 int main(){

     int  num,factorial=1;
     cout<<"enter factorial number="<<endl;
     cin>>num;
        for(int i=num;i>=1;i--)
        {
            factorial=factorial*i;
        }
        cout<<"factorial of a number is "<< factorial<< "\n";

        if(factorial%2 == 0)
        {
            cout<<factorial<<" is even number "<<endl;
        }
        else {
            cout<<factorial<<" is odd number "<<endl;
        }
 }
