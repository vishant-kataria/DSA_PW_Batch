// Write a program to print the row number having the maximum sum in a given matrix.

#include <iostream>

using namespace std;

int main(){
    int rows;
    int columns;
    cout<<"Enter the of rows of matrix:- ";
    cin>>rows;
    cout<<"Enter the no of columns of matrix:- ";
    cin>>columns;
    int arr[rows][columns];
    for (int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cin>>arr[i][j];
        }
    }

    int sum[rows];

    

    for(int i = 0 ;i<rows;i++){
        int total = 0;
        for(int j = 0;j<columns;j++){
            total += arr[i][j];
        }
        sum[i] = total;
    }
    int maximum = sum[0];
    int index = 0;
    for(int i = 0 ;i<rows;i++){
        if(maximum<sum[i]) {
            maximum = sum[i];
            index = i;
        }
    }

    cout<<"Row number having maximum sum: "<<index+1;

    


}