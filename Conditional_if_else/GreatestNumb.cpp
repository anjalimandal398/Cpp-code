//take three numb and print the greatest of them
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    if (a>b && a>c) {
        cout << "A is greatest number" << endl;
    }
    else if (b >c && b>a) {
        cout << "b is greatest number" << endl;
    }
    
    else{
        cout<<"c is the greatest number";
    }
}

