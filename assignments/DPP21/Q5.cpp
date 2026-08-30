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

    int arr1[n];

    for(int i = 0;i<n;i++){
        arr1[i] = arr[i];
    }
    // for(int i = 0;i<n;i++){
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<endl;
    for(int i = 0;i<n-1;i++){
        bool bol = true;
        for(int j = 0;j<n-1-i;j++){
            if(arr1[j]>arr1[j+1]){
                swap(arr1[j],arr1[j+1]);
                bol = false;
            }
        }

        if(bol == true){
            break;
        }
    }

    // for(int i = 0;i<n;i++){
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<endl;
    bool bol = true;
    for(int i = 0;i<n;i++){
        bool flag = false;
        if(i ==0){
            if(arr[i]==arr1[i]||arr[i]==arr1[i+1]){
                flag = true;
            }
        }
        else if(i==n-1){
            if(arr[i]==arr1[i]||arr[i]==arr1[i-1]){
                flag = true;
            }
        }
        else {
            if(arr[i]==arr1[i]||arr[i]==arr1[i-1]||arr[i]==arr1[i+1]){
                flag = true;
            }
        }
        if(flag==false){
            bol = false;
            break;
        }
    }

    if(bol==true){
        cout<<"Yes array is almost sorted";
    }
    else{
        cout<<"No array is not almost sorted";
    }


}