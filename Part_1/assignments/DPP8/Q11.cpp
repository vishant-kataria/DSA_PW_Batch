// for n = 4
// *******
// *** ***
// **   **
// *     *
// **   **
// *** ***
// *******

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int helper = n-1;
    int helper_2 = 2;
    int helper_3 = 2*n-5;

    for(int j = 1;j<=2*n-1;j++){
        cout<<"*";
    }
    cout<<endl;
    for (int i = 1;i<n;i++){
        for(int j = helper;j>0;j--){
            cout<<"*";
        }
        
        for(int j = 1;j<=2*i-1;j++){
            cout<<" ";
        }
        for(int j = helper;j>0;j--){
            cout<<"*";
        }
        helper--;
        cout<<endl;
    }
    for(int i = 2;i<n;i++){
        for(int j = helper_2;j>0;j--){
            cout<<"*";
        }
        for(int j = 1;j<=helper_3;j++){
            cout<<" ";
        }
        for(int j = helper_2;j>0;j--){
            cout<<"*";
        }
        helper_2 += 1;
        helper_3 -=2;
        cout<<endl;

    }
    for(int j = 1;j<=2*n-1;j++){
        cout<<"*";
    }
    cout<<endl;
}