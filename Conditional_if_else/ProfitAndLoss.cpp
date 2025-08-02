//If cost price and selling price of an ite is input through the keyboard, write a program to determine whether the seller has ade profit or incurrred loss or mo profit no loss . also determine how much profit he made or loss he incurred// TAke integer input and print the absolute value of that integer
#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"enter cost price :";
    cin>>cp;
    int sp;
    cout<<"enter selling price :";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit is " <<sp-cp;

    }
    else if(sp<cp){
        cout<<"Loss is " <<cp-sp;
    }
    else{
        cout<<"no profit no loss ";
    }


}