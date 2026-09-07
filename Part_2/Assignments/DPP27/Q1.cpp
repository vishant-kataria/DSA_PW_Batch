#include <iostream>
using namespace std;
int sumodd(int a,int b){
    if(a>b) return 0;
    if(a%2!=0) return a+sumodd(a+2,b);
    else{
        return sumodd(a+1,b);
    }
}
int main(){
    int a;
    int b;
    cout<<"Enter a number:- ";
    cin>>a;
    cout<<"Enter another number:- ";
    cin>>b;

    int total = sumodd(a,b);

    cout<<total;
}