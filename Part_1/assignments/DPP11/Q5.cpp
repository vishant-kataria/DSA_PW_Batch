// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.



#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the length of arrey:- ";
    cin>>n;
    int arr[n];
    int i = 0;
    for(i = 0;i<n;i++){
        cout<<"Enter element no "<<i+1<<" of this arrey:- ";
        cin>>arr[i];
    }
    bool flag = false;
    for(i = 0;i<n;i++){
        if(arr[i] != i+1) {
            flag = true;
            cout<<arr[i];
            // cout<<i;
            break;
        }
    }
    if (flag == true) cout<<" is the wrong element the element should be "<<i+1;
    else cout<<"All good";


}