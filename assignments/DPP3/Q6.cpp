// If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring the least marks.

#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter marks of A:- ";
    cin>>a;
    cout<<"Enter marks of B:- ";
    cin>>b;
    cout<<"Enter marks of C:- ";
    cin>>c;

    if (a<b && a<c){
        cout<<"A has the lowest marks";
    }
    else if(b<a && b<c){
        cout<<"B has the lowest marks";
    }
    else{
        cout<<"C has the lowest marks";
    }

    return 0;
}