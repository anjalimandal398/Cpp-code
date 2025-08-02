//take integer input and print it it divisible bye 5 or 3 but not divisible by 15
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0) {
        cout << "Number is divisible by 5 or 3 but not by 15" << endl;
    } else {
        cout << "Condition not satisfied" << endl;
    }
}
