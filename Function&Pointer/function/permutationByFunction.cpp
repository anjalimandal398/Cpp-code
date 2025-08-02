#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
       fact*=i;   
    }
    return fact;
}

int main(){
    int n;
    cout << "Enter the n: ";
    cin >> n;
    int r;
    cout << "Enter the r: ";
    cin >> r;

    int a =factorial(n);
    int b= factorial(n-r);
    cout<<a/b;
}   