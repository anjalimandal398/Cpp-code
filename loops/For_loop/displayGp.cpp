// display this AP-4,7,10,13,16..upto 'n'terms
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    //1,2,4,8,16...
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*2;
    }
}