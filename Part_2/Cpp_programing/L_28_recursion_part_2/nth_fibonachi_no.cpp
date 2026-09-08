#include <iostream>
using namespace std;
int fibonachi(int n){
    if(n==1 || n==2) return 1;
    return fibonachi(n-1)+fibonachi(n-2);
}
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int a = fibonachi(n);

    cout<<a;
}