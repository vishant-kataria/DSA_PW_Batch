// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of array:- ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter element number "<<i+1<<":- ";
        cin>>arr[i];
    }

    int sum_at_even_indices = 0;
    int sum_at_odd_indices = 0;
    //considering 0 even
    for(int i = 0;i<n;i++){
        if(i%2==0){
            sum_at_even_indices += arr[i];
        }
        else{
            sum_at_odd_indices += arr[i];
        }
    }

    cout<<sum_at_even_indices-sum_at_odd_indices;

}