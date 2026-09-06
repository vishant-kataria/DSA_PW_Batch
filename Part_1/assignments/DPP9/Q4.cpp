// Write a function to count the number of digits in a number and then print the square of this number.

#include <iostream>
using namespace std;
int square_of_no_of_digits(int x){
    int a = 0;
    int temp = x;
    while(temp!=0){
        if (temp<10){
            a += 1;
            break;
        }
        else{
            a += 1;
            temp /= 10;
        }
    }
    return a*a;
}

int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    cout<<square_of_no_of_digits(n);

}