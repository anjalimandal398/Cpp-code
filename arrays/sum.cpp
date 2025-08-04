#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,5,2,5,7};             //declaration
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}

