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
        bool bol = true;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
                bol = false;
            }
        }
        if(bol == true){
            break;
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}