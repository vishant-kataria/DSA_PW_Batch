#include <iostream>
using namespace std;

// int sum1(int i,int n){
//     if(i>n) return 0;
//     int total = i + sum1(i+1,n);
//     return total;
// }

int sum1ton(int sum,int n){
    if(n==0) return sum;
    return sum1ton(sum+n,n-1);
}

int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    // int total = sum1(0,n);
    int total = sum1ton(0,n);
    

    cout<<total;
}