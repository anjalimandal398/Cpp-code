#include<iostream>
using namespace std;
int main(){
    int arr[]={30,43,22,67,12,4,98,33};             //declaration + initialization
    int n =sizeof(arr)/4;
    int minimum=arr[0];
    for(int i=1;i<n;i++){
        minimum=min(minimum,arr[i]);        //min is the method which is used to find the minimum number
    }
    cout<<minimum;
}

