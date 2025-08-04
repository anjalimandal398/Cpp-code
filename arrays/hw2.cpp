//given an array of intergers change the value of all odd increased elem to its multiple and increament all even increased value by 10 ;
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5,6,7,8,9};

    for(int i = 0; i < 9; i++) {
        if(i % 2 == 0) {
            arr[i] = arr[i] + 10;  // index even → +10
        } else {
            arr[i] = arr[i] * 2;   // index odd → *2
        }
    }

    for(int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
}
