#include <iostream>
using namespace std;
int power(int a,int b){
    if(b==1) return a;
    int ans = power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
    
}
int main(){
    int a;
    int b;
    cout<<"Enter the number:- ";
    cin>>a;
    cout<<"Enter the exponent:- ";
    cin>>b;

    int c = power(a,b);

    cout<<c;
}

//time complexity = O(log(n))
//space complexity = O(log(n))