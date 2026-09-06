// Print hello world ‘n’ times. Take ‘n’ as input from user

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    for (int i = 1;i<=n;i++){
        cout<<"hello world"<<endl;
    }

    return 0;

}