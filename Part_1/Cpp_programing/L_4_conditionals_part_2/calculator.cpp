#include <iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"Enter the equation you wanna solve:- ";
    cin>>a>>c>>b;

    if (c=='+'){
        cout<<a+b;
    }
    else if (c=='-'){
        cout<<a-b;
    }
    else if(c=='*'){
        cout<<a*b;
    }
    else{
        cout<<a/b;
    }

    return 0;
}