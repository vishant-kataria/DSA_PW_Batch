//Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:- ";
    cin>>a;

    if (a%5==0 || a%3==0){
        if(a%15==0){
            cout<<a<<" is divisible by both 5 and 3";
        }
        else if(a%5==0){
            cout<<a<<" is divisible by 5";
        }
        else{
            cout<<a<<" is divisible by 3";
        }
    }
    else{
        cout<<a<<" is neither divisible by 5 nor 3";
    }

    return 0;
}