#include <iostream>
using namespace std;

int main()
{
   int arr[3][2]={{1,2},{3,4},{5,6}};
   int product =1;
   for(int i =0;i<3;i++){
    for(int j =0;j<2;j++){
        product*=arr[i][j];
    }
   }
   cout<<product<<" ";  
}

