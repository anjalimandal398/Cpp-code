// find the diff bt the sum of elements at even indices to the sum of elements at odd indices
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 5, 2, 1, 6, 7};
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += arr[i];
        }

        else
        {
            sumOdd += arr[i];
        }
    }  
    int diff = sumEven - sumOdd;
    cout<<diff;
}
