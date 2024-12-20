// composite class ==> composite class having an
     //object of previous class
 //  and we call the function of previous class
  //inside the member function of composite
    //class

    #include <iostream>
     using namespace std;
      // composite class
       class virus {

           public :void affect(){

             cout<<"your system got hacked\n";

           };
          };
       class reward // composite
       {
           virus v;
           public:void prize (){

           cout<<"u won 2,000,00\n";
           v.affect();
           }
       };
        int main(){

          reward r;
           r.prize();
        }
