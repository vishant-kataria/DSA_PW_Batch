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
    int rm = 0;
    int rM = rows-1;
    int cm = 0;
    int cM = columns-1;
    cout<<"Printing it in spiral form:- "<<endl;
    while(cM>=cm && rM>=rm){
        for(int i = cm;i<=cM;i++){
            cout<<random_matrix[rm][i];
        }
        rm++;
        // if(cM<cm && rM<rm){
        //     break;
        // }
        for(int j = rm;j<=rM;j++){
            cout<<random_matrix[j][cM];
        }
        cM--;
        // if(cM<cm && rM<rm){
        //     break;
        // }
        if (rm <= rM) {
            for(int k = cM;k>=cm;k--){
                cout<<random_matrix[rM][k];
            }
        }
        rM--;
        // if(cM<cm && rM<rm){
        //     break;
        // }
        if (cm <= cM) {
            for(int l = rM;l>=rm;l--){
                cout<<random_matrix[l][cm];
            }
        }
        cm++;
        // if(cM<cm && rM<rm){
        //     break;
        // }


    }    


}