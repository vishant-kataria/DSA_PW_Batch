//WAP to print sum of digits of a given number.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int a = 0;
    while(1){
        if (n>9){
            a = a + (n%10);
            n = n/10;
            continue;
        }
        else{
            a = a + n;
            break;
        }
    }

    cout<<"Sum of its digits is "<<a;

    return 0;
}