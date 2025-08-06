#include <iostream>
#include<string>
#include <algorithm>            // for reverse()
using namespace std;
int main()
{
    string s = "anjali";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s;
}
