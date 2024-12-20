#include <iostream>
using namespace std;


int main(){

   int money, discount=0, paid=0;
   cout<<"enter total cost you spend on shopping" <<endl;
     cin>>money;

     if(money<=2000){

        cout<<"you got a gift - calculator"<<endl;


     }

      else if( money>=2001 && money<=5000){
            discount= (money*5)/100;
            paid=money-discount;
            cout<<"you got 5% discount"<<discount<<"and a school bag\n";
              cout<<"you have to pay =   "<<paid<<"only\n";


      }
      else if( money>=5001 && money<=10000){
            discount= (money*10)/100;
            paid=money-discount;
            cout<<"you got 10% discount "<<discount<<"and a wall clock\n";
            cout<<"you have to pay =   "<<paid<<"only\n";


      }
      else if(  money>10000){
            discount= (money*15)/100;
            paid=money-discount;
            cout<<"you got 15% discount "<<discount<<"and a wrist watch\n";
             cout<<"you have to pay =   "<<paid<<"only\n";


      }



}
