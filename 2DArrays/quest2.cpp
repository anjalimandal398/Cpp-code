// WAP to store 10 at dex of a 2D matrix with 5 rows and 5 column;
#include <iostream>
using namespace std;
int main()
{
    int arr[5][5] ;
     for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            arr[i][j] = 10;
        }
    }

    for(int i =1;i<5;i++){
        for(int j =1;j<5;j++){
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;

}
    
}

