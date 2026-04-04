// for n = 4
// *     *
// **   **
// *** ***
// *******
// *******
// *** ***
// **   **
// *     *


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int helper = 2*n-3;

    for(int i = 1;i<n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        for(int j = 1;j<=helper;j++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        helper -= 2;
        cout<<endl;

    }
    for(int j = 1;j<=2*n-1;j++){
        cout<<"*";
    }
    cout<<endl;
    for(int j = 1;j<=2*n-1;j++){
        cout<<"*";
    }
    cout<<endl;

    for(int i = 1;i<n;i++){
        for(int j = n;j>i;j--){
            cout<<"*";
        }
        for(int j = 1;j<=2*i-1;j++){
            cout<<" ";
        }
        for(int j = n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;

    }
    
    return 0;

}