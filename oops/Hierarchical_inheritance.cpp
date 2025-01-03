#include <iostream>
using namespace std;

class RBI{

public:void rbimsg()
{
    cout<<"\nRBI-MSG\n";
};
};
class SBI:public RBI
{
    public:void sbimsg()
    {
        cout<<"\nSBI MSG\n";
    }
};
class AXIS:public RBI
{
    public:void axismsg()
    {
        cout<<"\nAXIS MSG\n";
    };
};
class PNB:public RBI
{
    public:void pnbmsg()
    {
        cout<<"PNB MSG\n";
    };
};
int main()
{
    SBI s;
   s.sbimsg();
    s.rbimsg();
    AXIS a;
    a.axismsg();
    a.rbimsg();
    PNB p;
    p.pnbmsg();
    p.rbimsg();





}



