#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {30, 1, 43, 22, 67, 12, 4, 33};  // initialization
    int n = sizeof(arr) / sizeof(arr[0]);

    int minimum = INT_MAX;

    for(int i = 0; i < n; i++) {
        minimum = min(minimum, arr[i]);
    }

    int secondMinimum = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] != minimum && arr[i] < secondMinimum) {
            secondMinimum = arr[i];
        }
    }

    if (secondMinimum == INT_MAX) {
        cout << "No second minimum found";
    } else {
        cout << "Second minimum = " << secondMinimum;
    }
}
