//WAP to print all the ASCII values and their equivalent character of 26 alphabets using a while loop

#include <iostream>
using namespace std;
int main()
{
   int i=65;
   while(i<=90){
    cout<<i<<"-"<<char(i)<<endl;
    i++;
   }
}