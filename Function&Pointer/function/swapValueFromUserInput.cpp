//swap value from inout from user
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
    int temp=x;
    x=y;
    y=temp;

    cout<< "swapped: " <<x<<" "<<y<<" "<<endl;
}



