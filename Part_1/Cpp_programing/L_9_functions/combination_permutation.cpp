#include <iostream>
using namespace std;

float combination(int n,int r){
    int n_factorial = 1;
    int r_factorial = 1;
    int n_minus_r_factorial = 1;

    for(int i = 1;i<=n;i++){
        n_factorial *=i;
    }
    for(int i = 1;i<=r;i++){
        r_factorial *=i;
    }
    for(int i = 1;i<=n-r;i++){
        n_minus_r_factorial *=i;
    }

    return n_factorial/(n_minus_r_factorial*r_factorial);
}
float permutation(int n,int r){
    int n_factorial = 1;
    int n_minus_r_factorial = 1;

    for(int i = 1;i<=n;i++){
        n_factorial *=i;
    }
    for(int i = 1;i<=n-r;i++){
        n_minus_r_factorial *=i;
    }

    return n_factorial/n_minus_r_factorial;
}


int main(){
    int n,r;
    cout<<"enter the value of n:- ";
    cin>>n;
    cout<<"enter the value of r:- ";
    cin>>r;

    cout<<"The combination is:- "<<combination(n,r)<<endl;
    cout<<"The permutation is:- "<<permutation(n,r)<<endl;
}
