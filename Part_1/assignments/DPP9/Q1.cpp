// Write a function to print squares of n natural numbers.
#include <iostream>
using namespace std;
int square(int x){
    return x*x;
}

int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    cout<<square(n);

}