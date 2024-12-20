/* transpose matrix, in this matrix row becomes column and column becomes row.
   Rule=> Matrix should be in square format.
     1 2 3        1  9
                  2  8
     9 8 7   =>   3  7
*/

#include <iostream>
using namespace std;
int main(){
  int arr [2][3];
  cout<<"enter 6 numbers\n";
  for (int r=0;r<2;r++){
    for(int c=0;c<3;c++){
        cin>>arr[r][c];
    }

  }
  for( int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
        {
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }
  cout<<"\n after applying transpose concept\n";

  for (int c=0;c<3;c++)
  {
      for(int r=0;r<2;r++)
        {
        cout<<arr [r][c]<<"\t";
      }
      cout<<"\n";

  }




}
