#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a: ";
    cin >> a;
    int b;
    cout << "Enter b: ";
    cin >> b;
    int c;
    cout << "Enter c: ";
    cin >> c;
    if(a>b && a>c){
        cout<<"a is largest number";

    }
    else if(b>a &&b>c){
        cout<<"b is the largest number";
    }
    else
        {
            cout<<"c is the largest number";
        }
  
}