// for n = 4
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int nsp = (n-1);//nsp = no of spaces
    int nss = 1;//nss = no of stars

    for(int i  = 1;i<=n;i++){
        for(int j = 1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        for (int k = 1;k<=nss;k++){
            cout<<"*";
        }
        nss += 2;
        cout<<endl;
    }
    nsp += 2;
    nss -= 4;
    for(int i  = 1;i<=n;i++){
        for(int j = 1;j<=nsp;j++){
            cout<<" ";
        }
        nsp++;
        for (int k = 1;k<=nss;k++){
            cout<<"*";
        }
        nss -= 2;
        cout<<endl;
    }
    

}