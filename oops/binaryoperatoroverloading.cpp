#include <iostream>
using namespace std;

class bhopal{

int mile;

public:bhopal(int m){
 mile=m;
}

operator -(bhopal &obj){

mile=obj.mile-mile;
cout<<"total milies="<<mile<<endl;

}

};

int main(){

bhopal start(12400);
bhopal ends(12580);
start-(ends);

}
