#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,5,2,5,7};             //declaration
    int product=1;
    for(int i=0;i<=4;i++){
        product=product*arr[i];
    }
    cout<<product;
}

