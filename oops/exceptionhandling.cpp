#include <iostream>
using namespace std;

int main()
{
    int b;
    cout<<"enter number either 1,2,3\n";
     cin>>b;
      try{

          if(b==1)
          {
              throw 'a';
          }
          else if(b==2)
          {
              throw 32.12;
          }
          else if  (b==3)
          {
              throw 4;
          }
             cout<<"welcome\n";
          }
          catch (char c)
          {
              cout<<"char value\n";
          }
           catch (int d)
          {
              cout<<"int value\n";
          }
           catch (double e)
          {
              cout<<"double value\n";
          }

}
