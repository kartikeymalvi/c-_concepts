#include <iostream>
using namespace std;

  void table(int x){

    for(int i=1;i<=10;i++)
        {
          cout<<x<<"x"<<i<<"="<<x*i<<"\n";

    }



  }

  void swp (int a,int b){

        a = a+b; //4,5=9
        b =a-b;  // 9-5=4
        a= a-b;   // 9-4=5
        cout<<"number after swping\n"<<a<<"\n"<<b;

  }

   void factorial(int a){
         int result=1;
     for(int i=a;i>1;i--){
          result= result*i;

     }
       cout<<"factorial\n"<<result;
   }

  int main(){
        int a,b;
      cout<<"enter 2 numbers for swaping \n";
     // cin>>a>>b;
        cin>>a;

       //table( a);
       //swp(a,b);
        factorial(a);



  }
