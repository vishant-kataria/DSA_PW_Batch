// for n = 4
// 1234321
// 123 321
// 12   21
// 1     1

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int helper = n-1;

    for(int i = 0;i<n;i++){
        if(i == 0){
            for(int j = 1;j<=n;j++){
                cout<<j;
            }
            for(int j = n-1;j>0;j--){
                cout<<j;
            }
        }
        else{
            for(int j = 1;j<=helper;j++){
                cout<<j;
            }
            for(int j = 1;j<=i*2-1;j++){
                cout<<" ";
            }
            for(int j = helper;j>0;j--){
                cout<<j;
            }
            helper--;
        }
        cout<<endl;
    }
}

