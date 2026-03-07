// Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter a character:- ";
    cin>>a;

    if ((int(a)>96 && int(a)<123) || (int(a)>60 && int(a)<91)){
        cout<<"The char is an alphabet";
    }
    else if(int(a)>47 && int(a)<58){
        cout<<"The car is an digit";
    }
    else{
        cout<<"it is a special char";
    }
    return 0;
}