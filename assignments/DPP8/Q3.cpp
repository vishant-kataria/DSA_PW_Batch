//    A
//   BAB
//  CBABC
// DCBABCD

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int no_of_spaces = n-1;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=no_of_spaces;j++){
            cout<<" ";
        }
        no_of_spaces--;
        int temp = 64+i;
        for(int k = 1;k<=i;k++){
            
            cout<<(char)temp;
            temp--;
        }
        int temp_2 = 66;
        for(int j = 1;j<i;j++){
            
            cout<<(char)temp_2;
            temp_2++;
        }
        cout<<endl;
    }
}