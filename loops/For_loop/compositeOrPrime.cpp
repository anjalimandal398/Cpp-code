// display this AP-3,12,48,..upto 'n'terms
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    bool flag=true;       //number is prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false; ////false means composite
            break;
        }
    }
    if(n==1) cout<<"Neither prime nor composite";
    else if(flag==true) cout<<"Prime";
    else cout<<"Composite";
    
}