// Count the number of elements strictly greater than x.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of array:- ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter element number "<<i+1<<":- ";
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the value you wanna check:- ";
    cin>>x;

    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>x){
            count += 1;
        }
    }

    cout<<"No of elements greater than "<<x<<" is "<<count<<".";

    return 0;

}