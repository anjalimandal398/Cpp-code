//find the second maximum element in th array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={30,1,43,22,67,12,4,33};             //declaration + initialization
    int n =sizeof(arr)/4;
    int maximum = INT_MIN;
    for(int i=1;i<n;i++){
        maximum=max(maximum,arr[i]);        //max is the method which is used to find the maximum number
    }
    int secondMaximum= INT_MIN;
    for(int i =1;i<n;i++){
        if(arr[i]!=maximum){
            secondMaximum=max(secondMaximum,arr[i]);
    
        }
    }
    cout<<secondMaximum;
  
}

