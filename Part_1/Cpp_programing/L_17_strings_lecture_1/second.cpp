#include <iostream>
#include <string>

using namespace std;

int main(){
    // int n;
    // cout<<"Enter a number here:- ";
    // cin>>n;

    // char str[n];

    string str;

    cin>>str;
    // cout<<str;

    for(int i = 0;str[i] != '\0';i++){
        if(i%2==0){
            str[i] = 'a';
        }
    }

    cout<<str;
}