// calculator by Switch case
#include <iostream>
using namespace std;
int main()
{
    int n1;    //NUmber1
    cin>>n1;
    char op;  //Operator
    cin>>op;
    int n2;      //Number2
    cin>>n2;
   switch(op){
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    default:
        cout<<"Invalid Operator";

}