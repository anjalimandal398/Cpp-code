#include <iostream>
#include<string>
#include <algorithm>            // for reverse()
using namespace std;
int main()
{
    int x=12345;
    string s=to_string(x);
    s+="dd";
    cout<<s;
}
