#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], sum[3][3];

    // Input A
    cout << "Enter elements of Matrix A (3x3):\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    // Input  B
    cout << "Enter elements of Matrix B (3x3):\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    // sum
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result
    cout << "\nSum of Matrix A and B:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

}
