// Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.

#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the no of terms you wanna see of the GP:- ";
    cin>>n;
    int a = 1;
    for(int i = 1;i<n;i++){
        a = a * 2;
    }
    for (int i = 1;i<=a;i*=2){
        cout<<i<<endl;
    }

    return 0;
}