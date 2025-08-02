#include <iostream>
using namespace std;

int main()
{
    int n, originalNum ,rev= 0;
    cout << "Enter number: ";
    cin >> n;

    originalNum=n;
    while(n!=0){
       int ld=n%10;
       rev=rev*10+ld;
       n=n/10;

    }
    if(rev==originalNum){
        cout<<"Palindrome number";
    }
    else{
        cout<<"Not a palindrome number";
    }


 
}
