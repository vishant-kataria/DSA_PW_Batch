// Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
void product(int x,int y,int *a){
    *a = x*y; 
}


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter first number- ";
    cin>>n;
    int p;
    cout<<"Enter second number:- ";
    cin>>p;
    int product_real;
    int *a = &product_real;
    product(n,p,a);
    cout<<"Sum of these 2 numbers is:- "<<*a;

    
}