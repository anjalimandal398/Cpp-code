#include<iostream>
using namespace std;
int main(){
    int arr[5];             //declaration
    cout<<"Enter array elements: ";
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of these elements is: "<<sum;
}

