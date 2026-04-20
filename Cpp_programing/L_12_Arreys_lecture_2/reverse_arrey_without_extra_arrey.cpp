// write a program to reverse an array without using an external array

#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the length of array:- ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter value no "<<i+1<<":- ";
        cin>>arr[i];
    }
    int size_of_array = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = size_of_array-1;

    while(i<j){
        arr[i] = arr[i]+arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];

        i++;
        j--;
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }


}