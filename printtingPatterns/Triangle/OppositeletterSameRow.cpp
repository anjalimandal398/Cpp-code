
#include <iostream>
using namespace std;
int main()
{
   int n ;
   cout<<"Enter the number : ";
   cin>>n;
   for(int i=n;i>=1;i--){
    for(int j =1;j<=i;j++){
        cout<<(char)(j+64)<<" ";

    }
    cout<<endl;
   }

}