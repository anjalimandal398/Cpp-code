#include<iostream>
using namespace std;

int main(){
    int x=3;
    cout<<&x<< endl;              //0x61ff0c

    int y=3;
    cout<<&y;                      //0x61ff08
}


//& operator is use to fine the address of a variable 