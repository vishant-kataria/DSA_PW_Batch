//WAP to count digits of a given number.

#include <iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int a = 0;
    while(1){
        if (n>9){
            a += 1;
            n /= 10;
            continue;
        }
        else if(n==0){
            break;
        }
        else{
            a += 1;
            break;
        }
        
    }
    cout<<a;
    return 0;
}