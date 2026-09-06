// Print the nth fibonacci number.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    
    int a = 1;
    int b = 1;
    for (int i = 1;i<=n;i++){
        
        int sum = a+b;
        cout<<a<<endl;
        
        a = b;

        b = sum;
        
        


    }

    // return 0;

    // int a = 0;
    // int b = 1;

    // cout<<b<<endl;
    // b = a+b;
    // a = b;
    
    // cout<<b<<endl;
    // b = a+b;
    // a = b;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // b = a+b;
    // a = b;
    // cout<<b<<endl;
}