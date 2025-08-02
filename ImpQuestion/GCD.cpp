#include <iostream>
using namespace std;

int main()
{
    int n ,GCD=1;
    cout << "Enter First Number: ";
    cin >> n;
    int m;
    cout << "Enter Second Number: ";
    cin >> m;

    for (int i = 1; i <= n; i++)
        {
            if (n % i == 0 && m % i == 0)
            {
               GCD=i;
            }
            cout<<"GCD of " << n <<" and "<<m << " is: " <<GCD <<endl;
            break;
        }
    }
