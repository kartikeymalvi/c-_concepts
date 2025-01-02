/* MULTIPLE INHERITANCE =>
  IN MULTIPLE INHERTANCE WE CAN INHERIT MORE THAN ONE CLASSES
    AT A TIME.
    */

#include <iostream>
using namespace std;
class sbi
{

 public:void sbiacnt()
 {
     cout<<"sbi\n";
 };

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


