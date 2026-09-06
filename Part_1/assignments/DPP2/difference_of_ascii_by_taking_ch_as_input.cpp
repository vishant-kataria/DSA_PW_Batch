//WAP to find the difference between ASCII of two characters ,take them as input .
#include <iostream>
using namespace std;

int main(){
    char a,b;
    cout<<"This program will find the ASCII diff of 2 character by taking character as input from you"<<endl;
    cout<<"Enter your first character:- ";
    cin>>a;
    cout<<"Enter your 2nd character:- ";
    cin>>b;

    int c = b-a;
    cout<<"The difference is done by subtracting ascii of 2nd from first"<<endl;
    cout<<"The difference is "<<c;

    return 0;

}