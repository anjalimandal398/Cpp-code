#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    int temp=n;
    while(n!=0){
        int ld=n%10;
        sum=sum+ld*ld*ld;
        n=n/10;
    }

    if(temp==sum){
        cout<<" Armstrong "<<sum;
    }else{
        cout<<"Not armstrong "<<sum;
    }



}  
