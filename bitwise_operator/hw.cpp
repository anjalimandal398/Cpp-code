#include<iostream>
using namespace std;
int main(){
   int n, rev=0;
   cout<<"Enter the digits : ";
   cin>>n;
   while(n>0){
    for(int i=1;i<=n;i++){
        int rem=n%10;
        rev=rem+(rev*10);
        n=n/10;
    }
   }
   cout<<rev;
}