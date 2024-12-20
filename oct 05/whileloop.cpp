/*number extraction and creation using while loop
#include <iostream>
using namespace std;
int main(){
    int number=0,digit,cv;
    cout<<"enter how many digits number you want to create";
        cin>>cv;

    while(cv>0){
            cout<<"enter digit";
             cin>>digit;
           number=number*10+digit;
              cv--;
    }
        cout<<"final number:"<<number;
        */


        //program 2- write a program to find the sum of n numbers given by user


        int itration,number1,sum=0;


        cout<<" how many numbers you want to add";

              cin>>itration;

              while(itration>0){
                cout<<"enter number you want to add";
                cin>>number1;
                sum=sum+number1;
                itration --;
              }
              cout<<"sum of all number is;"<<sum <<endl;
}







