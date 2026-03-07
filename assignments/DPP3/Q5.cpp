// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter first side:- ";
    cin>>a;
    cout<<"Enter second side:- ";
    cin>>b;
    cout<<"Enter third side:- ";
    cin>>c;

    if (a==b && b==c){
        cout<<"Equilateral";
    }
    else if(a==b || a==c || b==c){
        cout<<"isosceles";
    }
    else{
        cout<<"scalene";
    }

    return 0;

}