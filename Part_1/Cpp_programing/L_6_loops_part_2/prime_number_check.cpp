//WAP to check if a number is prime or not. 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int a = 1;//  a==1 means prime and a==0 means composite
    for (int i = 2;i<n; i++){
        if (n%i==0){
            a = 0;
            break;
        }
    }

    if(n<=1){
        cout<<"The number is neither prime nor composite";
    }
    else if(a==1){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
}