#include <iostream>
using namespace std;
int  main(){

    for (int temp=100; temp<=900 ; temp++){


    int num,sum=0,last;
       num=temp;
    while (num>0){

        last =num%10;
        sum =sum +(last*last*last);
        num=num/10;

    }
      if( sum== temp){
        cout<<temp<<" ";
      }
     }

}
