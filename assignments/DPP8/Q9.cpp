// for n = 5
//      *
//     ***
//    * * *
//   *  *  *
//  *   *   *
// ***********
//  *   *   *
//   *  *  *
//    * * *
//     ***
//      *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int helper = n;
    int helper2 = 2*n-3;

    for(int i = 0;i<n;i++){
        for(int j = helper;j>0;j-- ){
            cout<<" ";
        }
        helper--;
        cout<<"*";
        for(int j = 0;j<2*i-1;j++){
            if (j == i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        if(i!=0){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int j = 0;j<2*n+1;j++){
        cout<<"*";
    }
    cout<<endl;
    for(int i = n;i>0;i--){
        for(int j = n;j>=i;j--){
            cout<<" ";
        }
        cout<<"*";
        for(int j = helper2;j>0;j--){
            if(j == i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        helper2 -=2;
        if (i!=1){
            cout<<"*";
        }
        cout<<endl;
    }
}


