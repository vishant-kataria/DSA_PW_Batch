// Write a function to take the radius of a circle as an argument and return its area.

#include <iostream>
using namespace std;

float area(int r){
    return 3.14*r*r;
}

int main(){
    int n;
    cout<<"Enter the radius:- ";
    cin>>n;


    cout<<area(n);
}