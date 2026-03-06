//Write a program to check whether a given character is a vowel or a consonant.

#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter a character:- ";
    cin>>a;
    int b = int(a);
    if (b==97 || b==101 || b==105 || b==111 || b==117 || b== 65 || b==69 || b==73 || b==79 || b==85){
        cout<<a<<" is vovel";
    }
    else{
        cout<<a<<" is not vovel";
    }

    return 0;
}

//a=97,e=101,105,111,117,65,69,73,79,85