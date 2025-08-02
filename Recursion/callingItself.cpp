#include <iostream>
using namespace std;
void greet(){
    cout<<"Good Morning.."<<endl;
    greet();
}

int main(){
    greet();
}
