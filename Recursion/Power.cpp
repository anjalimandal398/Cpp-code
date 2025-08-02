// make  a function which calculate "a" raised to the power" b" using recursion
#include <iostream>
#include<cmath>
using namespace std;

int power(int a, int b  ){
    if(b==0) return 1 ;
     return a*power(a,b-1);
}
   
int main()
{  
    int a ;
    cout<<"enter a: ";
    cin>>a;
    int b ;
    cout<<"enter b: ";
    cin>>b;
   cout<<power(a,b);
}