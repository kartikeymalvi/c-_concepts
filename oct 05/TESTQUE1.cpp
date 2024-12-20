#include <iostream>
using namespace std;
int main(){

int n,n1=0,n2=1,n3;

  cout<<"enter range of numbers ";
  cin>>n;

     cout<<n1<<"\t"<<n2<<"\t";

  for(int i=3;i<=n;i++){

       n3=n1+n2;
       cout<<n3<<"\t";
       n1=n2;
       n2=n3;


  }



}
