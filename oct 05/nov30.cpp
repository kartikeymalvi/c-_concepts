#include <iostream>
using namespace std ;
int dealer (int ltr){

    return 90*ltr;
}
int main(){

int ltr;
cout<<"enter liters\n";
   cin>>ltr;
   cout<<" bill rate="<<dealer(ltr)+(7*ltr);



}
