// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int number = n;

    int last_number = 0;
    int sum = 0;
    while(n>0){
        last_number = n%10;
        sum += last_number*last_number*last_number;
        n /= 10;
    }

    if (number == sum){
        cout<<"Yes it is an armstrong number";
    }
    else{
        cout<<"No it is not an armstrong number";
    }

    return 0;
}