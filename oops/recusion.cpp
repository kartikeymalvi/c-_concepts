 // 1. Recursion has two types = head recursion and tail recursion
 // 2. function calling itself is called recursion.
 // 3. in a recursion we always use two types of condition
//       => 1. base condition 2. recursion relationship
 #include <iostream>
 using namespace std;
    void cybrom (int a){

      if (a<1){
        return;
      }
      //head recursion =>
     // cout<<a<<"\t";
     // cybrom(a-1);

      // tail recursion =>
      cybrom(a-1);
       cout<<a<<"\t";

    }
    int main(){


 cybrom(5);
    }

    // que. wap to find factorial using recursion?



