// Print first ‘n’ fibonacci numbers.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int a = 0;
    int b = 1;
    
    for(int i = 1;i<=n;i++){
        int sum = a+b;
        cout<<b<<endl;

        a = b;
        b = sum;
    }

    return 0;

}