// Find the second largest element in the given Array in one pass using int_mX nd int_min

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

    int max_1 = INT_MIN;

    for(int i = 0;i<n;i++){
        if(max_1<arr[i]) max_1 = arr[i];
    }

    int max_2 = INT_MIN;

    for(int i = 0;i<n;i++){
        if(max_2<arr[i]&&arr[i]!=max_1) max_2 = arr[i];
    }

    cout<<"Largest number in this arrey is "<<max_1<<endl;
    cout<<"Second largest number in this arrey is "<<max_2<<endl;
}