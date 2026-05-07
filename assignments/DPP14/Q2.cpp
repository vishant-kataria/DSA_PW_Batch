#include <iostream>
using namespace std;
int main(){
    int rows_1;
    int columns_1;
    cout<<"Enter the no of rows for matrix 1:- ";
    cin>>rows_1;
    cout<<"Enter the no of columns for matrix 1:- ";
    cin>>columns_1;
    cout<<"Enter matrix no 1"<<endl;
    int arr_1[rows_1][columns_1];
    for (int i = 0;i<rows_1;i++){
        for(int j = 0;j<columns_1;j++){
            cin>>arr_1[i][j];
        }
    }
    int rows_2;
    int columns_2;
    cout<<"Enter the no of rows for matrix 2:- ";
    cin>>rows_2;
    cout<<"Enter the no of columns for matrix 2:- ";
    cin>>columns_2;
    cout<<"Enter matrix no 2:- "<<endl;
    int arr_2[rows_2][columns_2];
    for (int i = 0;i<rows_2;i++){
        for(int j = 0;j<columns_2;j++){
            cin>>arr_2[i][j];
        }
    }

    int sum[rows_1][columns_1];

    for(int i = 0;i<rows_1;i++){
        for(int j = 0;j<columns_1;j++){
            sum[i][j] = arr_1[i][j]+arr_2[i][j];
        }
    }
    cout<<"The sum matrix is:- "<<endl;
    for(int i = 0;i<rows_1;i++){
        for(int j = 0;j<columns_1;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }


}