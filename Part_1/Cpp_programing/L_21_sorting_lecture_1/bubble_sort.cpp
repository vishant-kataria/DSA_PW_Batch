#include <iostream>

using namespace std;

void swap_1(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }


    

    for(int i = 0;i<n-1;i++)//loop runs n-1 times
    {   
        bool bol = false;

        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap_1(arr[j],arr[j+1]);
                bol = true;
            }
        }
        if(bol == false){
            break;
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}