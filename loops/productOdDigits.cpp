//product of digits
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the digit : ";
    cin >> n;
    int product = 1;
    while (n>0)
    {
       int ld=n%10;
       n=n/10;
        product*=ld;
    }
    cout<<product;
}