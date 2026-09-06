#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter first number:- ";
    cin>>x;
    cout<<"Enter second number:- ";
    cin>>y;

    int *p = &x;
    int *q = &y;

    cout<<"Sum of these 2 numbers is:- "<<*p+*q;

    // int x,y;
    // int *p1 = &x,*p2 = &y;

}