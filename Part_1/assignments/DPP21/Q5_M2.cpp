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
    bool flag = true;
    for(int i = 0;i<n-1;i++){
        int greater = 0;
        for(int j = 0;j<n;j++){
            if(arr[j]>arr[i]){
                greater++;
            }
        }
        int apparent_index = n-greater-1;
        if(apparent_index==0){
            if(i!=apparent_index&&i!=apparent_index+1){
            flag = false;
            break;
            }
        }
        else if(apparent_index==n-1){
            if(i!=apparent_index&&i!=apparent_index-1){
            flag = false;
            break;
            }
        }
        else{
            if(i!=apparent_index&&i!=apparent_index-1&&i!=apparent_index+1){
            flag = false;
            break;
            }
        }
    }
    if(flag==true){
        cout<<"Yes the array is almost sorted";
    }
    else{
        cout<<"No the array is not almost sorted";
    }
}