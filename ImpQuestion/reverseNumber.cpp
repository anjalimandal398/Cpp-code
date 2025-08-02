#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter digit: ";
    cin >> n;
   int rev=0;
   for(int i=1;i<=n;i++){
     while(n>0){
       int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
     }
   }
   cout<<rev;
}