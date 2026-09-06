//print the table of n. n is an integer entered by user

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number whose table you wanna print:- ";
    cin>>n;
    int i = n;
    while(i<(n*11)){
        cout<<i<<endl;
        i += n;
    }
    return 0;
}