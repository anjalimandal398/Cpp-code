// WAP to store roll number and marks obtained by 4 students side bye side uin a matrix
#include <iostream>
using namespace std;
int main()
{
    int arr[4][2] = {{2, 80}, {3, 73}, {5, 93}, {7, 97}};

    cout << "RollNo.  Marks\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"  " << arr[i][j]<<"\t";
        }
        cout << endl;
    }
}
