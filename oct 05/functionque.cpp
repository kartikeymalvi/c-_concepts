  // write a program for swapping using call by refrence,


      #include <iostream>
      using namespace std;
      void swp ( int &a,int &b){
            int t;
           t=a;
           a=b;
            b=t;

        }
            // 2. enter 2 number and return biggest value using function
         int biggest(int a, int b){
           if(a>b){
            return a;
           }
           else {
            return b;
           }

         }

           // 3.write a program to print the number of any number using function.

         void table( int a){

           for (int i=1 ; i<=10; i++){
            cout<<a*i<<"\t";
           }
         }



         int main(){
            // swapping
             int a,b;
             cout<<"enter 2 no\n";
               cin>>a>>b;
                swp (a,b);
                 cout<<"after swap a="<<a<<"\n";
                 cout<<"after swap a="<<b<<"\n";
                 //biggest number
                  cout<< "biggest numbr in 2 "<<a<<b<<"number is\n";
                       biggest(a,b);

                       //table
                    int x;
                    cout<<"enter any no.\n";
                      cin>>x;
                       table(x);


         }










