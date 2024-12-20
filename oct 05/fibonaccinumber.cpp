#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum = 0, range, num4;

    cout << "Enter range: ";
    cin >> range;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    cout << "Initial sum: " << sum << endl;

    for (int i = range; i >= 1; i--) {
        num4 = sum + num2;
        cout << "Sum in iteration " << i << ": " << num4 << endl;
        sum = num4;  // Update sum for the next iteration
    }

    return 0;
}

