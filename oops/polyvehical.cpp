#include <iostream>
using namespace std;
  class vehicle
  {
      public:virtual void sound()=0;


  };
   class train:public vehicle
  {
      public:void sound()
      {
       cout<<" chuk chuk\n";
      }

  };
  class car :public vehicle

  {
      public:void sound()
      {
        cout<<"\n droom \n";

      }
       };
  class aeroplane: public vehicle
  {
      public :void sound()
      {
          cout<<"\n sui....\n";
      }
  };
  int main()
  {
     vehicle *v;
     car c;
     train t;
     aeroplane a;
     v=&t;
     v->sound();

  }
