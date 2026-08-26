#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int number = 0;
    for(int i = 0;s[i]!='\0';i++){
        number = number *10;
        number += s[i] - '0'; // we are subtracting ascii value of 0 coz s[i] is a ch it gives ascii value
    }

    cout<<number+1;
}