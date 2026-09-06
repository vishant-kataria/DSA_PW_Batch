//WAP to print reverse of a given number.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int a = 0;
    while (n>0){
        a = a*10;
        a = (a+ (n%10));

        n /= 10;

    }
    cout<<"The reverse order is "<<a;
    return 0;
}