#include <iostream>
using namespace std ;
void fun ()
{
    cout<<"hello \n";
}
int main ()
{
    //explicit me function ko call krna pdta h
    //implicit me fuction ko call nhi krna pdta
    for (int i = 1 ;i<=10 ; i++)
    {
        fun();//exlicit
    }
}
