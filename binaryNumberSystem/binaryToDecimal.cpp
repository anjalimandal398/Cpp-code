//101-5
#include<iostream>
using namespace std;

int binaryToDecimal(int binaryNum){
    int sum=0,pow=1;
    while ( binaryNum>0){
        int rem=binaryNum%10;
        sum=sum+(rem*pow);
        pow=pow*2;
        binaryNum=binaryNum/10;
    
       }
       return sum;

}
int main(){
    int binaryNum;
   cout<<"Enter the binary number: ";
   cin>>binaryNum;
   cout<<binaryToDecimal(binaryNum);
   return 0;
}