    /*                poly  -  morphism

                      many  - forms

  complie-time                      run-time
1. function overloading         1. function overriding
2.operator overriding            2. virtual function and pure virtual function
3.normal object                  3. super class
4. Multiple function               4. Abstract class
                                    5. pointer class & normal object */
#include <iostream>
using namespace std;

class RBI
{
    public:virtual void loan()
    {
        cout<<"\nRBI class\n";
    }
     virtual void show()
    {
        cout<<"\nRBI bank\n";
    }
};
class AXIS:public RBI
{
    public:void loan()
    {
        cout<<"\n AXIS class\n";
    };
    void show()
    {
        cout<<"\n axis bank\n";
    }
};
  class SBI:public RBI
  {
      public:void loan()
      {
          cout<<"\nSBI class\n";
      };
  };
  int main ()
  {
      RBI *p;
      AXIS a;
      SBI s;
      p=&a;
      p->loan();
      p->show();
  }




