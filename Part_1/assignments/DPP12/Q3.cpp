//Check if the given array is sorted or not.

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
    bool test = true;
    //here i will check if it is asscending or not.
    for(int i = 0;i<n-1;i++){
        if(arr[i] <= arr[i+1]){
            test = true;
        }
        else{
            test = false;
            break;
        }
        
    }

    if(test == false){
        for(int i = 0;i<n-1;i++){
            if(arr[i] >= arr[i+1]){
                test = true;
            }
            else{
                test = false;
                break;
            }
            
        }
    }

    
    
    if(test == true){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }


}