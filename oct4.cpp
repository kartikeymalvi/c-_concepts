#include <iostream>
using namespace std;
int main(){

string category;
int no_of_ticket;
 cout <<"enter category";
   cin>>category;
   cout<<"enter number of tickets";
    cin>>no_of_ticket;


if (category=="recliner"){
 cout<<800*no_of_tickets;
}
 else if(category=="first"){
cout<<600*no_of_tickets<<"rs";

}
else if(category=="balcony"){
    cout<<400*no_of_tickets<<"rs" ;

}

else if(category=="second"){
    cout<< 200*no_of_tickets<<"rs";

}












}
