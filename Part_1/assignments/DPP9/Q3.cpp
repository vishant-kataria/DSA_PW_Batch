// Given two numbers a and b, write a function to print all odd numbers between them.

#include <iostream>
using namespace std;

void odd_number(int a,int b){
    if (a>b){
        odd_number(b,a);
        return;
    }
    for(int i = a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter first number:- ";
    cin>>n;
    int a;
    cout<<"Enter second number:- ";
    cin>>a;

    odd_number(n,a);

}