//take integer input and print it it divisible bye 5 and 3
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n % 5 == 0 && n % 3 == 0) {
        cout << "Divisible by both 5 and 3" << endl;
    }
    else if (n % 5 == 0) {
        cout << "Divisible by 5 only" << endl;
    }
    else if (n % 3 == 0) {
        cout << "Divisible by 3 only" << endl;
    }
    else {
        cout << "Not divisible by 5 or 3" << endl;
    }

}
