#include <iostream>
 using namespace std;
 int main()
 {
     int i=1,j, even_sum = 0,odd_sum =  0;
     cout<<"enter the number"<< endl ;
     cin>>j;
     while(i<=j){

        if(i%2==0){

                even_sum +=  i ;





        }
        else{
            odd_sum  += i ;
        }
        i++;
     }
     cout<<"even sum is ="<<even_sum<<"odd sum is="<<odd_sum ;

 }
