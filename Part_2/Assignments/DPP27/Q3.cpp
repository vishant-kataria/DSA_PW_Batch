#include <iostream>
using namespace std;

bool check(int n){
    if(n==1) return true;
    if(n%2==0) return check(n/2);
    return false;
}

int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    bool a = check(n);

    cout<<a;
}