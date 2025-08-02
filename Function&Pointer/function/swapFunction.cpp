//swapFunction:
#include <iostream>
#include <cmath>
using namespace std;
void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 12;
    int y = 52;
    cout << x << " " << y << " " << endl;
    swap(x,y);
    cout << x << " " << y << " " << endl;
}
