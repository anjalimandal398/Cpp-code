//rectangle row!=column
#include <iostream>
using namespace std;
int main()
{
   int m ;
   cout<<"Enter the number of Row : ";
   cin>>m;
   int n ;
   cout<<"Enter the number of column : ";
   cin>>n;
   for(int i =1;i<=m;i++){
    for(int i =1;i<=n;i++){
        cout<<"*" <<" ";

    }
    cout<<endl;
   }

}