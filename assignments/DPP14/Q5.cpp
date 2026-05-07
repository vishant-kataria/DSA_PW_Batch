// Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the order of square matrix only odd inputs allowed:- ";
    cin>>n;
    int arr[n][n];

    cout<<"Enter the matrix here:- "<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ;i<n;i++){
        if(i == n/2){
            for(int j = 0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j = 0;j<n;j++){
                if(j == n/2){
                    cout<<arr[i][j];
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}