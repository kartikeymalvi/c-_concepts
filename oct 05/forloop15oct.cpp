#include <iostream>
using namespace std;
main(){
    int n;
    cout<<"enter number:"<<endl;
  cin>>n;

  if(n>=1 && n<=20){

    for(int i=1;i<=n;i++)
        cout<<i<<endl;

  }
  else if(n>=40 && n<=60){

    for( int i=n;i<=60;i++){
            cout<<i<<endl;

    }
  }
  else{
        for(int i =100;i>=1;i--){
            cout<<i<<"\n";
        }
    }

}
