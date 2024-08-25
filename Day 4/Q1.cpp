#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    double quotient = 0.0;
    if (num2 != 0) {
        quotient = static_cast<double>(num1) / num2;
    } else {
        cout << "Error" << endl;
    }

    int remainder = num1 % num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}



