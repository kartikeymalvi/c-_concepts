#include <iostream>
  using namespace std;
    class RBI
    {

        int t;
        public:RBI()
        {
            cout<<"\nRbi Memory\n";

        }
        ~RBI()
        {
            cout<<"\n RBI memory released\n";
        }
         public:void show()
         {
             cout<<"\nRBI class\n";
         }
    };
     class SBI:public RBI
     {
         int a;
         public:SBI()
         {
             cout<<"\n SBI memory\n";
         }
         ~SBI()
         {
             cout<<"\n SBI Memory released\n";
         }
         public:void show()
         {
             cout<<"\nSBI class\n";
         }
     };
       class CUST:public SBI
       {
           int a;
           public:void acnt()
           {
               cout<<"\nCUST CLASS\n";
           }
       };
     int main()
     {
         CUST.s;
         s.display
         s.show();
         s.acnt();
         cout<<"Size of sbi="<<sizeof(s);
     }
