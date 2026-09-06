#include <iostream>
using namespace std;

int factorial(int x){
    int temp = 1;
    for(int i=1;i<=x;i++){
        temp *= i; 
    }
    return temp;
}

int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}



int main(){
    int n;
    cout<<"Enter the number of rows you want the pascal triangle to consist:- ";
    cin>>n;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}