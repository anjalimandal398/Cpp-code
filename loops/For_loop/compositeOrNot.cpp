// display this AP-3,12,48,..upto 'n'terms
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"Composite";
            break;
        }
    }
    
}