//write a program to print the multiplication of 2 matrix given by user.


#include<iostream>
using namespace std;
// void print_arr(int** arr,int rows,int columns){
//     for(int i = 0;i<rows;i++){
//         for(int j = 0;j<columns;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
// }

int main(){
    int n1;
    int n2;
    cout<<"Enter the no of rows of the first matrix:- ";
    cin>>n1;
    cout<<"Enter the no of columns of the first matrix:- ";
    cin>>n2;
    int arr_1[n1][n2];
    cout<<"Enter matrix 1:- "<<endl;
    for (int i = 0;i<n1;i++){
        for(int j = 0;j<n2;j++){
            cin>>arr_1[i][j];
        }
    }
    int m1;
    int m2;
    cout<<"Enter the no of rows of the second matrix:- ";
    cin>>m1;
    cout<<"Enter the no of columns of the second matrix:- ";
    cin>>m2;
    int arr_2[m1][m2];
    cout<<"Enter matrix 2:- "<<endl;
    for (int i = 0;i<m1;i++){
        for(int j = 0;j<m2;j++){
            cin>>arr_2[i][j];
        }
    }

    if(n2!=m1){
        cout<<"Matrix cant be multiplied";
        return 0;
    }

    int arr_3[n1][m2];

    for(int i = 0;i<n1;i++){
        for(int j = 0;j<m2;j++){
            int a = 0;
            for(int k = 0;k<n2;k++){
                a += arr_1[i][k]*arr_2[k][j];
            }
            arr_3[i][j] = a;
        }
    }
    cout<<"Multiplication array is:-"<<endl;
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<m2;j++){
            cout<<arr_3[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;





}