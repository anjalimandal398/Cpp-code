#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool flag = 0; 

        for (int j = 2; j < i; j++) 
        {
            if (i % j == 0)
            {
                flag = 1; // not prime
                break;
            }
        }

        if (flag == 0)
        {
            count++; // prime mila
        }
    }

    
    cout << "Total prime numbers between 1 and " << n << " are: " << count << endl;

    return 0;
}
