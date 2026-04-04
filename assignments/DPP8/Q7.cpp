// for n = 4
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *  


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int helper = n-1;
    int helper2 = 2*n-5;

    for(int i = 0;i<n;i++){
        for(int j = helper;j>0;j-- ){
            cout<<" ";
        }
        helper--;
        cout<<"*";
        for(int j = 0;j<2*i-1;j++){
            cout<<" ";
        }
        if(i!=0){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1;i<n;i++){
        for(int j = 0;j<i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j = helper2;j>0;j--){
            cout<<" ";
        }
        helper2 -=2;
        if (i!=n-1){
            cout<<"*";
        }
        cout<<endl;
    }
}