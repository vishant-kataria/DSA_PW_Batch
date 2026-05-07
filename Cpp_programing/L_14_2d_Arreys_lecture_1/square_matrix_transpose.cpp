// Write a program to change the given matrix with its transpose only square matrix.


#include <iostream>

using namespace std;

int main(){
    int order;
    // int columns;
    cout<<"Enter order of square matrix:- ";
    cin>>order;
    // cout<<"Enter the no of columns of matrix:- ";
    // cin>>columns;
    cout<<"Enter the matrix:- "<<endl;
    int arr[order][order];
    for (int i = 0;i<order;i++){
        for(int j = 0;j<order;j++){
            cin>>arr[i][j];
        }
    }

    //converting

    for(int i = 0;i<order;i++){
        for(int j = i+1;j<order;j++){
            int temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    }

    //printing the updated matrix.
    cout<<"The updated matrix:- "<<endl;
    for (int i = 0;i<order;i++){
        for(int j = 0;j<order;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }





}