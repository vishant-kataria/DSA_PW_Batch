//write a program to print the matrix in wave form

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the no of rows of the matrix:- ";
    cin>>n;
    int m;
    cout<<"Enter the no of columns of the matrix:- ";
    cin>>m;

    int matrix[n][m];
    cout<<"Enter your matrix please:- "<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n/2;j++){
            if(i%2 == 0){
                swap(matrix[j][i],matrix[n-j-1][i]);
            }
        }
    }
    cout<<"Matrix in wave form is:- "<<endl;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}