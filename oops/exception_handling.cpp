#include<iostream>
using namespace std;
/*
class Company
{
public:virtual void empinfo() final
{
cout<<"total emp:100000 \n";
}
};
class BhopalBranch:public Company
{
public:void empinfo()
{
cout<<"\n total employe:6000000";
}
};
int main()
{
    BhopalBranch p;
    p.empinfo();
}
/*

EXCEPTION-HANDLING:abnormal conditon is called exception,
 EXCEPTION-ANDLERS : is used to handle exception
 1. try
 2. catch
 3. final
*/
  int main()
  {
      int a;
      int b;
      cout<<"enter first number\n";
       cin>>a;
       cout<<"enter second number\n";
       cin>>b;

         try
         {
             if(b<=0)
             {
                 throw b;
             }
             cout<<a/b;
         }
         catch (int d)
         {
             cout<<"denominator can not be 0\n";
         }
          cout<<"\ndone";
  }




