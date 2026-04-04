//    A 
//   ABC
//  ABCDE
// ABCDEFG

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int no_of_space = n-1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=no_of_space;j++){
            cout<<" ";
        }
        no_of_space--;
        for(int k =1;k<=2*i-1;k++){
            int temp = k+64;
            cout<<(char)temp;
        }
        cout<<endl;
    }
}