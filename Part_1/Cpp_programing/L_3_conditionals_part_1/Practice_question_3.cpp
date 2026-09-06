//Take positive integer input and tell if it is a three digit number or not.

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number to check if it is 3 digit or not:- ";
    cin>>number;
    if (number>99 && number<1000){
        cout<<"yes it is a 3 digit number";
    }
    else{
        cout<<"no it is not a 3 digit number";
    }

    return 0;
}