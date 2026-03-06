//Take 3 numbers input and tell if they can be the sides of a triangle.

#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter first number:- ";
    cin>>a;
    cout<<"Enter second number:- ";
    cin>>b;
    cout<<"Enter third number:- ";
    cin>>c;

    if (a+b>c && b+c>a && c+a>b){
        cout<<"the 3 number can form a triangle";
    }
    else{
        cout<<"the 3 can not make a triangle";
    }

    return 0;
}