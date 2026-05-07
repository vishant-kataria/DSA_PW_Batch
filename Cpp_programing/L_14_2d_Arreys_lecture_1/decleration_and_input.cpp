#include <iostream>

using namespace std;

int main(){
    int rows;
    int columns;
    cout<<"Enter the no rows of matrix:- ";
    cin>>rows;
    cout<<"Enter the no of columns of matrix:- ";
    cin>>columns;
    int arr[rows][columns];
    // for(int i = 0;i<rows;i++){
    //     for(int j = 0;j<columns;j++){
    //         cout<<"Enter the element of row "<<i+1<<" and column "<<j+1<<":- ";
    //         cin>>arr[i][j];
    //     }
    // }
    for (int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}