//Take positive integer input and tell if it is divisible by 5 and 3.

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:- ";
    cin>>a;

    if (a%5==0 && a%3==0){
        cout<<"The number is divisible by 3 and 5 both";
    }
    else{
        cout<<"The number is not divisible by both 3 and 5";
    }

    return 0;
}