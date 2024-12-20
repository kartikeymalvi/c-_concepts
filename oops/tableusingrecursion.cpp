 // que. wap a program of a table using recursion?
 #include <iostream>
   using namespace std;

   void cybrom( int a,int b){

    if (b>10){
        return;
    }
    cybrom(a,b+1);
    cout<<a*b<<"\t";
   }
   int main(){
     int x;
     cout<<"enter the number for table \n";
      cin>>x;
      cybrom(x,1);


   }
