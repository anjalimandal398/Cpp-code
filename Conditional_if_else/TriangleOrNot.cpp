//print sides are triangle or not 
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    if(a+b>c){
        cout<<"Valid triangle"<<endl;
    }
    else{
        cout<<"Invalid triangle";
    }
}
