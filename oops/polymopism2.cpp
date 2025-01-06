#include <iostream>
using namespace std;
  class animal
  {
      public:virtual void sound()=0;


  };
   class Cat:public animal
  {
      public:void sound()
      {
       cout<"meow meow\n";
      }

  };
  class dog :public animal

  {
      public:void sound()
      {
        cout<<"\n barking\n";

      }
       };
  class Lion: public animal
  {
      public :void sound()
      {
          cout<<"\n roaring\n";
      }
  };
  int main()
  {
     animal *p;
     dog d;
     Cat c;
     Lion l;
     p=&d;
     p->sound();

  }

