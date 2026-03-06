//Write a program to check whether a character is an alphabet or not.

#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"This program will take a char and check if it is an alphabet or not"<<endl;
    cout<<"Enter a char:- ";
    cin>>a;
    if ((a>96 && a<123) || (a>64 && a<91)){
        cout<<a<<" is an alphabet";
    }
    else{
        cout<<a<<" is not an alphabet";
    }
    
    return 0;
}