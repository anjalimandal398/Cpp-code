#include<iostream>
using namespace std;
int main(){
    int arr[6];             //declaration
    cout<<"Enter array elements: ";
    for(int i=0;i<=5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    //Updation of array
     arr[0]=100;
    cout<<endl;
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
}

