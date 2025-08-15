// 5 -101
#include<iostream>
using namespace std;

int deciToBinary(int decNum){
    int sum=0,pow=1;
    while ( decNum>0){
        int rem=decNum%2;
        sum=sum+(rem*pow);
        pow=pow*10;
        decNum=decNum/2;
    
       }
       return sum;

}
int main(){
    int decNum;
   cout<<"Enter the Decimal number: ";
   cin>>decNum;
   cout<<deciToBinary(decNum);
   return 0;
}