#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number please:- ";
    cin>>n;

    int rm = 0;
    int rM = n-1;
    int cm = 0; 
    int cM = n-1;

    int matrix[n][n];
    int a = 1;
    while(rm<=rM && cm<=cM ){
        for(int i = cm;i<=cM;i++){
            matrix[rm][i] = a;
            a++;
        }
        rm++;
        if(rm>rM && cm>cM){
            break;
        }
        for(int j = rm;j<=rM;j++){
            matrix[j][cM] = a;
            a++;
        }
        cM--;
        if(rm>rM && cm>cM){
            break;
        }
        for(int k = cM;k>=cm;k--){
            matrix[rM][k] = a;
            a++;
        }
        rM--;
        if(rm>rM && cm>cM){
            break;
        }
        for(int l = rM;l>=rm;l--){
            matrix[l][cm] = a;
            a++;
        }
        cm++;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}