#include <iostream> 
using namespace std;

int main()
{
   int arr[5][4]={{1,2,5,4},{3,4,1,11},{5,6,9,5},{1,2,3,0},{0,7,3,1}};
   int sum =0;
   for(int i =0;i<5;i++){
    for(int j =0;j<4;j++){
        if (i != 0 && j != 0 && j != 3) { 
            sum += arr[i][j];
        }
    }
   }
   cout<<sum<<" ";  
}

