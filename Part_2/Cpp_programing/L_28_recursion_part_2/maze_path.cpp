#include <iostream>
using namespace std;

int count(int n,int m){
    if(n==1 || m==1) return 1;
    return count(n-1,m)+count(n,m-1);
}

void printpath(int n,int m,string s){
    if(n<0 || m<0) return;
    if(n==1 && m==1){
        cout<<s<<endl;
        return;
    }
    printpath(n-1,m,s+"D");//down
    printpath(n,m-1,s+"R");//right

}
int main(){
    int n;
    int m;
    cout<<"Enter the no of rows:- ";
    cin>>n;
    cout<<"Enter the no of columns:- ";
    cin>>m;

    cout<<count(n,m)<<endl;

    printpath(n,m,"");
}