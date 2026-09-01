#include <iostream>
#include <algorithm>
#include <climits>
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
    int temp[n];
    for(int i = 0;i<n;i++){
        temp[i] = arr[i];
    }
    int count = 0;
    for(int i = 0;i<n-1;i++){
        int mini = i;
        for(int j = i;j<n;j++){
            if(temp[j]<temp[mini]){
                mini = j;
            }
        }
        swap(temp[i],temp[mini]);
        arr[mini] = count;
        count++;

    }
}