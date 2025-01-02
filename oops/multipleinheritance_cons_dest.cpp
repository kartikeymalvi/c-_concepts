#include <iostream>
using namespace std;
class sbi
{

 public:void sbiacnt()
 {
     cout<<"sbi\n";
 };
   public: sbi()
   {
       cout<<"sbi memory\n";
   }
   ~

};
class axis
{
    public:void axisacnt()
    {
        cout<<"axis\n";
    };
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
    ct.msg();
    ct.axisacnt();
    ct.sbiacnt();
}
