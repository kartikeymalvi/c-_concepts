#include <iostream>
 using namespace std;
 int main(){

 int number1,number2;
 cout<<"enter upper limit and lower limit";
   cin>>number1>>number2;

   for(int i=number1; i<=number2; i++ ){

      for( int j=1;j<=10;j++){


        cout<<i<<"X"<<j<<"="<<i*j<<"\n" ;
      }

                cout<<endl;
   }



 }
