//Give the length and breadth of rectangle , write a program to fine whether the area of the rectangle id greater than its perimeter 

#include <iostream>
using namespace std;

int main() {
    int l, b;
    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    int area = l * b;
    int perimeter = 2 * (l + b);

    if (area > perimeter) {
        cout << "Yes, area is greater than perimeter." << endl;
    } else {
        cout << "No, area is not greater than perimeter." << endl;
    }

}
