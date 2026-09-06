// Write a program to print sum of all the elements of a 2D matrix.

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
    for (int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;

    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            sum += arr[i][j];
        }
    }

    cout<<"The sum of all the elements is:- "<<sum;
}