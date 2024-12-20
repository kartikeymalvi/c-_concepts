 /*#include <iostream>
 using namespace std;
 void fun (int arr[],int l) // array as a argument
   {
       for (int i=0 ; i<l;i++){
        cout<< arr[i]<<"\n";

       }

   }
    int main()
    {
     int arr[]={3,1,4,5,7,8};
      int s= sizeof(arr)/sizeof(arr[0]);
        fun( arr,s);


    }
      INCREEMNTING ARRAY DATA WITH 10 WITHOUT CHANGING ACTUAL ARRAY DATA.*/
     #include <iostream>
 using namespace std;
 void fun (int arr[],int l) // array as a argument
   {
       for (int i=0 ; i<l;i++){
        cout<< arr[i]+10<<"\n";

       }

   }
    int main()
    {
     int arr[]={3,1,4,5,7,8};
      int s= sizeof(arr)/sizeof(arr[0]);
        fun( arr,s);
        cout<<"\n after function calling \n";

        for (int i=0 ; i<s;i++){
        cout<< arr[i]<<"\n";

       }



    }
