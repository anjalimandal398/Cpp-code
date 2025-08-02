#include<iostream>
using namespace std;
 
void Usa(){
   cout<<"Hello from Usa..." <<endl;

}
void India(){
    cout<<"Hello from India.." <<endl;
    Usa();
    return;
 }

 int main(){
    cout<<"This is main function." <<endl;
    Usa();
    India();
    return 0;
    
 }