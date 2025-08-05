#include <iostream>
using namespace std;

int main()
{
   int rows,cols;
   cout<<"enter the number of rows: ";
   cin>>rows;
   cout<<"enter the number of cols: ";
   cin>>cols;
   int arr[100][100];
    int sum=0;

cout<<"Enter the elemets of the matrix: ";
   for(int i =0;i<rows;i++){
    for(int i =0;i<rows;i++){
        cin>>arr[rows][cols];
        sum+=arr[rows][cols];
    }
   }
   cout<<sum;

}

