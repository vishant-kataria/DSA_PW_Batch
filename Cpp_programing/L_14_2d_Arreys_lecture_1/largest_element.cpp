// Write a C++ program to find the largest element of a given 2D array of integers.

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

    int largest_number = arr[0][0];

    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            if(arr[i][j]>largest_number) largest_number = arr[i][j];
        }
    }

    cout<<"Largest number in this 2d array is:- "<<largest_number;

}