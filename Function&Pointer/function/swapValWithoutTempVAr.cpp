//swapped value without using temp or extra variables bye taking inout from users:
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int y;
    cout<<"Enter y: ";
    cin>>y;
    x=x+y;
    y=x-y;
    x=x-y;

    cout<< "swapped: " <<x<<" "<<y<<" "<<endl;
}



