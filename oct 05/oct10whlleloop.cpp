#include <iostream>
using namespace std;
int main(){


    int last,number,even_count=0,odd_count=0 ;

    cout <<"enter test number:"<<endl;
    cin>>number;

    while(number>0){
      last=number%10;
        if(last%2==0){

            even_count++;

        }
        else{

                   odd_count++;

        }

        number=number/10;

    }

   cout<<"even digit:"<<even_count;
   cout<<"odd digit:"<<odd_count;









}
