#include <iostream>
using namespace std;


int main(){

    int number;
    cout<<"enter number:"<<endl;
    cin>>number;
    if(number==0){
            cout<<"your number is zero:"<<number<<endl;
    }
      else if(number%2==1){
        cout<<"your number is odd:"<<number<<endl;
        }

    else if (number%2==0){
        cout<<"your number is even:"<<number<<endl;
    }


}
