// Given an array, predict if the array contains duplicates or not.

#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cout<<"Enter the length of arrey:- ";
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cout<<"Enter element no "<<i+1<<" of this arrey:- ";
        cin>>arr[i];
    }
    int bool_1 = false;
    for(int i = 0;i<n;i++){
        int dupes = arr[i];
        for(int j = 0;j<n;j++){
            if(dupes == arr[j] && j != i){
                bool_1 = true;
                
            }
            
        }
    }

    if(bool_1 == true) cout<<"Duplicate values in arrey exist";
    else cout<<"Duplicate value does not exist in this arrey";

}