//factorial of n numbers
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the digit : ";
    cin >> n;
    int fact = 1;
   for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<fact;
}