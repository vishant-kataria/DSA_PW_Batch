//    1
//   121
//  12321
// 1234321

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
            cout<<k;
        }
        for(int o = 1;o<i;o++){
            cout<<(i-o);
        }
        cout<<endl;
    }
}