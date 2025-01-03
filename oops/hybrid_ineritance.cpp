// combination of diffrent types of inheritance is called hybrid inheritance.
  #include <iostream>
  using namespace std;

    class RBI
    {
        public:void msg()
        {
            cout<<"\n RBI msg \n";
        };
    };
    class SBI : virtual public RBI
    {
        public: void s()
        {
            cout<<"\n sbi msg \n";
        };
    };
    class AXIS : virtual public RBI
    {
        public:void a()
        {
           cout<<"\n axis msg \n";
        };
    };
      class CUST :public SBI,public AXIS
      {
          public:void c()
          {
              cout<<"\n customer msg \n";
          };
      };
      int main()
      {
          CUST obj;
          obj .c();
          obj.s();
          obj.a();
          obj.msg();
      }
