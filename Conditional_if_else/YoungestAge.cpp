//take three numb and print the Youngest of them
#include <iostream>
using namespace std;

int main()
{
    int Ram,Shyam,Ajay;
    cout << "Enter the age of Ram: ";
    cin >> Ram;
    cout << "Enter the age of Shyam: ";
    cin >> Shyam;
    cout << "Enter the age of Ajay: ";
    cin >> Ajay;

    if (Ram<Shyam && Ram<Ajay) {
        cout << "Ram is Youngest" << endl;
    }
    else if (Shyam <Ajay && Shyam<Ajay) {
        cout << "Shyam is youngest" << endl;
    }
    
    else{
        cout<<"Ajay is youngest";
    }
}

