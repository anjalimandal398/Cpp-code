#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    bool flag = true;

    // Special case: 1 and numbers less than 2 are not prime
    if (n <= 1) {
        cout << n << " is NOT a Prime number";
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << n << " is a Prime number";
    } else {
        cout << n << " is NOT a Prime number";
    }

}
