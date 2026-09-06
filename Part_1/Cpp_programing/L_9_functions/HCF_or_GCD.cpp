#include <iostream>
using namespace std;

int gcd(int x , int y){
    int temp = 1;
    for(int i = min(x,y);i > 1;i--){
        if(x%i==0 && y%i==0){
            temp = i;
            break;
        }
    }   
    return temp;
}

int main(){
    int x,y;
    cout<<"Enter first number:- ";
    cin>>x;
    cout<<"Enter second number:- ";
    cin>>y;

    cout<<gcd(x,y);
}