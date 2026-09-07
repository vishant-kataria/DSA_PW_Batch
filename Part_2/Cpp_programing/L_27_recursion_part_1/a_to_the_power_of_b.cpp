#include <iostream>
using namespace std;
int power1(int a,int b){
    if(b==0) return 1;
    // if(b==1) return a;
    return a*power1(a,b-1);
}
int main(){
    int a;
    int b;
    cout<<"Enter base:- ";
    cin>>a;
    cout<<"Enter exponent:- ";
    cin>>b;

    int power2 = power1(a,b);

    cout<<power2;
}