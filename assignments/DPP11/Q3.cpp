// Find the minimum value out of all elements in the array.

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

    int min_1 = INT_MAX;

    for(int i = 0;i<n;i++){
        if(min_1>arr[i]) min_1 = arr[i];
    }

    cout<<"Minimum value in this arrey is "<<min_1<<endl;

}