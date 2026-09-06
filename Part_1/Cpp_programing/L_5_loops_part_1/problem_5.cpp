// Display this AP - 1,3,5,7,9.. upto ‘n’ terms.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of terms you wanna see of the AP:- ";
    cin>>n;

    for (int i = 1; i<=(1+((n-1)*2));i+=2){
        cout<<i<<endl;
    }

    return 0;
}