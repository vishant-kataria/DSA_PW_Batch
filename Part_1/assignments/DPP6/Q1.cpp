// WAP to print the sum of all the even digits of a given number.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int sum = 0;
    int last_number = 0;
    while(n>0){
        last_number = n%10;
        if (last_number%2==0){
            sum = sum+last_number;
        } 
        n /= 10;
    }

    cout<<"The sum of all even numbers of this number is "<<sum;
}