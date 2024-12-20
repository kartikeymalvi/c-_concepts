#include <iostream>
  using namespace std;


 /* int main(){

        int *p; //wild pointer
       int *p=NULL; // null pointer
         cout<<sizeof(p)<<"\n";
          int r=900;
            p=&r;
             cout<<p;


     int a=23;
     char f='a';
     cout<<"a="<<a<<"\n";
      int b=a;

        cout<<"b="<<b<<"\n";
        int &c=a;
         c=20;
          cout<<"a="<<a<<"\tc="<<c<<"\n";
          int *p=&a;
          cout<<p<<"\t";  //it shows address of c
          cout<<*p;    // it shows value of c//dereference




     char *k="kartikey";
       cout<<*(k+6);
       */

       // function pointer

         int axis(int cardno,int pwd){
           return 10000;
         }
         int sbi (int cardno,int pwd){
           return 20000;

         }
         int main(){
                int (*atm)(int,int);
                  atm=sbi;
                  cout<<"balance sbi"<<atm(1,2);


                   int (*atm)(int,int);
                     atm=axis;
                  cout<<"balance axis"<<atm(3,4);

         }



