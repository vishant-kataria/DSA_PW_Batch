// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

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

    //considering 0 even
    for(int i = 0;i<n;i++){
        if(i%2==0){
            arr[i] += 10;
        }
        else{
            arr[i] *= 2;
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}