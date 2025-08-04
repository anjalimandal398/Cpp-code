// WAP to check array is palindrome or not
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 4, 3, 2, 1}; // initialization
    int n = sizeof(a) / 4;
    int i = 0, j = n - i - 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            cout << "Not palindrome...";
            return 0;
        }
        i++;
        j--;
    }
    cout << "Palindrome.";
}