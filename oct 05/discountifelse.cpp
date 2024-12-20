#include <iostream>
using namespace std;
int main(){
 int money ;float percent=0;
   cout<<"enter amount you spend on shopping:"<<endl;
       cin>>money ;
  if(money<=2000){
          percent=0;
    cout<< "you got "<<percent<<"% discount & a calculator.";
}
   else if (money >2000 && money<=5000){

          percent=money*5/100;

           cout<<"you got 5% discount which is"<<percent<<" a school bag.";
   }

       else if ( money>5000 && money <=10000){

            percent= (float)money*10/100;

        cout<<"you got 10% "<<percent<<"and a wall clock"<<endl;
    }
     else {
        percent=(float)money*15/100;
        cout<<"you got 15% discount which is "<<money;
     }




}


