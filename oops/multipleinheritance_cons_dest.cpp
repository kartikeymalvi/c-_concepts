/*#include <iostream>
using namespace std;
class sbi
{


   public: sbi()
   {
       cout<<"sbi memory\n";
   }
   ~sbi()
   {
       cout<<"sbi memory release\n";
   }

};
class axis
{

    public:axis()
    {
        cout<<"axis memory\n";
    }
    ~axis()
    {
        cout<<"axis memory release\n";
    }
};
class customer:public sbi,public axis
{
    public:void msg()
    {
        cout<<"welcome\n";
    };
};
int main ()
{
    customer ct;


}
*/
#include <iostream>
using namespace std;

class SBI
{
    public:SBI()
    {
       cout << "SBI memory \n";
    }
    ~SBI()
    {
        cout << "SBI delete \n";
    }
};
class HDFC
{
    public:HDFC()
    {
        cout << "HDFC memory \n";
    }
    ~HDFC()
    {
        cout << "hdfc delete \n";
    }
};
class customer:public SBI,public HDFC
{
    public:customer()
    {
        cout << "customer memory \n";
    }
    ~customer()
    {
        cout << "customer delete \n";
    }
};
int main()
{
    customer cus;
}
