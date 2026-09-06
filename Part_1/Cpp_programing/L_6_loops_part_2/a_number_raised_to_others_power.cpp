// Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

#include <iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter base:- ";
    cin>>a;
    cout<<"Enter exponent:- ";
    cin>>b;
    float c = 1;

    

    if (b>=1){
        for(int i=1;i<=b;i++){
        c = c * a;
        }
        cout<<a<<" raised to the power "<<b<<" is "<<c;
    }
    else if(b==0){
        if (a==0){
            cout<<"Not defined";
        }
        else{
            cout<<a<<" raised to the power "<<b<<" is "<<1;
        }
    }
    else if(b<0){
        for(int i=1;i<= (-1*b);i++){
        c = c * a;
        }
        cout<<a<<" raised to the power "<<b<<" is "<<(1.0/c);
    }
    else{
        cout<<"As of now i dont have the knowledge to do it";
    }

    

    return 0;
}