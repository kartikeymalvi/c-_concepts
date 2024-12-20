#include <iostream>
using namespace std;

int main() {

/*cout << "Enter your 3 numbers to add: "; // Prompt the user for input
    cin >> a >> b >> c; // Read three numbers from the user
    int d = a + b + c; // Calculate the sum
    cout << "The sum is: " << d << endl; // Output the result













int i=1,j,esum=0 , osum=0;
cout<<"enter th number="<< endl;
cin>>j;
while(i<=j){
        if(i%2){
            esum=esum+i;

        }
    else{
        osum=osum+i;
    }
    i++;
    cout<< osum << esum;
}
*/

    int i = 1, j, esum = 0, osum = 0;
    cout << "Enter the number: ";
    cin >> j;

    while (i <= j) {
        if (i % 2 == 0) {
            esum += i; // If i is even, add to esum
        } else {
            osum += i; // If i is odd, add to osum
        }
        i++;
    }

    cout << "Sum of even numbers: " << esum << endl;
    cout << "Sum of odd numbers: " << osum << endl;

    return 0;
}





     // Return an integer from main


