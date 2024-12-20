//loop
/*two types of loop
while loop is superset and for loop is subset of while loop.`

1- condition dependent loop (whlie loop ,do while loop)
2-itreation(no. of cycle ) dependent loop  ( for loop)

  differnce between for loop and while loop

  for loop                  |   while loop
  1- number of itration is   1- number if itartion not known
  known.
  2- for is the the subset  | 2- while is superset
  of while loop

  syntax of while loop --------

  control_variable initialized;

while ( condition){
    body define
    updation of coontrol variable.
}

  question.1
  WAP to display the multiplication table of a given number using while loop?


  int num,cv=1;

    cout<<"enter number"<<endl;
    cin>>num;
    while(cv<=10){
         cout<<num<<"X"<<cv<<"="<<num*cv<<endl;
         cv++;
         // when we update value of cv in -- it will be an infinite loop
    }
*/
#include <iostream>
using namespace std;
int main(){




    int num1,num2,cv1=1;

    cout<<"enter number :"<<endl;
      cin>>num1;
      num2=num1+1;

      while( cv<=10){


          cout<<num1<<"X"<<cv1<<"="<<num1*cv1<<" "<< num2<<"X"<<cv1<<"="<<num2*cv1<<endl;
          cv1++;





      }









}





















