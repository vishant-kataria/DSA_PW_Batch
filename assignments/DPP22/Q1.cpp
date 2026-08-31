#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array:- "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = 0;i<n-1;i++){
        int mini = i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }

        swap(arr[i],arr[mini]);
    }
    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    int arr1[n];
    for(int i = 0;i<n;i++){
        arr1[i] = arr[i];
    }
    for(int i = n-1;i>0;i--){
        if(arr1[i]>arr1[i-1]){
            swap(arr1[i],arr1[i-1]);
            break;
        }
    }
    int number = 0;
    for(int i = 0;i<n;i++){
        int temp = arr[i];
        number = (number*10)+temp;
    }
    int number1 = 0;
    for(int i = 0;i<n;i++){
        int temp = arr1[i];
        number1 = (number1*10)+temp;

    }
    cout<<number1+number;


}