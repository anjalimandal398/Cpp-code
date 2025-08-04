//WAP to reverse oder array without using extra array
#include<iostream>
#include<climits>
using namespace std;

int main() {
    int a[] = {30, 1, 43, 22, 67, 12, 4, 33};  // initialization
    int n =sizeof(a)/4;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
