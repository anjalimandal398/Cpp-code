#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter First Number: ";
    cin >> n;
    int m;
    cout << "Enter Second Number: ";
    cin >> m;


    int maxNum=max(n,m);

    while(true)
        {
            if (maxNum % n == 0 && maxNum % m == 0)
            
            cout<<"LCD of " << n <<" and "<<m << " is: " << maxNum<<endl;
            break;
        }
        maxNum++;
    }
