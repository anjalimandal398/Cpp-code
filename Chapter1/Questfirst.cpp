//int b=6.6 /a+2*n; which operation will be performed first;

#include <iostream>
using namespace std;

int main() {
    int a, n;
    cin >> a;  // e.g. 2
    cin >> n;  // e.g. 3

    double b = 6.6 / a + 2 * n;  // To allow decimal division
    cout << "b = " << b << endl;

}
