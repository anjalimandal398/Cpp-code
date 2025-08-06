#include <iostream>
using namespace std;
int main()
{
    string s = "anjali";
    cout << s<<endl;
    s.push_back('a');
    cout << s<<endl;
    s.push_back('n');
    cout<<s<<endl;
    s.pop_back();
    cout<<s;
}
