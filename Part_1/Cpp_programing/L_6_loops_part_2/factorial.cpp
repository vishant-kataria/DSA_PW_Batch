// Print the factorial of a given number ‘n’.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int a = 1;
    while (n>0){
        a *= n;
        n = n-1;
    }

    cout<<"The factorial is "<<a;

    return 0;
}