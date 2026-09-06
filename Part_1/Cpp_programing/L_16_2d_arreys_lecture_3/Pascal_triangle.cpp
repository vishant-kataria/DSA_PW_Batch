#include <iostream>
#include <vector>
using namespace std;

int factorial(int a){
    if(a <= 1){
        return 1;
    }
    return a*factorial(a-1);
}

int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n;
    cout<<"Enter a number here:- ";
    cin>>n;

    vector< vector <int> > v(n);

    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            v[i].push_back(combination(i,j));
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
}