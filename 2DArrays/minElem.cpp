#include <iostream>
#include <cmath>
#include <climits> 
using namespace std;

int main()
{
    int arr[4][2] = {{2, 80}, {3, 73}, {5, 93}, {7, 97}};

    int mn=INT_MAX;
  for(int i =0;i<4;i++){
    for(int j=1;j<2;j++){
     mn= min(mn,arr[i][j]);
    }
  }
  cout<<mn;

}

