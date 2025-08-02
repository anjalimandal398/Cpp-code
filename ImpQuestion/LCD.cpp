#include <iostream>
using namespace std;

int main()
{
    int n ,LCD=1,GCD=1;
    cout << "Enter First Number: ";
    cin >> n;
    int m;
    cout << "Enter Second Number: ";
    cin >> m;

    for (int i = 1; i <= min(n,m); i++)
        {
            if (n % i == 0 && m % i == 0)
            {
               LCD=i;
            }
            int LCM = (n * m) / GCD;

            cout<<"LCD of " << n <<" and "<<m << " is: " <<LCD <<endl;
            break;
        }
    }
