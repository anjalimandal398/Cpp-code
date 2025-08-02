//Take a positive integer input and tell if it is a three digit number or not 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;   
    if(n>99 && n<1000){
        cout<<"yes, this is three digit number"<<endl;
    }
    else{
        cout<<"No,This is not a three digit number ";
    }
}