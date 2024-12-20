//  function overloading - in this function name
//     is same but parameters are diffrent.
#include <iostream>
using namespace std;
  void show( int a, int b){

   cout<< a+b<<"\n";
  }
    void show (int a){

      cout<<a*a<<"\n";
    }
    int main(){
      show(2,3);
       show(4);

    }

    // multiple function in this function name is diffrent
     // and parameters can be same
     void show( int a, int b){

   cout<< a+b<<"\n";
  }
    void display (int a){

      cout<<a*a<<"\n";
    }
    int main(){
      show(2,3);
       show(4);

    }

    // function calling itself is called recursion


