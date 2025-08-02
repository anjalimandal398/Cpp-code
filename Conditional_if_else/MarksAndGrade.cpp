//take iput percentage of a student and print the grade accourding to marks
#include <iostream>
using namespace std;

int main()
{
    int n;
   cout<<"Enter the mark : ";
   cin>>n;
    if (n>=81 && n<=100) {
        cout << "Very Good" << endl;
    }
    else if (n>=61 && n<=80) {
        cout << "Good" << endl;
    }
    else if (n>=41 && n<=60) {
        cout << "Average" << endl;
    }
    else{
        cout<<"Fail";
    }
}

