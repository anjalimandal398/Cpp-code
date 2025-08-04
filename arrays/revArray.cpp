//WAP  to copy the content if ine array to another in the reverse order
#include<iostream>
#include<climits>
using namespace std;

int main() {
    int a[] = {30, 1, 43, 22, 67, 12, 4, 33};  // initialization
    int n =sizeof(a)/4;
    int b[n];
    for(int i =0;i<n;i++){
        int j=n-i-1;
        b[i]=a[j];
        cout<<b[i]<<" ";
    } 
}
