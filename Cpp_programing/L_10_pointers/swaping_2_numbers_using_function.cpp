#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){
    int x,y;
    cout<<"Enter first number:- ";
    cin>>x;
    cout<<"Enter second number:- ";
    cin>>y;
    swap(&x,&y);
    cout<<"Swapped numbers is:- "<<x<<" "<<y;
}