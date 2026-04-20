// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

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
    // int unique;
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         if(i==j){
    //             continue;
    //         }
    //         else if(arr[i] == arr[j]){
    //             break;
    //         }
    //         else {
    //             unique = arr[]
    //         }
    //     }
    // }


    for(int i = 0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j]) count++;
        }

        if(count == 1){
            cout<<arr[i];
            return 0;
        }
    }

    cout<<"no unique value";
    return 0;

}