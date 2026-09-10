//sum of the digits of a number

#include <iostream>
using namespace std;
int sum_digit(int n){
    if(n==0) return 0;
    return n%10+sum_digit(n/10);
}
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int sum = sum_digit(n);

    cout<<sum;
}