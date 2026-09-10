#include <iostream>
using namespace std;

int reverse_(int n,int r){
    if(n==0) return 0;
    r = r*10+n%10;
    reverse_(n/10,r);
    return r;
}
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int reverse = reverse_(n,0);

    cout<<reverse;
}