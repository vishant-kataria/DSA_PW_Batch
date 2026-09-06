#include <iostream>

using namespace std;

int main(){
    int rows;
    int columns;
    cout<<"Enter no of rows of matrix:- ";
    cin>>rows;
    cout<<"Enter no of columns of matrix:- ";
    cin>>columns;

    int random_matrix[rows][columns];
    cout<<"Enter the matrix:- ";
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cin>>random_matrix[i][j];
        }
    }

    cout<<"Now printing the matrix in another pattern:- "<<endl;

    for(int j = 0;j<columns;j++){
        if(j%2==0){
            for(int i = 0;i<rows;i++){
                cout<<random_matrix[i][j];
            }
            cout<<endl;
            
        }
        else{
            for(int i = rows-1;i>=0;i--){
                cout<<random_matrix[i][j];
            }
            cout<<endl;
        }
    }
}