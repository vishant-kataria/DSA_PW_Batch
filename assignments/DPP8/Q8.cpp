// for n = 4
//    1
//   2 2
//  3   3
// 4     4

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int helper = n-1;

    for(int i = 0;i<n;i++){
        for(int j = helper;j>0;j--){
            cout<<" ";
        }
        helper--;
        cout<<i+1;
        for(int j = 0;j<2*i-1;j++ ){
            cout<<" ";
        }
        if(i!=0){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}