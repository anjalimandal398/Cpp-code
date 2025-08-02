#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter digit: ";
    cin >> n;
   int count=0;
   for(int i=1;i<=n;i++){
     while(n>0){
       int ld=n%10;
        n=n/10;
        if(ld%2!=0) {
        count+=1;
        }
     }
   }
   cout<<count;
}