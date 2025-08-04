//count the number of element in given array greater than a given number x;
#include<iostream>
using namespace std;
int main(){
   int arr[]={2,3,4,5,6,10,12,4,26,8,88};
   int x=4;
   int count =0;
   for(int i=1;i<=10;i++){
    if(arr[i]>x)
        count++;
   }
   cout << "Count of elements greater than " << x << " = " << count;
}
