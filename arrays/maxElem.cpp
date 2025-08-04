#include<iostream>
using namespace std;
int main(){
    int arr[]={30,1,43,22,67,12,4,98,33};             //declaration + initialization
    int n =sizeof(arr)/4;
    int maximum=arr[0];
    for(int i=1;i<n;i++){
        maximum=max(maximum,arr[i]);        //max is the method which is used to find the maximum number
    }
    cout<<maximum;
}

