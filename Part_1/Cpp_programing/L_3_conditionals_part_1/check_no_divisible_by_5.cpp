#include <iostream>
using namespace std;
int main(){
    cout<<"SO here we will check if your given number is divisible by 5 or not"<<endl;
    cout<<"Enter the number which you wanna check:- ";
    int a;
    cin>>a;
    if ((a%5)==0){
        cout<<"Divisible by 5";
    }
    else{
        cout<<"Not divisible by 5";
    }

    return 0;
}