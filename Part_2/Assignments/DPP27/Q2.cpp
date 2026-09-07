#include <iostream>

using namespace std;
int tribonachi(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return tribonachi(n-1)+tribonachi(n-2)+tribonachi(n-3);
}
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int a = tribonachi(n);

    cout<<a;
}