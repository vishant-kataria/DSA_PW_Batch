// 1
// AB
// 123
// ABCD


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    for (int i = 1;i<=n;i++){
        for(int j= 1;j<=i;j++){
            int temp = j;
            temp += 64;
           if (i%2==0){
            cout<<(char)temp;
           } 
           else{
            cout<<j;
           }
        }
        cout<<endl;

    }
}