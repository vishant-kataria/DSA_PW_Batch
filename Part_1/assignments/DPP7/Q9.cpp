//    A
//   AB
//  ABC
// ABCD

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    for(int i = 1;i<=n;i++){

        for(int j = n;j>i;j--){
            cout<<" ";
        }
        for(int k = 1;k<=i;k++){
            int temp = k;
            temp += 64;
            cout<<(char)temp;
        }
        cout<<endl;
    }
}