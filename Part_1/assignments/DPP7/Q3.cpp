// A
// AB
// ABC
// ABCD

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    for(int i = 0;i<=n;i++){
        for(int j =0;j<=i;j++){
            int temp = j;
            temp += 65;
            cout<<(char)temp;
        }
        cout<<endl;
    }
    return 0;
}