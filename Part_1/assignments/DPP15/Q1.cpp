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
        for(int j = 0;j<n;j++){
            if(i+j==n-1 || i == j){
                cout<<matrix[i][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}