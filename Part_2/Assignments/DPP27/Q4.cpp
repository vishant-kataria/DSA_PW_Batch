#include <iostream>
using namespace std;
void inc_dec(int x,int n){
    if (x==n){
        cout<<x<<" ";
        return;
    }
    cout<<x<<" ";
    inc_dec(x+1,n);
    cout<<x<<" ";
}
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    inc_dec(1,n);

}