// Write a program to add two matrices


#include <iostream>

using namespace std;

int main(){
    int rows,columns;
    // int columns_1,columns_2;
    cout<<"Enter the no of rows for both matrix:- ";
    cin>>rows;
    cout<<"Enter the no of columns for both matrix:- ";
    cin>>columns;
    // cout<<"Enter the no of rows for matrix 2:- ";
    // cin>>rows_2;
    // cout<<"Enter the no of columns for matrix 2:- ";
    // cin>>columns_2;
    int arr_1[rows][columns];
    int arr_2[rows][columns];
    cout<<"Enter first matrix:- "<<endl;
    for (int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cin>>arr_1[i][j];
        }
    }
    cout<<"Enter second matrix:- "<<endl;
    for (int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cin>>arr_2[i][j];
        }
    }

    int sum[rows][columns];

    for(int i = 0;i<rows;i++){
        for(int j = 0 ;j<columns;j++){
            sum[i][j] = arr_1[i][j]+arr_2[i][j];
        }
    }
    cout<<"The sum matrix is:- "<<endl;
    for(int i = 0;i<rows;i++){
        for(int j = 0 ;j<columns;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }



    





}