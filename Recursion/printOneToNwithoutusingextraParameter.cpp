#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;
        print(n - 1);s
    cout << n << endl;
    
}
int main()
{    int n ;
    cout<<"enter number: ";
    cin>>n;
    print(n);
}
