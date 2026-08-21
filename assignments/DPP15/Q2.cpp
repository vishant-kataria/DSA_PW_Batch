#include <iostream>

using namespace std;

int main(){
    int n ;
    cout<<"Enter the order of the square matrix:- ";
    cin>>n;
    // int m;
    // cout<<"Enter the no of columns of the matrix:- ";
    // cin>>m;

    int matrix[n][n];
    cout<<"Enter your matrix please:- "<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            if (i!=j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n/2;j++){
            swap(matrix[j][i],matrix[n-j-1][i]);
        }
    }
    cout<<"Matrix after rotating 90 degree anticlockwise is:- "<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}