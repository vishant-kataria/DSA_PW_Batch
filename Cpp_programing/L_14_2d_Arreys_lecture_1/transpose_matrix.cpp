// Write a program to print the transpose of the matrix entered by the user and store it in a new matrix.


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
    cout<<"Enter the matrix:- "<<endl;
    for (int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cin>>arr[i][j];
        }
    }

    int transpose[columns][rows];

    for(int i = 0;i<columns;i++){
        for(int j = 0;j<rows;j++){
            transpose[i][j] = arr[j][i];
        }
    }
    cout<<"The transpose matrix is:- "<<endl;
    for(int i = 0;i<columns;i++){
        for(int j = 0;j<rows;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

}