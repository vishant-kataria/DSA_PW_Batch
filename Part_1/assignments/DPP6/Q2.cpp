// WAP to print the sum of a given number and its reverse.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int straight_number = n;
    int reverse_number = 0;

    int last_digit = 0;

    while(n>0){
        last_digit = n%10;
        reverse_number += last_digit;
        reverse_number *= 10;
        n = n/10;
    }

    int sum = straight_number+(reverse_number/10);

    cout<<"The sum of "<<straight_number<<" and its reverse is "<<sum;

}