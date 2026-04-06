// Calculate the product of all the elements in the given array.

#include <iostream>
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

    int product = 1;

    for(int i = 0;i<n;i++){
        product *= arr[i];
    }

    cout<<"Product of all the elements of this arrey is "<<product;
    
}