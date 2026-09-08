#include <iostream>
using namespace std;

void pip(int n){
    if(n==0) return;
    cout<<"Pre:- "<<n<<endl;
    pip(n-1);
    cout<<"In:- "<<n<<endl;
    pip(n-1);
    cout<<"Post:- "<<n<<endl;
}
void zigzag(int n){
    if(n==0) return;
    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
}

int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    // pip(n);
    zigzag(n);
}