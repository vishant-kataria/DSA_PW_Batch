#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a no:- ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array:- "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
        
    }

    int bol = true;

    for(int i = 0;i<n-1;i++){
        // cout<<arr[i]<<" ";
        if(arr[i]>arr[i+1]){
            bol = false;
        }
    }

    if(bol == true){
        cout<<"Array is almost sorted";
    }
    else{
        cout<<"Array is not almost sorted";
    }
}