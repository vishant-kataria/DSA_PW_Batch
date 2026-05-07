// Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2)

#include <iostream>
using namespace std;

int main(){
    int rows;
    int columns;
    cout<<"Enter the no of rows of matrix:- ";
    cin>>rows;
    cout<<"Enter the no of columns of matrix:- ";
    cin>>columns;
    int arr[rows][columns];
    cout<<"Enter the matrix here:- "<<endl;
    for (int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    int l1,l2,r1,r2;

    cout<<"Enter the value of l1:- ";
    cin>>l1;
    cout<<"Enter the value of r1:- ";
    cin>>r1;
    cout<<"Enter the value of l2:- ";
    cin>>l2;
    cout<<"Enter the value of r2:- ";
    cin>>r2;

    int sum = 0;
    for (int i = l1;i<=l2;i++){
        for(int j = r1;j<=r2;j++){
            sum += arr[i][j];
        }
    }

    cout<<"The sum is:- "<<sum;

}