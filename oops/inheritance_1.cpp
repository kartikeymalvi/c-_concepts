/*        INHERITANCE
 1. Single
  A =>B

  2. Multilevel
    A=>B=>C

  3. Multiple

    A      B
    | = [C] =|
   4. Hieraracial
    B =====>
    C  ======>   [A]
    D ========>

      5. Hybrid

      A      C


      B      D

             E

         [F]

*/
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
     int main()
     {
         SBI s;
         s.show();
         cout<<"Size of sbi="<<sizeof(s);
     }










