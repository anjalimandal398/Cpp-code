//wap to print odd number from 1 to 100 using continue even ko hata do #include<iostream>

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
    if(i%2==0) continue;
    cout<<i <<" ";
    }

}